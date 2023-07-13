// 1354B_v2.cpp
#include<iostream>
#include<vector>

using namespace std;
int t;
string s;

int main() {
	cin >> t;
	while (t--) {
		cin >> s;
		int ans = 0x7fffffff;
		int n = s.length();
		vector<pair<char, int> > c;
		for(char x : s) 
			if(!c.size() || c.back().first != x) c.emplace_back(x, 1);
			else c.back().second++;
		for(int i = 1; i + 1 < c.size(); i++)
			if(c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
		cout << (ans == 0x7fffffff ? 0 : ans)<< endl;

	}
}