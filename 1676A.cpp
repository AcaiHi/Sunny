// 1676A.cpp
#include<iostream>
using namespace std;
int t, n;
char x, y, z;
int main(){
	cin >> t;
	while (t--){
		cin >> x >> y >> z;
		int res = x+ y+z;
		cin >> x >> y >> z;
		if (res == x + y + z){
			cout << "Yes\n";
		}else cout << "No\n";
	}
}