#include<vector>
#include<iostream>

using namespace std;

typedef vector<int> VI;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int SQRT200k = 449;
    VI sq(SQRT200k+1);
    for(int i = 0; i < SQRT200k+1; i++) {
        sq[i] = i * i;
    }
    int d;
    cin >> d;
    int lo, mid, hi;
    cout << "impossible" << endl;
    return 0;
}