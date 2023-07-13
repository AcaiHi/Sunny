#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

using PII = pair<int, int>;
#define id second
#define val first

int main(){
    int n, m; cin >> n >> m;
    vector<int> v(n), ans(m); for (int &it : v) cin >> it;
    sort(v.begin(), v.end());
    vector<PII> Q(m); 
    for (int i = 0; PII &it : Q) cin >> it.val, it.id = i++;   
    sort(Q.begin(), Q.end());
    for (int i = 0; PII x : Q){
        while (i < n && v[i] <= x.val) i++;
        ans[x.id] = i;
    }
    for (int x : ans) cout << x << ' ';
    // HI
}
