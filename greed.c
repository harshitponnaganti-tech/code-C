#include <stdio.h>
#include <string.h>

#define MAXN 1005
#define MAXM 1000005

int head[MAXN], to[MAXM], nxt[MAXM], edge_cnt;
int disc[MAXN], low[MAXN], timer;
int bridges;

void add_edge(int u, int v) {
    to[edge_cnt] = v;
    nxt[edge_cnt] = head[u];
    head[u] = edge_cnt++;
}

void dfs(int u, int parent_edge_id) {
    disc[u] = low[u] = ++timer;

    for (int i = head[u]; i != -1; i = nxt[i]) {
        int road_id = i / 2;
        if (road_id == parent_edge_id) continue; // Do not walk back across the same road

        int v = to[i];
        if (!disc[v]) {
            dfs(v, road_id);
            if (low[v] < low[u]) {
                low[u] = low[v];
            }
            // If the lowest ancestor reachable from v's subtree is strictly deeper than u,
            // removing road (u - v) disconnects v's subtree from the rest of the graph.
            if (low[v] > disc[u]) {
                bridges++;
            }
        } else {
            // Back-edge to an already visited city
            if (disc[v] < low[u]) {
                low[u] = disc[v];
            }
        }
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        edge_cnt = 0;
        memset(head, -1, sizeof(int) * (n + 1));
        memset(disc, 0, sizeof(int) * (n + 1));
        memset(low, 0, sizeof(int) * (n + 1));
        timer = 0;
        bridges = 0;

        for (int i = 0; i < m; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            add_edge(a, b);
            add_edge(b, a);
        }

        if (n > 0) {
            dfs(1, -1);
        }

        printf("%d\n", bridges);
    }

    return 0;
}
