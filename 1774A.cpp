// 1774A.cpp
#include<iostream>
using namespace std;
int t, n;
string s;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> s;
		bool f = 0;
		int i = 0;
		for (char x : s){
			if (x == '1') {
				if (f && i) cout << '-';
				else if (i)cout << '+';
				f = !f;
			}else if (i)cout << '+';
			i++;
		}
		cout << endl;
	}
}