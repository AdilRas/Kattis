#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<double> vd;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; 
    cin >> n >> m;
    while(true) {
        vi front(n);
        vi rear(m);
        for(int i = 0; i < n; i++) {
            cin >> front[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> rear[i];
        }
        vd ratios(n*m);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ratios[i*m + j] = (1.0*rear[j])/(1.0*front[i]);
            }
        }
        sort(ratios.begin(), ratios.end());
        double best = 0;
        for(int i = 1; i < ratios.size(); i++) {
            best = max(best, ratios[i]/ratios[i-1]);
        }
        cout << fixed << setprecision(2) << best << endl;
        cin >> n; if(n==0) break;
        cin >> m;
    }
    return 0;
}