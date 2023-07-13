// 1744C.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using pii = pair<int, int>;
int t, n;
char x;
string s;

int main(){
	cin >> t;
	while (t--){
		cin >> n >> x >> s;
		/*if (n == 1) {
			cout << 0 << endl;
			continue;
		}*/
		int i = 1;
		vector<int> g;
		vector<int> tar;
		for (char w : s){
			if (w == x) tar.push_back(i);
			if (w == 'g') g.push_back(i);
			i++;
		}
		int maxi = 0;
		for (int z : tar){
			bool f = 1;
			for (int w : g){
				if (z <= w) {f = 0, maxi = max(maxi, w - z); break;}
			}
			if (f) maxi = max(maxi, n - z  + g[0]);
		}
		cout << maxi << endl;
	}
}