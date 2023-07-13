//266B.cpp
#include<iostream>
using namespace std;
int main(){
	string s;
	int n, t;
	cin >> n >> t >> s;
	
	while (t--){
		string tmp = s;
		for (int i = 0; i + 1 < n; i++){
			if (s[i] == 'B' && s[i + 1] == 'G')
				swap(tmp[i], tmp[i + 1]);
		}
		s = tmp;
	}
	cout << s;
}