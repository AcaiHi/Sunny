// 1742C.cpp
#include<iostream>

using namespace std;
int t;
int main(){
	cin >> t;
	while (t--){
		char q[8][8];
		int n = 8, f = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> q[i][j];
			}
		}
		char ans;
		for (int i = 0; i < n; i++){
			char A = 'R', B = 'B', af = 1, bf = 1;
			for (int j = 0; j < n; j++){
				if (A != q[i][j]) af = 0;
				if (B != q[j][i]) bf = 0; 
			}
			if (af){ans = A; break;}
			if (bf){ans = B; break;}
		}
		cout << ans << endl;
	}
}