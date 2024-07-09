#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //in case of undirected graph
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }    



    return 0;
}





// directed graph
// space complexity = o(E)
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        // a--> b
        cin>>a>>b;
        adj[a].push_back(b);
        
    }    



    return 0;
}