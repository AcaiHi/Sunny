// 1703B.cpp
#include<iostream>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		string s;
		int ta[26] = {}, cnt = 0;
		cin >> n >> s;
		for (char x : s) {
			if (ta[x - 'A']) cnt++;
			else ta[x - 'A'] = 1, cnt += 2;
		}
		cout << cnt << endl;
	}
}