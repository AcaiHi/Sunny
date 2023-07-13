// 466A.cpp
#include<iostream>
using namespace std;
int n, m, a, b;
int main(){
	cin >> n >> m >> a >> b;
	int res = n % m;
	cout << min(n * a, n / m * b) + min(res * a, b); 
	
}