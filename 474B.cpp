// 474B.cpp
#include<iostream>
using namespace std;
int n, q;
int main(){
	cin >> n;
	int p[n] = {}, i = -1; 
	for (int &it : p) { 
		cin >> it; if (++i) it += p[i - 1];
	}
	cin >> q;
	while (q--){
		int tar; cin >> tar;
		cout << lower_bound(p, p + n, tar) - p + 1 << endl;
	}
}