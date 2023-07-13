// 1703A.cpp
#include<iostream>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		for (char &x : s) x = tolower(x);
		if (s == "yes")
			cout << "yes\n";
		else cout << "no\n";
	}
}