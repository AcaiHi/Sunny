// 1722E.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int t, n, Q;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> Q;
		int ma[1005] = {};
		int mi[1005] = {};
		for (int i = 0; i < n; i++){
			int x, y; cin >> x >> y;
			if (x >= y) ma[x] += x * y;
			else ma[y] += x * y; 
		}
		for (int i = 1; i < 1000; i++)
			ma[i] += ma[i- 1];
		while (Q--){
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			int L = y1, R = y2;
			if (x1 >= y1) L = x1;
			if (x2 >= y2) R = x2;
			cout << ma[R] << " " << ma[L] << endl;
			cout << ma[R] - ma[L] << endl;  
		}
	}
}