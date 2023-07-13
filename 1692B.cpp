// 1692B.cpp
#include<iostream>
#include<set>
using namespace std;
int t, n, x;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		set<int> s;
		for (int i = 0; i < n; i++){
			cin >> x;
			s.insert(x);
		}
		int SS = s.size();
		if (n & 1) {
			cout << SS - !(SS & 1) << "\n";
		}else cout << SS - (SS & 1) << "\n";
	}
}