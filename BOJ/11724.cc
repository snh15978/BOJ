#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N; // 정점의 개수
vector<int> adj[1001]; // 인접 리스트
bool visited[1001]; // 방문 여부를 저장하는 배열

void dfs(int curr) {
	visited[curr] = true;
//	printf("visited : %d\n", curr);
	for(int i=0;i<adj[curr].size();i++){
		int there = adj[curr][i];
		if (!visited[there]) 
			dfs(there);
	}
}

int main() {

	int T, N, M, u, v;

	scanf("%d %d", &N, &M);
	for (int j = 0; j < M; j++) {
		scanf("%d %d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		sort(adj[i].begin(), adj[i].end());
	}
	int components = 0;
	fill(visited, visited+N, false);
	for (int i = 1; i <=N; i++) {
		if (!visited[i]) {
//			printf("--------\n");
			dfs(i);
			components++;
		}
	}
	printf("%d\n", components);

	return 0;
}
