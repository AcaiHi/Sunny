#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
using ll = long long ;
using PII = pair<ll, ll>;
const ll N = 1e5;
template<typename T>
struct fenwick{
    int n;
    vector<T> a;
    fenwick(int n = 0) {init(n);}

    void init(int n){ this->n = n; a.assign(n, T());}

    void add(int p, T v){
        for (int i = p + 1; i <= n; i += i & -i){
            a[i - 1] += v;
        }
    }

    T sum(int p){
        auto sum = T();
        for (int i = p; i > 0; i -= i & -i){
            sum += a[i - 1];
        }
        return sum;
    }

    T ask(int l, int r){
        return sum(r) - sum(l);
    }
};
int main(){
    ll t; cin >> t;
    while (t--){
        int n; cin >> n;
        fenwick<ll> fen(n + 1);
        int q[n]; for (int &it : q) cin >> it, it--;
        ll sum = 0;
        for (int x : q){
            sum += fen.ask(x, n);
            fen.add(x, 1);
        }
        cout << sum << endl;
    }
}