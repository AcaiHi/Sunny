// 489C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int s, m;
bool can(int y, int x){
	return x > -1 && x <= 9 * y;
}
string construct(int m, int s, int oper){
	string ans;
	for (int i = 0; i < m; i++)
		for (int k = 0, j = oper == -1 ? 9 : 0; k < 10; k++, j += oper)
			if ((i || j || (m == 1 && !j)) && can(m-i-1, s-j)){
				ans += '0' + j;
				s -= j;
			    break;
			}
	if (ans.size() == 0 || (m != 1 && ans[0] == '0')) return "-1";
	return ans; 
}
int main(){
	cin >> m >> s;
	string ans;
	int sum = s;
	cout << construct(m, s, 1) << " " << construct(m, s, -1);
}