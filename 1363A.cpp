// 1363A.cpp
#include<iostream>
using namespace std;

int t, n, x, k;
int main(){
	cin >> t;
	while (t--){
		bool f = 0;
		cin >> n >> k;
		int q[2] = {0,0};
		while (n--) cin >> x, q[x & 1]++;
		if (!q[1]) {cout << "No\n"; continue;}
		if (q[1] >= 2) q[1] -= !(q[1] & 1);
		if (q[1] >= k) q[1] = k - (!(k & 1) && k);
		cout << ((q[0] >= (k - q[1])) ? "Yes\n" : "No\n");
	}
}