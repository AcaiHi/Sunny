// 1781B.cpp
#include<iostream>
using namespace std;
int t, n, s, r;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> s >> r;
		cout << s - r << " ";
		int maxi = s - r;
		r -= (n - 1);
		for (int i = 0; i < n - 1; i++){
			if (r)
				cout << 1 + min(r, maxi - 1) << " ", r = max(r - (maxi - 1), 0);
			else cout << "1 "; 
		}
		cout << endl;
	}
}