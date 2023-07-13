#include<iostream>
#include<set>
#include<vector>
using namespace std;
vector<int> cnt(string s){
    
    set<int> cc;
    vector<int> pe(s.length());
    int i =0 ;
    for (int &it : pe){
        cc.insert(s[i++]);
        it = cc.size();
    }
    return pe;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> pe(s.length()), su(s.length());
        int res = 0;
        pe = cnt(s);
        su = cnt(string(s.rbegin(), s.rend()));
        for (int i = 0; i < n; i++){
            int j = s.length() - i - 2;
            if (j < 0) break;
            //cout << pe[i] << " " << su[j] << endl;
            res = max(pe[i] + su[j], res);
        }
        cout << res << endl;
    }
}