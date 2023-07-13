//546A.cpp
#include<iostream>
using namespace std;
int main(){
	int k, n, w, ans = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
		ans += k * i;
	cout << max(0, ans - n);
}