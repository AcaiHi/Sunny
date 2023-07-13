#include<iostream>

using namespace std;
int main(){
    int x, row = 0, col = 0;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (cin >> x, x) row = i, col = j;
    cout << abs(row - 3) + abs(col - 3);
}