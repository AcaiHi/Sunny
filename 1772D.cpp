// 1772D.cpp
#include<iostream>
using namespace std;
const int N = 2 * 1e5 + 5;
int q[N], n, t; 
int x, y;
int solve(int q[], int u){
	int t[N];
	for (int i = 0; i < n; i++)
		t[i] = abs(q[i] - u); 
	for (int i = 0; i < n - 1; i++)
		if (t[i] > t[i + 1]) return -1;
	return u;
}
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> q[i];
		
	}
}