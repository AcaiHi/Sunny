// 1669B.cpp
#include<iostream>
#include<unordered_map>
using namespace std;
// using int = long long;
int t, n;
string x;
int main(){
	cin >> t;
	while (t--){
		unordered_map<string, int> s;
		cin >> n;
		while (n--){
			cin >> x;
			s[x]++;
		}
		int rs = 2;
		string ans;
		for (auto it : s){
			// cout << it.first << " " << it.second << endl;
			if (rs < it.second) rs = it.second, ans = it.first;
		}
		cout << (rs == 2 ? "-1" : ans) << endl;
	}
}