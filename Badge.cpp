1214 B - Badges.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
#define print(x) cerr << (#x) << "is "<< x << "\n"
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int g,n,b;
   cin >> b >> g >> n;
   int mi = min(b,g);
   if( mi >= n){
      cout << n+1 << '\n';
      return 0;
   }
   int ans = 0;
   int bb = 0, gg = 0;
   f(i,0,n+1){
      bb = i;
      gg = n-i;
      if(bb <= b and gg <= g){
         ans++;
      }
   }
   cout << ans << '\n';
   return 0;
}
