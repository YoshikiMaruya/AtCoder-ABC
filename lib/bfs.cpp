#include<iostream>
#include<vector>
#include<queue>

using namespace std;
using Graph=vector<vector<int>>;

int main(){
  // 頂点数と辺数
  int n,m;
  cin>>n>>m;

  // グラフの入力
  Graph G(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // BFSのためのデータ構造
  vector<int> dist(n, -1);
  queue<int> que;
  // 初期条件（頂点０を初期ノードとする。）
  dist[0]=0;
  que.push(0);

  while(!que.empty()){
    int v=que.front();
    que.pop();

    for(int nv : G[v]){
      if(dist[nv]!=-1) continue;

      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }

  for(int v=0;v<n;v++) cout<<v<<": "<<dist[v]<<endl;
  return 0;
}
