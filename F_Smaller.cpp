#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll lens = 1, lent= 1, mis = 0, mit = 0;
        while (n--){
            ll op, k; string x; cin >> op >> k >> x;
            for (char u : x) {
                if (op & 1) 
                    if (u == 'a') lens += k;
                    else mis = 1;
                else 
                    if (u == 'a') lent += k;
                    else mit = 1;
            }
            if (mit || (!mis && lens < lent))
                cout << "YES\n";
            else cout << "NO\n";
        }
    }   
}
