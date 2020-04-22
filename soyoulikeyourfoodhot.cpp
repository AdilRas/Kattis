#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

ll extendedEuclid(ll a, ll b, ll & x, ll & y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    ll x1, y1;
    ll d = extendedEuclid(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll a=0, b=0, c=0, t=0;
    string s; 
    // Had to read in like this because of weird rounding error
    getline(cin, s, '.'); c += 100*stoi(s);
    cin >> t; c += t;
    getline(cin, s, '.'); a += 100*stoi(s);
    cin >> t; a += t;
    getline(cin, s, '.'); b += 100*stoi(s);
    cin >> t; b += t;

    bool flip = false;
    if(b > a) {
        swap(a, b);
        flip = true;
    }

    ll x=0, y=0, d=0;

    d = extendedEuclid(a, b, x, y);
    x = x*(c/d);
    y = y*(c/d);

    // If there's negative solutions to the Diophantine equation, we need to find new solutions until a positive one is found
    if(x < 0) {
        while(x < 0) {
            x += (b/d); y -= (a/d);
        }
        // If we found a positive x, buy now y is negative, there are no solutions with 2 positive coefficients, so no possibilities.
        if(y < 0) {
            cout << "none" << endl;
            return 0;
        }
    } else if(y < 0) {
        while(y < 0) {
            x -= (b/d); y += (a/d);
        }
        if(x < 0) {
            cout << "none" << endl;
            return 0;
        }
    }

    ll n = 0; set<pll> solns;

    while((y-(a/d)*n >= 0) || (x-(b/d)*n >= 0)) {
        ll r1=x+(b/d)*n, r2 = y-(a/d)*n; // increasing x
        ll r3=x-(b/d)*n, r4 = y+(a/d)*n; // decreasing x
        pll p = {0, 0}, p2 = {0, 0};     // p for inc, p2 for dec
        p = (flip ? make_pair(r2, r1) : make_pair(r1, r2));
        p2 = (flip ? make_pair(r4, r3) : make_pair(r3, r4));
        if(r3 >= 0) solns.insert(p2);
        if(r2 >= 0) solns.insert(p);
        n++;
    }

    for(auto i : solns) cout << i.first << " " << i.second << endl;
    
    return 0;
}