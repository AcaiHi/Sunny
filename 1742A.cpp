// 1742A.cpp
#include<iostream>
using namespace std;
int t, n;

int main(){
	cin >> t;
	while (t--){
		int a, b, c;
		cin >> a >> b >> c;
		bool f = a + b == c || a + c == b || b + c == a;
		cout << (f ? "Yes\n" : "No\n");
	}
}