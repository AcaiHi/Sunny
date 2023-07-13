//110A.cpp
#include<iostream>
using namespace std;
using ll = long long;
int main(){
	string s;
	cin >> s;
	int cnt = 0;
	for (char x : s)
		cnt += (x == '7' || x == '4');
	
	if (cnt == 7 || cnt == 4)
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}