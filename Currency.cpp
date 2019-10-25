
//1214 A - Optimal Currency Exchange.cpp GNU C++17 Accepted
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
   int n,d,e;
   cin >> n >> d >> e;
   int ans = INT_MAX;
   int dol ,eur =0;
   // int ans =  INT_MAX;
   while(eur*e <= n){
      dol = n-eur*e;
      ans = min(ans,n-eur*e-(dol/d)*d);
      eur+=5;
   }
   cout << ans << '\n';
   return 0;
}
