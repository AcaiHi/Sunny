//69A.cpp
#include<iostream>
using namespace std;
int main(){
	int a, b, c,x = 0, y = 0, z = 0;
	int n;
	cin >> n;
	while (n--){
		cin >> a >> b >> c;
		x += a; y += b; z += c;
	}
	if (x || y || z)
		cout << "NO\n";
	else 
		cout << "YES\n";
}