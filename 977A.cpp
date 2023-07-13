//977A.cpp
#include<iostream>
using namespace std;
int main(){
	int a, n;
	cin >> a >> n;
	while (n--){
		if (a % 10) a--;
		else a /= 10;
	}
	cout << a;
}