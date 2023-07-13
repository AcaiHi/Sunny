#include<iostream>
using namespace std;
int bit[256];
int main(){
	string s;
	cin >> s;
	int cnt = 0;
	for (char x : s)
		if (!bit[x]){
			bit[x] = 1;
			cnt++;
		}
	if (cnt & 1) cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";
}