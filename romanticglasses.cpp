#include <bits/stdc++.h>
using namespace std;
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// mt19937_64 (long long)
//auto my_rand(long long l,long long r)
//{
  //  return uniform_int_distribution<long long>(l,r)(rng);
//}
//#ifndef ONLINE_JUDGE
//#include "debug.h"
//#else
//#define dbg(...) 42
//#endif
 
#define  ll       long long int
#define  ld       long long double
#define  sp       " "
#define  pb       push_back
#define  cinv(v)  for(auto &i:v) cin >> i;
#define  vi       vector<int>
#define  vii      vector<ll>
#define  cout(v)  for(auto e:v) cout << e << sp;
#define  M        1e5
#define  yes      cout << "YES" << endl
#define  no       cout << "NO" << endl
#define  case     "Case " << test++ << ": "
#define  all(v)   v.begin(), v.end()
#define  Faster   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  nl       "\n"
 
///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define ONE(mask) __builtin_popcountll(mask)
#define CHECK(mask,bit) (mask&(1LL<<bit))
#define ON(mask,bit) (mask(1LL<<bit))
#define OFF(mask,bit) (mask&~(1LL<<bit))
#define CHANGE(mask,bit) (mask^(1LL<<bit))
#define LOG2(x) (__builtin_clz(x) ^ 31)
#define LSB1(mask) (__builtin_ffs(mask) - 1)
#define STRING_TO_INT(mask) (std::bitset<64>(mask).to_ullong())
///................Graph's Move.................
///const int dx[] = {+1,-1,+0,+0}; ///Rock's Move
///const int dy[] = {+0,+0,+1,-1}; ///Rock's Move
///const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move
///const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's Move
///const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's Move
///*.....................-_-........................*///
int main()
{
    Faster;
    ll tc = 1, test = 1;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        vii v(n);
        cinv(v); 
 
        ll odd = 0, even = 0;
        map<ll,ll> mp;
        bool ok = 0;
 
        for(int i=0; i<n; i++){
            if(i&1) even += v[i];
            else odd += v[i];
 
            ll diff = odd - even;
            if(even==odd) {
                yes;
                ok = 1;
                break;
            }
            if(mp.find(diff)!=mp.end()){
                yes;
                ok = 1;
                break;
            }
            mp[diff] = 1;
 
        }
 
        if(!ok) no;
    }
}