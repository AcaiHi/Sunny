// 446C.cpp
#include<iostream>
using namespace std;
using ll = long long;
const int N = 3000000;
const ll  MOD = 1000000009;

ll sgt[N], q[N], tag[N], f[N] = {1, 1};
int m ,n, eed, sst;
ll fib(int x){
	return f[x] ? f[x] : f[x] = fib(x - 1) + fib(x - 2);
}
void modify(int L, int R, int l, int r, int v, ll val);
void Push(int l, int r, int v);
void Pull(int l, int r, int v);
void Build(int l, int r, int v);
ll query(int L, int R, int l , int r, int v);
int main(){
	cin >> n >> m;
	// fib(N);
	//cout << f[0] << " ";
	for (int i = 0; i < n; i++)
		cin >> q[i];
	Build(0, n, 0);
	cout << sst << " " << eed << endl;
	for (int i = 0; i <= eed; i++)
		cout << sgt[i] << " ";
	cout << endl;
	for (int i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];
	for (int i = 0; i < 2; i++){
		cout << f[i] << endl;
		modify(sst + i, eed , 0, eed, i, f[i]);
		for (int k = sst; k <= eed; k++) Pull(sst, eed, sst);
		for (int j = 0; sgt[j]; j++){
			cout << sgt[j] << " ";
		}
		cout << endl;
	}
}
void Build(int l, int r, int v){
	if (r - l == 1){
		if (l == 0) sst = v;
		if (l == n - 1) eed = v;
		return sgt[v] = q[l], void();
	}
	int mid = (l + r) >> 1;
	Build(l, mid, v * 2 + 1);
	Build(mid, r, v * 2 + 2);
	Pull(l, r, v);
}
void Pull(int l, int r, int v){
	if (r - l == 1) return;
	int mid = (r + l) / 2;
	Push(l, mid, 2 * v + 1);
	Push(mid, r, 2 * v + 2);
	sgt[v] = sgt[2 * v + 1] + sgt[2 * v + 2];
}
ll query(int L, int R, int l, int r, int v){
	Push(l, r, v);
	if (R == r && L == l) return sgt[v];
	int mid = (l + r) >> 1;
	if (R <= mid) return query(R, L, l, mid, v * 2 + 1);
	if (mid <= L) return query(R, L, mid, r, v * 2 + 2);
	return query(L, mid, l, mid, v * 2 + 1) + 
			query(mid, R, mid, r, v * 2 + 2);
}
void Push(int l, int r, int v){
	sgt[v] += tag[v] * (r - l);
	if (r - l == 1)
		return tag[v] = 0, void();	
	sgt[v * 2 + 1] += tag[v];
	sgt[v * 2 + 2] += tag[v];
	tag[v] = 0;	
}
void modify(int L, int R, int l, int r, int v, ll val){
	Push(l, r, v);
	if (l == L && r == R){
		tag[v] += val;
		Push(l, r, v);
		return ;
	}
	int mid = (r + l) / 2;
	//cout << mid << endl;
	if (R <= mid)
		modify(L, R, l, mid, 2 * v + 1, val);
	else if (L >= mid)
		modify(L, R, mid, r, 2 * v + 2, val);
	else
		modify(L, mid, l, mid, 2 * v + 1, val), 
		modify(mid, R, mid, r, 2 * v + 2, val); 
	Pull(l, r, v);
}