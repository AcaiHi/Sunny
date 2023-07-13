// 514A.cpp
#include<iostream>
using namespace std;
int n, mini = 0xfffffff, f;
string s;
int main(){
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		if (!i){
			if (s[i] >= '5' && s[i] != '9') cout << '9' - s[i];
			else cout << s[i];
		}else {
			if (s[i] >= '5') cout << '9' - s[i];
			else cout << s[i];
		}
	}
}