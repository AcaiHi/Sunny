#include<iostream>
#include<cstring>
using namespace std;
char ex[] = {'a', 'o', 'y', 'e', 'u', 'i'};
int main(){
	string ans = "";
	string t;
	cin >> t;
	for (char &x : t){
		bool flag = 1;
		x = tolower(x);
		for (char y : ex){
			if (x == y){
				flag = 0;
				break;
			}
		}
		if (flag){
			cout << '.' << x;
		}
			
	}
	cout << ans;
	return 0;
}