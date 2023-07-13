// 1742D.cpp
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define F first

int t, n;
int gcd(int a, int b){
    return b? gcd(b, a % b) : a;
}
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int maxi = 0, i = 1;
		int q[n]; for (int &it : q) cin >> it;
		unordered_map<int, int> m;
		int k = 0;
		vector<pair<int, int> > v;
		for (int i = n - 1; i < n; i++){
			if (gcd(q[n - 1], q[i])) {
				if (i == n - 1){
					maxi = n * 2;
					break;
				} else v.emplace_back(q[i], i + 1);
			}
		}
		for (int i = 0; i < v.size(); i++){
			
		}
		
		cout << (maxi ?  maxi : -1 ) << endl;
	}
}