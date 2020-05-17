#pragma GCC optimize("Ofast")
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<math.h>
#include<utility>
#include<queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n]; // 隣接リスト
    vector<int> sirusi(n, -1); // i番目の部屋の道しるべ。
    vector<bool> isVisit(n, false);

    int a, b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }

    // 幅優先探索
    queue<int> q;

    for(int i=0;i<n;i++){
        if(!isVisit[i]){
            q.push(i);
            while(!q.empty()){
                int v = q.front();
                q.pop();
                isVisit[v] = true;
                for(int j=0;j<adj[v].size();j++){
                    if(!isVisit[adj[v][j]]){
                        q.push(adj[v][j]);
                        sirusi[adj[v][j]] = v+1;
                        isVisit[adj[v][j]] = true;
                    }
                }
            }
        }
    }

    printf("Yes\n");
    for(int i=1;i<n;i++){
        printf("%d\n", sirusi[i]);
    }
}