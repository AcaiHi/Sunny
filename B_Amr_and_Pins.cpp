#include<iostream>
#include<cmath>
using namespace std;
using ll = long long;
ll dist(ll x1, ll y1, ll x2, ll y2){
    return 1ll * (x1 - x2) * (x1 - x2) + (y1- y2) * (y1 - y2);
}
int main(){
    ll x1, y1, x2, y2, d;
    cin >> d >> x1 >> y1 >> x2 >> y2;
    double res = sqrt(dist(x1, y1, x2, y2));
    double k = res / (d* 2);
    ll u = res / (d * 2);
    cout << u + (k - u != 0.0);
}