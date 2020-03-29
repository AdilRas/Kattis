#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int j = 0; j < 3; j++) {
        int a = arr[(j)%3], b = arr[(j+1)%3], c = arr[(j+2)%3];
        
        if(a+b==c) { cout << a << "+" << b << "=" << c; return 0; } 
        if(a==b+c) { cout << a << "=" << b << "+" << c; return 0; } 
    
        if(a-b==c) { cout << a << "-" << b << "=" << c; return 0; } 
        if(a==b-c) { cout << a << "=" << b << "-" << c; return 0; } 
    
        if(a*b==c) { cout << a << "*" << b << "=" << c; return 0; } 
        if(a==b*c) { cout << a << "=" << b << "*" << c; return 0; } 
    
        if(a/b==c && (a%b==0)) { cout << a << "/" << b << "=" << c; return 0; } 
        if(a==b/c && (b%c==0)) { cout << a << "=" << b << "/" << c; return 0; }   
    }
    return 0;
}