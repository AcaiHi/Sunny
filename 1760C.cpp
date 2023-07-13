// 1760C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 2 * 1e5 + 5;
int n, t, q[N], tmp[N];

char x;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> q[i];
			tmp[i] = q[i];
		}
		sort(q, q + n);
		for (int i = 0; i < n; i++){
			if (tmp[i] ^ q[n - 1])
				cout << tmp[i] - q[n - 1] << " ";
			else 
				cout << tmp[i] -q[n - 2] << " ";
		}
		cout << endl;
	}
}