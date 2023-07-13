#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
using ll = long long;
string s;
int n;
int main(){
	cin >> n;
	cin >> s;
	/*ll bit = 1;
	for (int i = 1; i <= n; i++){
		 bit <<= 1ll; 
	}
	
	int ans = 100;
	for (ll i = 0; i < (1ll << n); i+= 1ll){
		ll x = i,flag = 1;
		string t = " ";
		for (int j = 0; j < n; j++){
			if (!(x % 2)){
				t += s[j];
				if (s[j] == s[j - 1]){
					flag = 0;
					break;
				}
			}
			x >>= 1;
		}
		if (flag) 
			ans = min(ans, (int)(s.length() - t.length() + 1));
	}
	cout << ans;*/
}