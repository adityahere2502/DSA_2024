// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int p,q;
//     int i = 0;
//     int count = 0;
//     for ( int i = 0; i < n; i++){
//         cin >> p >> q;  
//     }
//     cout << "lllll" << endl;
//     while (n--){
//         if(p<q || p>q){
//             count = count + 1;
//         }
//     }
//     cout << count;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    if(b-a>=2){
            ++count;
        }
    }
    cout<<count;    
    return 0;
}
