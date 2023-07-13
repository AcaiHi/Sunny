//96A.cpp
#include<iostream>
using namespace std;
int z, o;
int main(){
	string s;
	cin >> s;
	for (char x : s){
		if (x == '0') z++, o = 0;
		else if (x == '1') o++, z = 0;
		if (z  >= 7|| o >= 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}