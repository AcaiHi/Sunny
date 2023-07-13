// 24Av2.cpp
#include<iostream>
using namespace std;
const int N = 1e6+5;
int q[N], vis[N], pos[N], spos[N];
int main(){
	int t; cin >> t;
	while (t--){
		int n;
		cin >> n;
		fill(vis, vis + n + 1, 0);
		fill(pos, pos + n + 1, 0);
		fill(spos, spos + n + 1, 0);
		for (int i = 1; i <= n; i++){
			cin >> q[i];
			if (vis[q[i]]) pos[i] = pos[i - 1];
			else pos[i] = pos[i - 1] + 1, vis[q[i]] = 1; 
		}
		
		int maxi = -1, s = 1, e = 1;
		for (int i = 1; i <= n; i++){
		//	cout << pos[i] << " ";
			if (maxi < i - pos[i] - 1){
				e = i;
				maxi = i - pos[i] - 1;
			}
		}
		//cout << endl;
		fill(vis, vis + n + 1, 0);
		for (int i = e; i > 0; i--){
			if (vis[q[i]]) spos[i] = spos[i + 1];
			else spos[i] = spos[i + 1] + 1, vis[q[i]] = 1;
			//cout << spos[i] << " ";
		}
		//cout << endl;
		for (int i = e; i > 0; i--){
			if (maxi == e - i - spos[i]){
				s = i;
				break;
			}
		}
		cout << s << " " << e << endl;

	}
}