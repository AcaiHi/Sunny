// 1744A.cpp
#include<iostream>
#include<cstring>
using namespace std;
int n, t;
char ta[55];
int q[55];
int main(){
	cin >> t;
	while (t--){
		memset (ta, '\0', sizeof ta);
		cin >> n;
		for (int i = 0; i < n; i++) cin >> q[i];
		string s;
		cin >> s;
		bool f = 1;
		int i= 0;
		for (char x : s){
			if (ta[q[i]] != '\0') {
				if (ta[q[i]] != x) {
					f = 0;
					break;
				}
			} else {
				ta[q[i]] = x;
			}
			i++;
		}
		cout << (f ? "Yes\n" : "No\n");
	}
}