// 1669A.cpp
#include<iostream>
using namespace std;
int n ,t;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		if (n <= 1399) cout << "Division 4\n";
		else if (n <= 1599) cout << "Division 3\n";
		else if (n <= 1899) cout << "Division 2\n";
		else cout << "Division 1\n";
	}
}