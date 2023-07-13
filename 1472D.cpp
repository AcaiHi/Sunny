// 1472D.cpp
#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int q[n]; for (int &it : q) cin >> it;
		sort(q, q + n, [&](int x, int y){return x > y;});
		ll A = 0, B = 0, i = 0;
		for (int x : q){
			if ((i & 1) == (x & 1)) 
				i & 1 ? B += x: A +=x;
			i++;
		}
		cout << (A == B ? "Tie\n" : A > B ? "Alice\n" : "Bob\n");
	}
}