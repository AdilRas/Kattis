#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string a, b, c;
    a = "ABC"; b = "BABC"; c="CCAABB";
    int sa=0, sb=0, sc=0;
    for(int i= 0; i < n; i++) {
        char s; cin >> s;
        sa += (s==a[i%a.size()]);
        sb += (s==b[i%b.size()]);
        sc += (s==c[i%c.size()]);
    }
    cout << max(sa, max(sb, sc)) << endl;
    if(max(sa, max(sb, sc)) == sa) cout << "Adrian\n";
    if(max(sa, max(sb, sc)) == sb) cout << "Bruno\n";
    if(max(sa, max(sb, sc)) == sc) cout << "Goran\n";
    return 0;
}