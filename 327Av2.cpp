// 327Av2.cpp
#include<iostream>
using namespace std;
int t, n;
int main(){
	cin >> n; int q[n];
	int all = 0, mmo = 0, take = 0;

	for (int &it : q) cin >> it, all += it;
	int maxi = 0;
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j >= i; j--){
			int cnt = 0, one = 0;
			for (int k = i; k <= j; k++){
				if (q[k]) one++;
				else cnt++;
			}
			if (maxi < (cnt - one)){
				mmo = one;
				take = cnt;
				maxi = cnt - one;
			}
		}
	}
	cout << all - mmo + take << endl;
}
