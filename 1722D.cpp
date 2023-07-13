// 1722D.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
#define F first
#define S second
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		string s;
		cin >> s;
		vector<ll> v;
		ll res = 0;
		for (int i = 0; i < n; i++){
			int x = i, y = n - i - 1;
			if (s[i] == 'L') {
				res += x* 1ll;
				v.emplace_back(max(0, y - x));
			}else v.emplace_back(max(0, x - y)), res += y*1ll;
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		for (ll it : v) res += it, cout << res << " ";
		cout << endl;
	}
}