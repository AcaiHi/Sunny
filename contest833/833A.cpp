#include<iostream>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		if (n & 1) cout << (n >> 1) + 1 << endl; // k + 1
		else cout << (n >> 1) << endl;// k
	}
}