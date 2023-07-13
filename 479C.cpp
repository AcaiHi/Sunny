// 479C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 5005;
int n;
using  pii = pair<int, int>;
pii d[N], x;
#define s first
#define e second

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> d[i].s >> d[i].e;
	sort(d + 1, d + n + 1);
	int res = 0;
	for (int i = 1; i <= n; i++)
		res = res <= d[i].e ? d[i].e : d[i].s;
	cout << res;
}