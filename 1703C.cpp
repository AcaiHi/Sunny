// 1703C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int n, t;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int q[n]; for (int &it : q) cin >> it;
		int ss;
		string s; int i = 0;
		while (n--){
				
			cin >> ss >> s;
			reverse(s.begin(), s.end());
			for (char x : s){
				if (x == 'U') {
					q[i]--;
					if (q[i] == -1) q[i] = 9;
				}else q[i] = (q[i] + 1) % 10; 
			}
			i++;
		}
		for (int it : q) cout << it << " ";
		cout << endl;
	}
}