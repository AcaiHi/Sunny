// 1772A.cpp
#include<iostream>
using namespace std;
int n, t;
int x[4];
bool turns(){
	int t[4], i = 0;
	if (x[0] < x[1] && x[0] < x[2] && x[2] < x[3] && x[1] < x[3]) return 1;
	for (int &w : t) w = x[i++];
	x[0] = t[2]; x[1] = t[0]; x[3] = t[1]; x[2] = t[3];
	return 0;
}

int main(){
	cin >> t;
	while (t--){
		for (int &w : x) cin >> w;
		// wap(x[2], x[3]);
		bool f = 0;
		for (int i = 0; i < 4 && !f; i++)
			if (turns()) f = 1;
		cout << (f ? "Yes\n" : "No\n");
	}
}