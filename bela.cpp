#include<bits/stdc++.h>

using namespace std;

#define um unordered_map

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    um<char, int> dom, ndom;
    dom['A'] = 11; dom['K'] = 4; dom['Q'] = 3; dom['J'] = 20; dom['T'] = 10; dom['9'] = 14; dom['8'] = 0; dom['7'] = 0;
    ndom['A'] = 11; ndom['K'] = 4; ndom['Q'] = 3; ndom['J'] = 2; ndom['T'] = 10; ndom['9'] = 0; ndom['8'] = 0; ndom['7'] = 0;
    int n; char s;
    cin >> n >> s;
    n*=4;
    int sum = 0;
    while(n--) {
        char c, st;
        cin >> c >> st;
        if(st == s) sum += dom[c];
        else sum += ndom[c];
    }
    cout << sum << endl;
    return 0;
}