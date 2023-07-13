// 1520D.cpp
#include<iostream>
#include<unordered_map>
using namespace std;
using um = unordered_map<int, int>;
int t, n, x;
int main(){
	cin >> t;
	while (t--){
		int cnt = 0;
		cin >> n;
		um s;
		for (int i = 1; i <= n; i++){
			cin >> x;
			if (s.count(x - i)) cnt += s[x - i];
			s[x - i]++;
		}
		
		cout << cnt << endl;
	}
}