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
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    string line, d, m, y;
    int t1=0, t2=0;
    while(getline(cin, line)) {
        t1 = t2 = 0;
        istringstream iss(line);
        iss >> m >> d >> y;
        string temp;
        getline(iss, temp, ':'); t1 += 60*stoi(temp);
        getline(iss, temp, ' '); t1 += stoi(temp);   //   cout << "2" << endl;
        getline(iss, temp, ':'); t2 += 60*stoi(temp);  // cout << "3" << endl;
        getline(iss, temp);      t2 += stoi(temp);      //cout << "4" << endl;
        int dh = (t2 - t1) / 60;
        int dm = (t2 - t1) % 60;
        cout << m << " " << d << " " << y << " ";
        printf("%d hours %d minutes\n", dh, dm);
    }
    return 0;
}