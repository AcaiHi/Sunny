// 1742B.cpp
#include<iostream>
#include<set>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int q[n]; for (int &it : q) cin >> it;
		set<int> ans;
		for (int  it : q) {
			ans.insert(it);
		}
		cout << (ans.size() == n ? "Yes\n" : "No\n");
	}
}