#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= n; i++) {
        if(i%x && i%y) cout << i;
        else if(i%x) cout << "Buzz";
        else if(i%y) cout << "Fizz";
        else cout << "FizzBuzz";
        cout << endl;
    }
    return 0;
}