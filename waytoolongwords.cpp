#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;

    vector<string> strings;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        strings.push_back(s);
    }

    for (const auto& str : strings) {
        // cout << str << endl;
        if (str.length() > 10){
          cout << str[0]<<str.length()-2<<str[str.length()-1] << endl;
        }
       else
       {
        cout << str << endl;
       }
    
    }
    
    return 0;
}
