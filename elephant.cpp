#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x;
    cin >> x;
    int ans = 0;
    int a[]={5,4,3,2,1};
    for( int i = 0 ; i < 5; i++){
        ans += x/a[i];
        x = x%a[i];
    }
    cout << ans << endl;
    return 0;
}
