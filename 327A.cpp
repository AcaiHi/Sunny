// 327A.cpp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x, n, cnt, maxi, len, res;
bool f;
#define F first
#define S second
int main(){
	cin >> n;
	bool q[n];
	int  i = 1;
	vector<pair<int, int> > v;
	for (bool &x : q){
		cin >> x; if (x) cnt++;
		if (v.empty() || v.back().F != x)
			v.emplace_back(x, 1);
		else 
			v.back().S++;
	}
	cout << cnt << endl;
	int div = 0;
	maxi = 0, res = 0;
	for (int i = 0; i  + 1 < v.size(); i += 2){
		if (i == 0 && v[i].F) {i--; continue;}
		if (v[i].S >= v[i + 1].S) {
			res = res + v[i].S - div;
			div = v[i + 1].S;
		}else {
			cout << maxi << " " << res << endl;
			maxi = max(maxi, res);
			res = 0, div = 0;
		}
		//cout << v[i].S << " " << v[i + 1].S << " " << maxi << " " << res << " " << div << endl; 
	}
	f = !v[v.size() - 1].F;
	if (f) {
		maxi = max({maxi, res + v[v.size() - 1].S - div, res});
	}else maxi = max(maxi, res);
	if (v.size() == 1) cout << v[0].S - v[0].F;
	else cout << maxi << " " << cnt;
}