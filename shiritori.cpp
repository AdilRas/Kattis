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
void lost(int i) {
    cout << (i%2 == 0 ? "Player 1 lost" : "Player 2 lost") << endl;
    exit(0);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string prev; cin >> prev;
    us<string> used; used.insert(prev);
    REP(i, n-1) {
        string curr; cin >> curr;
        if(curr[0] != prev[prev.length()-1]) lost(i+1);
        if(used.count(curr)) lost(i+1);
        used.insert(curr);
        prev = curr;
    }
    cout << "Fair Game" << endl;
    return 0;
}