// 1760A.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int n, t, maxi;
char x;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		maxi = 0;
		for (int i = 0; i < n; i++){
			cin >> x;
			maxi = max(maxi, x - 'a');
		}	
		//cout << char(maxi + 'a') << " ";
		cout << maxi + 1 << endl;
	}
}