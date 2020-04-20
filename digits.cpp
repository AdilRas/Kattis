#include<bits/stdc++.h>

using namespace std;
#define sstr(a) ostringstream(a).str().length();
#define MOD 1000000007
#define pb push_back
#define LSB(x) ((x)&(-x))
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<vd> vvd;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;
typedef map<int,int> mpii;
typedef set<int> seti;
typedef set<double> setd;
typedef multiset<int> mseti;
typedef deque<int> dqi;
typedef deque<double> dqd;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usl;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin >> s && s != "END") {
        if(s == "1")
            cout << 1 << endl;
        else {
            cout << (s.length() >= 10 ? 4 : (s.length() >= 2 ? 3 : 2)) << endl;
        }
    }
    return 0;
}