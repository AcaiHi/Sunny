// 1699D.cpp
#include<iostream>
using namespace std;
int t, n;
string s;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> s;
		int B = 0, R = 0;
		bool f = 1;
		for (char x : s){
			if (x == 'W'){
				if ((B || R) && (!B || !R)){
					f =  0;
					break;
				}
				B = R = 0;
			} else if (x == 'B') B++;
			else if (x == 'R') R++;
		}
		if (f) f = (B && R) || (!B && !R);
		cout << (f ? "Yes\n" : "No\n");
	}
}