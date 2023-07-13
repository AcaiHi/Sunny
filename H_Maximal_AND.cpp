#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
int t, n, k;
int main(){
    cin >> t;
    while (t--){
        cin >> n >> k;
        string q[n];
        for (string &it : q){
            int x; cin >> x;
            it = std::bitset<31>(x).to_string();
        }
        string result = std::bitset<31>(0).to_string();
        for (int b = 0; b <= 31; b++){
            int f = 1;
            int cnt = 0;
            for (string x : q) 
                if (x[b] == '1') cnt++;
                else f = 0;
            
            if (k > 0 && (n - cnt) <= k) result[b] = '1', k -= (n - cnt);
            else result[b] = f + '0';
        }
        cout << std::bitset<32>(result).to_ulong() << endl;
    }

    )
}