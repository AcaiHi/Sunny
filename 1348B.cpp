// 1348B.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int t, n ,tar, q[105];
int vis[105];
void construct(int var, int len){
	for (int i = 0; i < 105; i++){
		if (vis[i]) cout << i << " ";
	}
	for (int i = len; i < tar; i++) cout << var << " ";
}
int main(){
	cin >> t;
	while (t--){
		fill(vis, vis + 105, 0);
		cin >> n >> tar;
		int q[n], text = 0, var = 0;
		for (int i = 0; i < n; i++)
		 cin >> q[i], text += vis[q[i]] == 0, vis[q[i]]++, var = q[i];
		if (text > tar) {cout << "-1\n"; continue;}
		else {
			cout << n * tar << endl;
			while (n--) construct(var, text);
			cout << endl;
		}
	}
}