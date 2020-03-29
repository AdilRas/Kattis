#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> x, y;
    for(int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        if(x.count(a)) x.erase(a);
        else x.insert(a);
        if(y.count(b)) y.erase(b);
        else y.insert(b);
    }
    cout << *x.begin() << " " << *y.begin() << endl;
    return 0;
}