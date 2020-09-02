#include <bits/stdc++.h>

#define ALL(x) x.begin(),x.end()
#define PB push_back
#define EB emplace_back
#define F first
#define S second
#define ll long long
#define int long long

using namespace std;

const uint32_t MOD = 1e9+7;
const uint32_t MAXN = 1e7+7;

vector<int> adj[MAXN];
bool visited[MAXN] = {0};
int color[MAXN];
int euler_tree[MAXN];
int _depth[MAXN];
int n ,m ,idx = 0;

void depth(int v = 0 ,int d = 0){
	visited[v] = 1;
	_depth[v] = d;
	for(int u : adj[v]){
		if(!visited[u]){depth(u ,d+1);}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n >> m;
	int u ,v;
	for(int i = 0; i < m ;i++){
		cin >> u >> v;
		adj[u].PB(v);
		adj[v].PB(u);
	} // root is 0;
	depth();
	for(int i = 0 ;i < n ;i++) cout << i << "->" << _depth[i] << "\n";
	return 0;
}