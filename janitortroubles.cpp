#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi arr(4, 0);
    double s = 0;
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
        s += arr[i]; 
    }
    s/=2;
    cout << setprecision(8) << sqrt(1.0*(s-arr[0])*(s-arr[1])*(s-arr[2])*(s-arr[3])) << endl;
    return 0;
}