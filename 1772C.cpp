// 1772C.cpp
#include<iostream>
#include<unordered_set>
using namespace std;
int n, k, q[45], t;
unordered_set<int> s;
void play(){
	for (int i = 0; i < n; i++)
		cout << q[i] << " ";

	cout << endl;
}
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		s.insert(1);
		for (int i = 0; i < n; i++)
			q[i] = i + 1;
		bool f = 0;
		for (int i = 2; i < n && !f; i++){
			if (q[n - 1] + i - 1 > k) break; 
			// play();
			for (int j = n - 1; j >= i; j--)
				q[j] += i - 1;
		}
		play();
	}
}