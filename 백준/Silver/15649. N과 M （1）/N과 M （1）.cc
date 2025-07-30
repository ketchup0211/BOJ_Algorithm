#include<stdio.h>
// SDS lecture
int N, M;
int ans[10];
int visit[10];

void dfs(int depth){
    
    if(depth==M){
        for(int i=0;i<M;i++){
            printf("%d", ans[i]);
            printf("\n");
        }
        return;
    }
    for(int i=1;i<=N;i++){
        if(visit[i]) continue;
        ans[depth] = i;
        visit[i] = 1;
        dfs(depth+1);
        visit[i] = 0;
    }
}
int main(){

    scanf("%d %d",&N, &M);
    dfs(0);
}