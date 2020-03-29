#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define pb push_back
#define LSB(x) ((x)&(-x))
typedef long long ll;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi days(366, 0);
    int n; cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++) 
            days[i]=1;
    }
    int sum =0;
    for(auto i : days) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}