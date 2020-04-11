#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p; cin >> n >> p;
    vi cars(n);
    for(int i = 0; i < n; i++) cin >> cars[i];
    sort(cars.begin(), cars.end());
    int firstCar = cars[0];
    int mx = 1;
    for(int i = 1; i <= n; i++) {
        int dist = p * (i);
        if(dist - (cars[i-1]-firstCar) > 0) {
            mx = max(mx, dist-cars[i-1]+firstCar);
        }
    }
    cout << mx << endl;
    return 0;
}