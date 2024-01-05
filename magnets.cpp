#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int b;
    int count = 0;
    for (int i = 0; i<n; i++){
        // " 01 plus-minus "
        // " 10 minus-plus "  
        cin >> a;
        cin >> b;
    }
    if (a == 01){
        count = count + 1;
    }
    if ( b == 10){
        count = count + 1;
    }
    cout << count;
    return 0;
}
