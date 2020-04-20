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
    vi arr(5);
    for(int i = 0; i < 5; i++) cin >> arr[i];
    for(int i = 0; i < 5; i++) {
        bool sorted = true;
        for(int j = 0; j < 5-i-1; j++) {
            bool swapped = false;
            if(arr[j] > arr[j+1]) {swap(arr[j], arr[j+1]); sorted = false; swapped = true;}
            if(swapped) {for(auto n : arr) cout << n << " ";
            cout << endl;}
        }
        if(sorted) break;
    }
    return 0;
}