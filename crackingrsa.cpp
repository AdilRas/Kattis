#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll e, ll phin) {
    ll d = 1;
    while(true) {
        ll x = (e * d - 1) % phin;
        if(x==0) return d;
        d++; 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n, e; cin >> n >> e;
        ll p, q;
        for(int i = 2; i < 1000; i++) {
            if(n%i==0)  {
                p = i; q = n/i;
                break;
            }
        }
        ll phi = (p-1)*(q-1);
        ll d = solve(e, phi);
        cout << d << endl;    
    }
    return 0;
}