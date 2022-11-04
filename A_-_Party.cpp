#include <bits/stdc++.h>

using namespace std;

vector<int>Adj[2001];
vector<int>manager;
int group_max;

void dfs(int m, int group) {
    
    group_max = max(group, group_max);

    for(int i:Adj[m])
        dfs(i, group+1);
    
}

int main() {

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; ++i) {
        int p;
        scanf("%d", &p);
        if(p==-1) manager.push_back(i);
        else Adj[p].push_back(i);
    }

    group_max = 1;

    for(int i=0; i<manager.size(); ++i) 
        dfs(manager[i], 1);

    printf("%d\n", group_max);

    return 0;

}