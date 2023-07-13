// 1328C.cpp
#include<iostream>
using namespace std;
int t, n, x, f;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		string s;
		cin >> s;
		string L1 = "1", L2 = "1";
		for (int i = 1; i < n; i++){
			if (!f) {
				if (s[i] == '1') L1 += s[i], L2 += '0', f = 1;
				else  {
					char res = (s[i] - '0') / 2 + '0';
					L1 += res, L2 += res;
				}
			}else {
				L1 += '0', L2 += s[i];
			}
		}
		f = 0;
		cout << L1 << "\n" << L2 << "\n";
	}
}