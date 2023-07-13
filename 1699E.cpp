// 1699E.cpp
#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int t, n, q1[26], q2[26];
int main(){
	#define int long long
	cin >> t;
	while (t--){
		cin >> n;
		fill(q1, q1 + 26, 0);
		fill(q2, q2 + 26, 0);
		unordered_set<string> pa;
		unordered_map<string, int> m;
		while (n--){
			string it;
			cin >> it;
			// if (!pa.count(it))  
			q1[it[0] - 'a']++;
			q2[it[1] - 'a']++;
			m[it]++;
		}
		int ans = 0;
		for (char x = 'a'; x <= 'z'; x++){
			int tf = q1[x - 'a'], ts = q2[x - 'a'], r1 = 0, r2 = 0;
			for (auto it : m){
				if (it.first[0] == x) ans += it.second * (tf - it.second), tf -= it.second;
				if (it.first[1] == x && !r2) ans += it.second * (ts - it.second), ts -= it.second; 
			}
			// cout << x << " " << ans << endl;
		}
		cout << ans << endl;
	}
}