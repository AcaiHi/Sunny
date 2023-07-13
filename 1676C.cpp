//1676C.cpp
#include<iostream>
#include<cstring>
using namespace std;
using ll = long long;
int t, n, m;
const string tt = "eaz";
int find(char x){
	return strchr(tt.c_str(), x) -  tt.c_str();
}
int main(){
	cin >> t;
	while (t--){
		string x;
		cin >> n >> m;
		string s[n]; for (string &it : s) cin >> it; 	
		ll ans = 0x3f3f3f3f3f3f3f3f;
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				long long res = 0;
				for (int k = 0; k < m; k++){
					res += abs(s[i][k] - s[j][k]) * 1ll;
					/*cout << res << " ";
					if (s[i][k] > s[j][k]){
						if (find(s[i][k]) == 1 || find(s[j][k]) == 0) res--;
						else if (find(s[j][k]) == 0 || find(s[j][k]) == 2) res--;
					}else if (s[i][k] < s[j][k]) {
						cout << "=== " << find(s[i][k]);
						if (find(s[j][k]) == 1 || find(s[j][k]) == 0) res--;
						else if (find(s[i][k]) == 0 || find(s[i][k]) == 2) res--;
					}
					cout << "en " << res << endl;*/
				}
				// cout << s[i] << " " << s[j] << " " << res << endl;
				ans = min(ans, res);
			}
		}
		cout << ans << endl;
	}
}