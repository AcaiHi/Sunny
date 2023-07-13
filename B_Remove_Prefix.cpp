#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n); 
        for (int i = n - 1; i >= 0; i--) cin >> v[i];
        set<int> s;
        int maxi = 0;
        for (int it : v) {
            if (s.count(it)) break;
            maxi++;
            s.insert(it);
        }
        cout << n - maxi << endl;
    }
}