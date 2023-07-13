// 1526B.cpp
#include<iostream>
using namespace std;
int t;
string n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int v = 0, res, f = 1;
		for (int i = 0; i < n.length() && f; i++){
			int x = n[i] - '0';
			if (!i) res = x;	
			else if (i == n.length() - 1 && res != x) f = 0;
			else if (res > x) f = 0;
			else res += (x - res);
		}
		cout << (f ? "Yes\n" : "No\n");
	}
}