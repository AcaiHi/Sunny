#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, pair<int, int> > m;
    int i = 1;
    int q[n]; for(int &it : q) cin >> it, m[it & 1].first++, m[it & 1].second = i++; 
    cout << (m[1].first == 1 ? m[1].second : m[0].second);
}