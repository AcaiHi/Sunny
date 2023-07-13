#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using ll = long long;
const int mod = 998244353;
int hh;
vector<int> v;

inline int pow_(ll a, int n, int p){
int r=1;while(n){if(n&1)r=r*a%p;n>>=1;a=a*a%p;}return r;}

template<const int BASE, const int MODULO>
class Hashing {
private:
	typedef long long ll;
	vector<int> ipow, hash;
	int n;
	template<typename T>
	void create_hash(const T * str) {
		ipow.resize(n);
		hash.resize(n);
		
		ipow[0] = 1;
		hash[0] = str[0];
 
		ll inv = pow_(Base, Modulo - 2, Modulo);
		ll prv = 1;
 
		for(int i = 1; i < n; ++i) {
			prv = prv * Base % Modulo;
			ipow[i] = ipow[i-1] * inv % Modulo;
			hash[i] = hash[i-1] + prv * str[i] % Modulo;
			if(hash[i] >= Modulo) hash[i] -= Modulo;
		}
	}
public:
	Hashing (string & s) : n(s.size()) { create_hash(s.data()); }
	template<typename T>
	Hashing (const T * s, int n_) : n(n_) { create_hash(s); }
 
	int get_hash(int s = 0, int e = -1) {
		if (e == -1) e += n; 
		ll ans = hash[e];
		if(s > 0) {
			ans = ans - hash[s-1];
			if(ans < 0) ans += Modulo;
			ans = ans * ipow[s] % Modulo;
		}
		return ans;
	}
	const int Base = BASE;
	const int Modulo = MODULO;
};
// using Hash = Hashing<256, mod>;
 
 
int n; string s;
 
template<typename T>
int get_hash(int i, int j, T & h) {
	if (j < 0) return 0;
	if (i >= n) return 0;
	assert(i >= 0);
	assert(j < n);
	return h.get_hash(i, j);
}
 
template<typename T>
int get_hash(int i, T & h) {
	ll u = get_hash(0, i-1, h);
	ll v = get_hash(i+2, n-1, h);
	u = u + v * pow_(h.Base, i, h.Modulo) % h.Modulo;
	u %= h.Modulo;
	return u;
}
 
template<typename A, typename B>
pii get_hash(int i, A & h1, B & h2) {
	return {get_hash(i, h1), get_hash(i, h2)};
}
int Hash(string S) {
    int b = hh, p = 1'000'000'007;
    int ans = 0;
    for (int i = 0; char c : S) ans = (ans * v[i++] + c) % p;
    return ans;
}
int Hash2(string S) {
    int b = 131, p = 1'000'000'007;
    int ans = 0;
    for (char c : S) ans = (ans * b + c) % p;
    return ans;
}
void solve(int tc = 0) {
	cin >> n;
	cin >> s;
	Hashing<256, mod> h1(s);
	Hashing<256, (int)1e9+7> h2(s);
	set<pii> s;
	for (int i = 0; i + 2 <= n; ++i) {
        s.insert(get_hash(i, h1, h2));
	}
    // for (auto [x, y] : s) cout << x << ' ' << y << endl;
	cout << s.size() << '\n';
}

int main(){
    int t; cin >> t;
    srand(rand());
    v.assign(200000, 0);
    for (int &x : v) x = (rand()) % 0x7fffffff;
    while (t--){
        solve();
        // int n; cin >> n;
        // string s; cin >> s;
        // string L, R = s.substr(2), tmp = s.substr(0, 2);
        
        // set<int> use;
        // // Hashing<256, mod> h1(s);
        // // Hashing<256, (int)1e9 + 7> h2(s);
        // // cout << get_hash(3, h1, h2).second << ' ';
        // use.emplace(Hash2(R));
        // for (int i = 1; i + 1 < n; i++){
        //     L += tmp.front(), tmp = tmp.substr(1) + R.front(), R = R.substr(1);
        //     use.emplace(Hash2(L + R));
        // }
        // // for (string x : use) cout << x << ' ';
        // cout << use.size() << endl;
    }
}