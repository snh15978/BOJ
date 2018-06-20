#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;

vector<vector<int>> edge;
vector<bool> visit;
queue<int> q;

void DFS(int cur) {
	visit[cur] = true;
	cout << cur << " ";
	for (int i = 0; i < edge[cur].size(); i++) {
		int go = edge[cur][i];
		if (visit[go]) {
			continue;
		}
		DFS(go);
	}
}
void BFS(int cur) {
	visit[cur] = true;
	q.push(cur);
	while (!q.empty()) {
		int H = q.front();
		q.pop();
		cout << H << " ";
		for (int i = 0; i < edge[H].size(); i++) {
			int go = edge[H][i];
			if (visit[go]) {
				continue;
			}
			visit[go] = true;
			q.push(go);
		}
	}
}

int main() {
	int N, M, V;
	int u, v;

	cin >> N >> M >> V;

	edge.resize(N + 1);
	visit.resize(N + 1);
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		edge[u].push_back(v);
		edge[v].push_back(u);
	}
	for (int i = 0; i < N; i++) {
		sort(edge[i].begin(), edge[i].end());
	}
	DFS(V);
	cout << "\n";
	visit.clear();
	visit.resize(N + 1, false);
	BFS(V);


	return 0;
}