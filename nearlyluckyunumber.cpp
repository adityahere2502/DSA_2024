// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long n;
//     cin >> n;
//     // int t = s.length();
//     // cout << t;
//     if (==4 || s.length()==7){
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}