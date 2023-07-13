// 1352C.cpp
#include<iostream>
using namespace std;
int t, n, k;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		if (k % (n - 1) == 0)
			cout << k / (n - 1) * n - 1 << endl;
		else 
			cout << k / (n - 1) * n + k % (n - 1) << endl;
	}
}