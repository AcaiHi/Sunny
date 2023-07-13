//1676E.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int t, n;
bool cmp(int x, int y){
	return x > y;
}
int main(){
	cin >> t;
	while (t--){
		int tq;
		cin >> n >> tq;
		int x[n], p[n + 1] = {}, i = 1;
		for (int &it : x) cin >> it;
		sort(x, x + n, cmp); 
		for (int i = 1; i <=n; i++)
			p[i] = p[i - 1] + x[i - 1];
		int tar;
		while (tq--){
			cin >> tar;
			int res = lower_bound(p + 1, p + n + 1, tar) - p; 
			cout << (res > n ? -1 : res)<< endl;
		}
	}
}