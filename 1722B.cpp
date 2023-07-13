// 1722B.cpp
#include<iostream>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		string s1, s2;
		cin >> n >> s1 >> s2;
		bool f = 1;
		for (int i = 0; i < n; i++){
			if (s1[i] != s2[i] && (s1[i] == 'R' || s2[i] == 'R')) f = 0;
			/*else if (f){
				if (s1[i] == 'R' && s2[i] == 'R') continue;

			}*/
		}
		cout << (f ? "Yes\n" : "No\n");

	}
}