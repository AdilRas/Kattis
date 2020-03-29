#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w, h;
    cin >> n >> w >> h;
    double m = sqrt(w*w*1.0 + h*h*1.0);
    for(int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        cout << (curr <= m ? "DA" : "NE") << endl;
    }
    return 0;
}