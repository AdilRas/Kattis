#include<bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
typedef long long ll;
typedef vector<ll> vll; typedef vector<vll> vvll;

vvll dp;

ll solve(int n) {
    dp.clear();
    dp.resize(n+1, vll(8, 0));
    dp[0][7] = 1;
    FOR(i, 1, n+1) {
        dp[i][0] = dp[i-1][7];
        dp[i][1] = dp[i-1][6];
        dp[i][2] = dp[i-1][5];
        dp[i][3] = (dp[i-1][7]) + (dp[i-1][4]);
        dp[i][4] = (dp[i-1][3]);
        dp[i][5] = dp[i-1][2];
        dp[i][6] = (dp[i-1][7]) + (dp[i-1][1]);
        dp[i][7] = (dp[i-1][6]) + (dp[i-1][3]) + (dp[i-1][0]); 
    }
    return dp[n][7];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    while(cin >> n && n != -1) {
        cout << (n%2 == 0 ? solve(n) : 0) << endl;
    }
    return 0;
}