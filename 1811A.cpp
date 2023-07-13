// 1811A.cpp

#include<iostream>
#include<set>
using namespace std;

#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		string s, tmp; cin >> tmp;
		bool ans = 0;
		for (char x : tmp){
			if (!ans && b > x - '0') s += to_string(b), ans = 1;
			s += x; 
		}

		cout << (ans ? s : s + to_string(b)) << endl;
	}
}