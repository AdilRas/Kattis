#include<bits/stdc++.h>

using namespace std;


#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define REP(i,a) FOR(i,0,a)
#define ROF(i,a,b) for(int i = (b)-1; i >=(a); i--)
#define RREP(i,a) ROF(i,0,a)
#define MOD 1000000007
#define pb push_back
#define um unordered_map
#define us unordered_set
#define rs resize
#define LSB(x) ((x)&(-x))
typedef long long ll;
typedef vector<int> vi; typedef vector<vi> vvi;
typedef vector<bool> vb; typedef vector<vb> vvb;
typedef vector<ll> vll; typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef priority_queue<pii, vector<pii>, greater<pii>> djki;
typedef priority_queue<pll, vector<pll>, greater<pll>> djkll;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    while(cin >> n && n > 0) {
        ll tot=0;
        int hr = 0;
        REP(i, n) {
            int a, b; cin >> a >> b;
            int c = b-hr;
            tot += a*c;
            hr = b;
        }
        cout << tot << " miles" << endl;
    }
    return 0;
}