#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N; // 정점의 개수
int adj[1001]; // 인접 리스트
bool visited[1001]; // 방문 여부를 저장하는 배열

void dfs(int curr) {
	visited[curr] = true;
//	printf("visited : %d\n", curr);
	int next = adj[curr];
		if (!visited[next]) dfs(next);
}

int main() {

	int T, N;
	scanf("%d", &T);
	for(int v=0; v<T;v++){
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", adj + j);
			adj[j]--;
		}

		int components = 0;
		fill(visited, visited+N, false);
		for (int i = 0; i < N; i++) {
			if (!visited[i]) {
				components += 1;
				dfs(i);
				
			}
		}
		printf("%d\n", components);
	}
	return 0;
}

