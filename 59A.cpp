//59A.cpp
#include<iostream>
using namespace std;
int main(){
	string s, s1 = "", s2 = "";
	int low = 0, high = 0;
	cin >> s;
	for (char x : s){
		if (islower(x))
			low++;
		else 
			high++;
		s1 += tolower(x), s2 += toupper(x);
	}
	if (low >= high)
		cout << s1;
	else 
		cout << s2;
}