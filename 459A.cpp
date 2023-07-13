// 459A.cpp
#include<iostream>
using namespace std;
int x[4];
int main(){
	for (int &it : x) cin >> it;
	int res = abs(x[1] - x[3]) * (x[0] == x[2]) + abs(x[0] - x[2]) * (x[1] == x[3]);
	if (res){
		for (int i = 0, f = x[1] == x[3]; i < 4; i++)
			cout << res * (f == (i & 1)) + x[i] << " ";
	}else if(abs(x[0] - x[2]) == abs(x[1] - x[3])){
		cout << x[0] << " " << x[3] << " " << x[2] << " " << x[1];
	}else cout << -1;
}