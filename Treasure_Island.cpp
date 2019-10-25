1214 D - Treasure Island.cpp GNU C++17 Accepted
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

int n,m,c = 0;
vector<string> s;
set<pii> se[2];
vector<vector<int>> vis;

void dfs1(int x,int y){
   if(x>=n or y>=m) return;
   if(vis[x][y]) return;
   vis[x][y] = 1;
   if(s[x][y] == '#') return;
   se[c].insert({x,y});
   dfs1(x+1,y);
   dfs1(x,y+1);
}

void dfs2(int x,int y){
   if(x<0 or y<0) return;
   if(vis[x][y]) return;
   vis[x][y] = 1;
   if(s[x][y] == '#') return;
   se[c].insert({x,y});
   dfs2(x-1,y);
   dfs2(x,y-1);
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cin >> n >> m;
   s.resize(n);
   f(i,0,n){
      cin >> s[i];
   }
   vis.resize(n+10,vector<int>(m+10));
   f(i,0,n+10){
      f(j,0,m+10){
         vis[i][j] = 0;
      }
   }
   dfs1(0,0);
   if(!vis[n-1][m-1]){
      cout << "0\n";
      return 0;
   }
   if(m==1){
      cout << "1\n";
      return 0;
   }
   f(i,0,n+10){
      f(j,0,m+10){
         vis[i][j] = 0;
      }
   }
   c++;
   dfs2(n-1,m-1);
   map<int,int> dist;

   f(i,0,n){
      f(j,0,m){
         if(i==n-1 and j==m-1) continue;
         if(i==0 and j==0) continue;
         if(se[0].find({i,j})!=se[0].end() and se[1].find({i,j})!=se[1].end()){
            dist[i+j]++;
         }
      }
   }
   for(auto &el : dist){
      if(el.S == 1){
         cout << "1\n";
         return 0;
      }
   }
   cout << "2\n";
   return 0;
} 
