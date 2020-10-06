#include <bits/stdc++.h>
using namespace std;

#define int long long int
using namespace std;

vector<vector<int>adj;



signed main(){
   int n;
   cin>>n;
   adj.resize(n);
   for(int i=0; i<n; i++){
       int u , v ;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }  

    return 0;
}