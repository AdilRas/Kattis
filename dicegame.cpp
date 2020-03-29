#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int v, w, x, y; cin >> v >> w >> x >> y;
    int diff = a+b+c+d-v-w-x-y;
    if(diff < 0) cout << "Emma";
    else if(fabs(diff) < 1e-6) cout <<"Tie";
    else cout << "Gunnar"; 
    return 0;
}