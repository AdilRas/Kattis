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
ll mpow(ll b, ll e, ll mod){ b %= mod;  ll r = 1;  while(e > 0){ if(e & 1) r = (r * b) % mod; b = (b * b) % mod; e >>= 1; }  return r; }
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
bool isPrime(ll n) { if(n==2 || n==3) return true; if(n%2==0 || n%3==0) return false; for(ll i = 5; i*i<=n; i+=6) if(n%i==0||n%(i+2)==0) return false; return true;}

#define MAXN 32001

vb sieve(MAXN, true);
vi primes;
void fill() {
    if(primes.size() > 0) primes.clear();
    FOR(i, 2, MAXN) {
        if(sieve[i]) {
            for(int j = 2*i; j < MAXN; j+=i) {
                sieve[j] = false;
            }
        }
    }
    REP(i, MAXN) {
        if(i >= 2 && sieve[i]) {
            primes.pb(i);
        }
    }
}

vector<pii> ans;
void solve(int n) {
    if(ans.size() > 0) ans.clear();
    int a = 0; int b = primes.size()-1;
    while(a <= b) {
        if(primes[a]+primes[b] < n) a++;
        else if(primes[a]+primes[b] > n) b--;
        else ans.pb(make_pair(primes[a++], primes[b--]));
    }
    cout << n << " has " << ans.size() << " representation(s)" << endl; 
    for(auto p : ans) {
        cout << p.first << "+" << p.second << endl;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fill();
    int n; cin >> n;
    while(n--) {
        int t; cin >> t;
        solve(t);
    }
    return 0;
}