#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n + 1] = {}, maxi = 0, m[n + 1] = {};
    for (int i = 0, x; i < n; i++){
        cin >> x; a[x] = i;
    }
    for (int i = 0, itr, it; i < n; i++, ++m[itr]) {
        cin >> it; itr = (a[it] - i + n) % n;
    }

    cout << *max_element(m, m + n + 1);
}
