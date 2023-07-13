// 698A.cpp
#include<iostream>
using namespace std;
const int N = 105;
int dp[N][4], n, res;
int a, b, c, d, tmp; // 0 1 2 3
int main(){
	cin >> n;
	int x;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (x == 0){
			res++, b = c = d = 0;
		} else if (x == 1){
			if (d && b && c) res++; b = c = d = 0;
			else if (d && !b) b = 1, d = 0;
			else if (d && !c) c  
			b = 1;
		} else if (x == 2){
			c = 1;
		} else if (x == 3){
			d = 1;
		}
	}
}