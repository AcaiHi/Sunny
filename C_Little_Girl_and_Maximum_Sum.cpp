#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
constexpr ll inf = 0x3f3f3f3f3f3f3f3f;
struct Min{
    ll x;
    Min(ll x = inf) : x(x) {}

    Min &operator+=(Min a){
        x = min(a.x, x);
        return *this;
    }
};

template<typename T>
struct fenwick{
    int n;
    vector<T> a;
    fenwick(int n = 0) {init(n);}

    void init(int n){ this->n = n; a.assign(n, T());}

    void add(int p, T v){
        for (int i = p + 1; i <= n; i += (i & -i)){
            a[i - 1] += v;
        }
    }

    T sum(int p){
        auto ans = T();
        for (int i = p; i > 0; i -= (i & -i)){
            ans += a[i - 1];
        }
        
        return ans;
    }

    T ask(int l, int r){
        return sum(r) - sum(l);
    }
};

int main(){
    int n, Q; cin >> n >> Q;
    int q[n]; for (int &it : q) cin >> it;
    sort(q, q + n);
    fenwick<ll> bit(n + 1);
    ll ans = 0;
    for (int i = 0; i < Q; i++){
        int l, r; cin >> l >> r;
        bit.add(l, 1); bit.add(r + 1, -1);
    }
    vector<ll> v;
    for (int i = 1; i <= n; i++)
        v.push_back(bit.sum(i + 1).x);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        ans += v[i] * q[i];
    cout << ans;
}