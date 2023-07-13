#include<iostream>
using namespace std;
int t[4];
int main(){
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i += 2){
		t[s[i]-'0']++;
	}

	for (int i = 1, k = 0; i <= 3; i++){
		for (int j = 0; j < t[i]; j++){
			s[k] = i + '0';
			k += 2;
		}
	}
	cout << s;
}