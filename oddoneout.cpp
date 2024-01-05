// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     int a,b,c;
//     cin >> t;
//     for (int i = 1; i<=t; i++){
//         cin >> a; cin >> b; cin >> c;    
//     }
//     cout << a; cout << b;
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     int a,b,c;
//     int i;
//     for (int i = 1; i<=t; i++){
//         cin >> a; cin >> b; cin >> c;
//         continue;
//     }
//     for(int i = 1; i<=t; i++){
//         if (a==b){
//             cout << c << endl;
//             continue;
//         }
//     }
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         if (a == b)
//             cout << c << endl;
//         else if (a == c)
//             cout << b << endl;
//         else
//             cout << a << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> a(t), b(t), c(t);

    for (int i = 0; i < t; ++i) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i = 0; i < t; ++i) {
        if (a[i] == b[i])
            cout << c[i] << endl;
        else if (a[i] == c[i])
            cout << b[i] << endl;
        else
            cout << a[i] << endl;
    }

    return 0;
}

