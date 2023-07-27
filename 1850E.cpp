#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;
using ll = unsigned long long;
#define _ <<' '<<
string add(string, string);
string mul(string, string);
int cmp(string x, string y){
    if (x == y) return 2;
    return x.length() == y.length() ? x < y : x.length() < y.length();
}
int check(ll x, ll m, ll n, ll p, ll k){
    // string dx = to_string(x);
    // string dm = to_string(m);
    // string dn = to_string(n);
    // string db = to_string(k - p);
    // string s = add(mul(dx, dm), mul(mul(dx, dx), dn));
    // return cmp(s, db);
    ll res = x * m + x * n * x;
    return res <= k - p;
}
int main(){
  ll t;
  cin >> t;
  while (t--) {
    ll n, k; cin >> n >> k;
    ll p = 0, m = 0, ans = 0, iter = 1, x, q[n];
    for (ll &it : q) cin >> it, p += (it * it), m += (2ll * it);
    ll l = 1, r = sqrt((k - p) / n);
    while (l < r) {
        ll mid = (r + l + 1) >> 1;
        ll flag = check(mid, m, n, p, k);
        if (flag) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l / 2 << endl;
  }
}

string add(string a,string b) {
    string c;
    int i = a.size() - 1,j = b.size() - 1,t = 0;
    while(i >= 0||j >= 0||t != 0) {
        if(i >= 0) t += a[i--] - '0';
        if(j >= 0) t += b[j--] - '0';
        c += t % 10+'0';
        t /= 10;
    }
    return string(c.rbegin(),c.rend());
}
int Int(char x) {return x - '0';}
string mul(string a,string b) {
    vector<int> c(a.size() + b.size(), 0);
    if (a.size() < b.size()) swap(a, b);
    for (char &x : a)
        for (char &y : b) {
            int i = &x - a.c_str();
            int j = &y - b.c_str();
            c[i + j] += Int(x) * Int(y);
        }
    for (int i = 0; i < c.size() - 1; i++){
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while(c.size() > 1 && c.back() == 0) c.pop_back();
    string res;
    for (int x : vector(c.rbegin(), c.rend())) res += x + '0';
    return res;
}