// 1760C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 2 * 1e5 + 5;
int n, t, q[N];
bool d, u, f;
int x, tmp, y;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		f = u = 0; d = 1;
		//cout << n << endl;
		if (n < 2){ 
			cin >> x;
			cout << "YES\n";
			continue;
		}
		for (int i = 0; i < n - 1; i++){
			cin >> x;
			//cout << tmp << " ";
			if (!i) {
				cin >> y;
				if (x < y) u = 1, d = 0;
				tmp = y;
			}
			else if (f) continue;
			else if (d){
				//cout << "d ";
				if (tmp < x)
					u = 1, d = 0;
				tmp = x;
			}
			else if (u){
				if (tmp > x) f = 1;
				tmp = x;
			}
		}
		cout << (f ? "NO\n" : "YES\n");
	}
}