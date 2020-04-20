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
    int n; 
    while(cin >> n) {
        vector<bool> arr(n-1, false);
        int a; cin >> a;
        for(int i = 1; i < n; i++) {
            int b; cin >> b;
            if(abs(b-a) >= n || b==a) {a = b; continue;}
            arr[abs(b-a)-1] = true;
            a=b;
        }
        bool flag = true;
        for(auto i : arr) flag &= i;
        cout << (flag ? "Jolly" : "Not jolly") << endl;
    }
    return 0;
}