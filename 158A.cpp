#include<iostream>
using namespace std;
const int N = 105;
int v[N], res; 
int main(){
    int n, target;
    cin >> n >> target;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
        if (v[i] >= v[target] && v[i])
            res++;
        else 
            break;
    
    std::cout << res;
}