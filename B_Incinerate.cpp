#include<iostream>
#include<map>
using namespace std;
#define F first
#define S second
int t, n;
int main(){
    cin >> t;
    while (t--){
        int k, x;
        cin >> n >> k;
        int q[n]; for (int &it : q) cin >> it;
        multimap<int, int> h;
        for (int it : q) 
            cin >> x, h.emplace(it, x);
        
        int mn = 0;
        while (h.size() && k > 0){
            k -= mn; mn = 0;
            multimap<int, int> newlist;
            for (auto i = h.begin(); i != h.end(); i++){
                if (i->F - k > 0){
                    newlist.emplace(i->F - k, i->S);
                    mn = mn ? min(mn, i->S) : i->S;
                }
            }
            h = newlist;
        }
        cout << (h.size() ? "No\n" : "Yes\n");
    }
}