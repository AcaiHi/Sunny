// 1763B.cpp
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int t, n, maxi, x, k;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		int h[n]; for (int &it : h) cin >> it;
		int p[n]; for (int &it : p) cin >> it;
		int ord[n], f = 0;
		iota(ord, ord + n, 0);
    	sort(ord, ord+ n, [&](int x, int y){return p[x] < p[y]; });
    	int dmg = 0;
    	for (int idx : ord){
    		if (dmg >= h[idx]) continue;
    		if (idx != ord[0]) k-= p[idx];
    		if (k > 0){
    			dmg += k;
    			while (h[idx] > dmg){
    				k -= p[idx];
    				if (k < 0) break;
    				dmg += k;
    			}
    		}
    		if (h[idx] > dmg) {f = 0; break;}
    	}

    	cout << (f ? "Yes\n" : "No\n");
	}
}