// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// #define SCH(x, y) x.upper_bound(y)

// int main(){
//     int t; cin >> t;
//     while (t--){
//         int n, Q; cin >> n >> Q;
//         int q[n]; for (int &it : q) cin >> it;
//         set<int> ans; ans.insert(0);
//         for (int i = 1;  i < n ; i++)
//             if (q[*ans.rbegin()] > q[i])  ans.insert(i);
//         while (Q--){
//             int k, v; cin >> k >> v;
//             q[--k] -= v;

//             // for (int i : ans) cout << i << ' '; cout << "=====" << endl;
//             auto it = SCH(ans, k); 
//             if (it == ans.begin()) ans.insert(k);
//             else if (q[*(--it)] > q[k]) ans.insert(k);
//             for (auto it = SCH(ans, k); 
//                 it != ans.end() && q[*it] >= q[k];) {
//                 ans.erase(it);
//                 it = SCH(ans, k);
//             }
//             // for (int i : ans) cout << i << ' '; cout << "\n";
//             // for (it = ans.find())
//             cout << ans.size() << ' ';
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>

using namespace std;
#define ll long long


struct segtree {

    struct node {
        int isRoot, speed;
    };

    vector<node> tree;
    int size;

    void init(int n) {
        size = 1;
        while (size < n)size *= 2;
        tree.assign(2 * size - 1, {0, INT_MAX});
    }

    node combine(node a, node b) {
        return {
                a.isRoot + b.isRoot,
                min(a.speed, b.speed)
        };
    }

    void build(vector<int> &a, int x, int lx, int rx) {
        if (rx - lx == 1) {
            if (lx < a.size())tree[x].speed = a[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        tree[x] = combine(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void build(vector<int> &a) {
        init(a.size());
        build(a, 0, 0, size);
    }

    void set(int i, int v, int r, int x, int lx, int rx) {
        if (rx - lx == 1) {
            tree[x].speed -= v;
            if (r == 1)tree[x].isRoot = 1;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m) {
            set(i, v, r, 2 * x + 1, lx, m);
        } else {
            set(i, v, r, 2 * x + 2, m, rx);
        }
        tree[x] = combine(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int i, int v, int r) {
        set(i, v, r, 0, 0, size);
    }

    int findl(int a, int l, int x, int lx, int rx) {
        if (tree[x].speed > a || lx >= l)return -1;
        if (rx - lx == 1)return lx;
        int m = (rx + lx) / 2;
        int tmp = findl(a, l, 2 * x + 2, m, rx);
        if (tmp == -1) {
            return findl(a, l, 2 * x + 1, lx, m);
        }
        return tmp;
    }

    int findl(int a, int l) {
        return findl(a, l, 0, 0, size);
    }

    int find(int a, int l, int x, int lx, int rx) {
        if (tree[x].speed >= a || rx - 1 <= l)return -1;
        if (rx - lx == 1)return lx;
        int m = (rx + lx) / 2;
        int tmp = find(a, l, 2 * x + 1, lx, m);
        if (tmp == -1) {
            return find(a, l, 2 * x + 2, m, rx);
        }
        return tmp;
    }

    int find(int a, int l) {
        return (find(a, l, 0, 0, size));
    }


    int sum(int l, int r, int x, int lx, int rx) {
        if (l >= rx || lx >= r) {
            return 0;
        }
        if (lx >= l && rx <= r) {
            return tree[x].isRoot;
        }
        int m = (lx + rx) / 2;
        int s1 = sum(l, r, x * 2 + 1, lx, m);
        int s2 = sum(l, r, x * 2 + 2, m, rx);
        return s1 + s2;
    };

    int sum(int l, int r) {
        return sum(l, r, 0, 0, size);
    };

    void remove(int l, int r, int x, int lx, int rx) {
        if (l >= rx || lx >= r) {
            return;
        }
        if (tree[x].isRoot == 0) {
            return;
        }
        if(rx - lx == 1){
            tree[x].isRoot = 0;
            return;
        }
        int m = (lx + rx) / 2;
        remove(l, r, x * 2 + 1, lx, m);
        remove(l, r, x * 2 + 2, m, rx);
        tree[x] = combine(tree[2*x+1],tree[2*x+2]);
    };

    void remove(int l, int r) {
        return remove(l, r, 0, 0, size);
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    segtree sg;
    sg.build(a);
    int cnt = 0;
    for (int i = 0; i < n;) {
        cnt++;
        sg.set(i, 0, 1);
        int t = sg.find(a[i], i);
        if (t == -1) {
            break;
        }

        i = t;
    }

    for (int i = 0; i < m; ++i) {
        int l, v;
        cin >> l >> v;
        l--;
        int t2 = sg.findl(a[l], l);;
        a[l] -= v;
        sg.set(l, v, 0);
        int t = sg.findl(a[l], l);

        if (t == -1) {

            if (t2!=-1&&l != 0)cnt++;
            sg.set(l, 0, 1);
            t = sg.find(a[l], l);
            if (t == -1) {
                cnt -= sg.sum(l + 1, n);

                sg.remove(l +1, n);
            } else {
                cnt -= sg.sum(l + 1, t);

                sg.remove(l + 1, t);
            }

        }
        cout << cnt << " ";

    }
    cout << "\n";

}
//\769/ \514/ \336/ \173/ \64 151 286 338 985 709 729/ \122 168/

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
