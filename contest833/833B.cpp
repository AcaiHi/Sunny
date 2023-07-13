//833B.cpp
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	cout << "hello\n";
	/*int t; cin >> t;
	while (t--){
		string  s; int n, cnt = 0;
		cin >> n >> s;
		memset(vis, 0, sizeof (vis));
		for (int i = 0; i < n; i++)
			if (!vis[s[i]])
				cnt++, vis[s[i]] = 1;
		cout << () << endl;
	}*/
	cout << "hello\n";
	int cnt = 0;
	for (int i = 0; i < (6 << 1); i++){
		cout << "hello\n";
		int t = i;
		bool flag = 0;
		for (int j = 0; j < 6; j++){
			if (t % i) flag = 1;
			if (flag && !(t % i))
				{flag = 0;break;}
			t >>= 1; 
		}
		if (flag) cnt++;
	}
	cout << cnt;
}