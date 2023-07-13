// 12592.cpp
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int n; cin >> n;
	unordered_map<string, string> m;
	cin.ignore();
	while (n--){
		string x; getline(cin, x);
		getline(cin, m[x]);
	}
	int Q; cin >> Q;
	// cout << Q << endl;
	cin.ignore();
	while (Q--){
		string x; getline(cin, x);
		cout << m[x] << endl;
	}
}