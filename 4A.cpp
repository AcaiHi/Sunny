#include<iostream>
using namespace std;
int n;
bool flag;
int main(){
    
    cin >> n;
    flag = n % 2 || n < 4;
    cout << ((flag)?"NO\n":"YES\n");
    
}