// 489B.cpp
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, m;
int main(){
	cin >> n;
	int b[n]; for (int &it : b) cin >> it;
	cin >> m;
	int g[m]; for (int &it : g) cin >> it;
	int cnt = 0;
	sort(b, b + n);
	sort(g, g + m);
	for (int x : b){
		for (int &y : g){
			if (abs(x - y) <= 1) {
				cnt++;
				y = 1000;
				break;
			}
		}
	}
	cout << cnt;
}