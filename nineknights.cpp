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
    vvi bd(8, vi(8));
#define sz 5
vector<pii> mv = {{-2, 1}, {-1, 2}, {-2, -1}, {-1, -2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool works(int r, int c) {
    return !(r >= sz || c >= sz || c < 0 || r < 0);
}

string valid() {
    for(int i = 0; i < sz; i++) {
        for(int j = 0; j < sz; j++) {
            if(bd[i][j] == 'k') {
                for(auto m : mv) {
                    if(works(i+m.first, j+m.second) && bd[i+m.first][j+m.second] == 'k') return "invalid";
                }
            }
        }
    }
    return "valid";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int countKnights = 0;
    for(int i = 0; i < sz; i++) {
        for(int j = 0; j < sz; j++) {
            char c; cin >> c;
            bd[i][j] = c;
            if(c=='k') countKnights++;
        }
    }
    cout << (countKnights-9 == 0 ? valid() : "invalid") << endl;
    return 0;
}