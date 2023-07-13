#include<iostream>
#include<vector>
#include<map>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        ll a, b; cin >> a >> b;
        vector<int> ans;
        for (int i = a; i > b; i--) ans.emplace_back(i);
        for (int i = b; i < a; i++) ans.emplace_back(i);
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) 
            cout << ans[i] << " \n"[i == ans.size() - 1];
        map<int, int> m;
        for (auto [x, y] : m) cout << x << ' ' << y;
    }
}

/*

{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe 建置使用中檔案",
            "command": "C:/TDM-GCC-64/bin/g++.exe",
            "args": [
                "-g",
                "${workspaceFolder}\\*.cpp",
                "-o",
                "${fileDirname}\\Main.exe"
            ],
            "options": {
                "cwd": "C:/TDM-GCC-64/bin"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "編譯器: C:/TDM-GCC-64/bin/g++.exe"
        }
    ]
}
*/