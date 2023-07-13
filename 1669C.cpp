// 1669C.cpp
#include<iostream>
using namespace std;
int x, n, t, tt[2];
int main(){
	cin >> t;
	while (t--){
		cin >> n >> x;
		tt[1] = x & 1;
		cin >> x; tt[0] = x & 1;
		bool f = 1;
		for (int i = 3; i <= n; i++){
			cin >> x;
			if (tt[i & 1] ^ x & 1) f = 0; 
		}
		cout << (f ? "Yes\n" : "No\n");
	}
}