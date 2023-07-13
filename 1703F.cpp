// 1703F.cpp
#include<iostream>
#include<set>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
const int N = 1e5 + 5;
#define F first
#define S second
pii q[N];
set<pii> ans;
int t, n, cnt;
void ms(int l ,int r){
	pii tmp[N] = {};
	cout << "hi\n";
	if (l >= r) return ;
	int mid = (r + l) / 2;
	ms(l, (r + l) >> 1); 
	ms((r + l) >> 1  + 1, r);
	int i = l, j = mid + 1, k = 0;
	/*while (i <= mid && j <= r){
		if (q[i].F <= q[j].F){
			if (q[i].S < q[i].F < q[j].F < q[j].S){
				if (ans.count(q[i].F, q[j].F))
				cnt++;
				//ans.insert({q[i].F, q[j].F});
			}
			tmp[k].F = q[i].F;
			tmp[k++].S = q[i].S;
			i++;
		}else {
			tmp[k].F = q[j].F;
			tmp[k++].S = q[j].S;
			j++;
		}
	}*/
	//while (i <= mid) tmp[k].F = q[i].F, tmp[k++].S = q[i++].S;
	//while (j <= r) tmp[k].F = q[j].F, tmp[k++].S = q[j++].S;
	k = 0;
	/*for (int i = l; i <= r; i++){
		q[i].F = tmp[k].F, q[i].S = tmp[k++].S;
	}*/
	return ;
}

int main(){
	cin >> t;
	while (t--){
		cin >> n;
		ans = set<pii>{};
		for (int i = 0; i < n; i++) cin >> q[i].F, q[i].S = i + 1;
		cout << "oo";
		 ms(0,n - 1);
		cout << ans.size();

	}
}