#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    char a;
    cin >> a; a-='A'; cout << arr[a] << " ";
    cin >> a; a-='A'; cout << arr[a] << " ";
    cin >> a; a-='A'; cout << arr[a] << endl;
    return 0;
}