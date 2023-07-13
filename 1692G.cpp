// 1692G.cpp
#include<iostream>
using namespace std;
int t, n, k;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		int q[n];
		for (int &it : q) cin >> it;
		int nn = 0, cnt = 0;
		for (int i = 0; i + k < n; i++){
			for (int j = i + nn; j < (i + k); j++){
				if (q[j] < q[j + 1] * 2) nn++;
				else break;
			}
			if (nn == k) cnt++;
			if (nn) nn--;
		}
		cout << cnt << endl;
	}
}