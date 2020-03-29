#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vi arr(n); arr[0]=1;
    for(int i = 2; i <= n; i++) {
        int a; cin >> a;
        arr[1+a]=i;
    }
    for(auto i : arr) {
        cout << i << " ";
    }
    return 0;
}