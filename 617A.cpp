//617A.cpp
#include<iostream>
using namespace std;
int main(){
	int n, ans = 0;
	cin >> n;
	for (int i = 5; i >= 1; i--)
		ans += n / i, n %= i;
	cout << ans;
}