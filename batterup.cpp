#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int sum = 0; int a; 
    int n2 = n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a < 0) n2--;
        else sum += a;
    }
    printf("%.7f\n", ((1.0*sum)/(1.0*n2)));
    return 0;
}