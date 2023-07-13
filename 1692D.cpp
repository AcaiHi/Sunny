// 1692D.cpp
#include<iostream>
#include<set>
using namespace std;
int t, n;
string s;
int main(){
	cin >> t;
	while (t--){
		cin >> s >> n;

		int h = n / 60, m = n % 60;
		string os = s;int cnt = 0;
		int f = 0;
		set<string> ch;
		do {
			ch.insert(s);
			int x = (10 * (s[0] - '0') + (s[1] - '0') + h);
			int y = (10 * (s[3] - '0') + (s[4] - '0') + m);
			if (y >= 60) x++, y %= 60;
			if (x >= 24) f = 1, x %= 24;
			string tx= to_string(x);
			string ty = to_string(y);
			if (tx.length() == 1) tx = '0' + tx;
			if (ty.length() != 2) ty = '0' + ty;
			s = tx + ':' + ty;
			if (s[0] == s[4] && s[1] == s[3]) cnt++;
			// cout << s << endl;
		}while (!ch.count(s));
		cout << cnt << endl;
	}
}