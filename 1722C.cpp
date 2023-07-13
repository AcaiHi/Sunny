// 1722C.cpp
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		vector<string> v(n * 3);
		vector<int> ans(3, 0);
		map<string, int> m;
		for (string &it : v) cin >> it, m[it]++;
		for (int i = 0; i < 3; i++){
			for (int j = i * n, k = 0; k < n; j++, k++){
				if (m[v[j]] == 1) ans[i] += 3;
				else if (m[v[j]] == 2) ans[i]++; 
			}
		}
		for (auto i : ans) cout << i << " ";
		cout << endl;
	}
}