// 1692A.cpp
#include<iostream>
using namespace std;
int t, n;

int main(){
	cin >> t;
	while (t--){
		int a, q[3], cnt = 0;
		cin >> a;
		for (int &it : q) {cin >> it; if (it > a) cnt++;}
		cout << cnt << endl;
		
	}
}