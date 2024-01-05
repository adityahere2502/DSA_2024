// #include <iostream>
// #include<string>
// #include<bits/stdc++.h>
// #include <vector>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     string s;
//     vector<string> strings;
//     for (int i = 0; i<=t; i++){
//         cin >> s;
//         strings.push_back(s);
//     }
//     for (const auto& str : strings) {
//         if (s = "YES", "yES", "yes", "Yes", "YeS"){
//             cout << "YES";
//         }
//         else {
//             cout << "NO";
//         }
//     }
//         return 0;
// }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    vector<string> strings;

    for (int i = 0; i < t; i++) {
        cin >> s;
        strings.push_back(s);
    }

    for (const auto& str : strings) {
        string lowercase_str = str;
        transform(lowercase_str.begin(), lowercase_str.end(), lowercase_str.begin(), ::tolower);
        if (lowercase_str == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
