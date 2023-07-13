// 1355A.cpp
#include <iostream>
#include <algorithm>
using namespace std;
using ll = unsigned long long;

void add(string &s, ll a){
	s = to_string(stoull(s) + a);
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t; cin >> t;
	while (t--){
		string s;
		ll n; cin >> s >> n;
		int x = 0;
		while (--n){
		// for (int i = 0; i < 20; i++){
			ll a = *max_element(s.begin(), s.end()) - '0';
			ll b = *min_element(s.begin(), s.end()) - '0';
			if (b == 0) break;
			add(s, a * b);

			// cout << s << endl;
		}

		cout << s << '\n';
	}
}