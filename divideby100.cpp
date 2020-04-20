#include<bits/stdc++.h>

using namespace std;

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
    string a; cin >> a;
    string b; cin >> b;
    if(a == "0") {cout << 0 << endl; return 0; }
    if(b.length() > a.length()) {
        cout << "0.";
        for(int i = 0; i < b.length() - a.length()-1; i++) {
            cout << 0;
        }
        cout << a;
        return 0;
    }
    int p10 = b.length()-1;
    cout << a.substr(0, a.length() - p10);
    int newP10 = p10;
    for(int i = 1; i <= p10; i++) {
        if(a[a.length()-i] != '0') break;
        newP10--;
    }
    if(newP10 > 0) cout << "." << a.substr(a.length()-p10, newP10);
    cout << endl;
    return 0;
}