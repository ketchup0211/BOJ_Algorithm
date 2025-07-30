#include<stdio.h>

int N, M;
int ans[10];
int visit[10];

void dfs(int depth, int cut){
    if(depth == M){
        for(int i = 0; i< M; i++){
            printf("%d", ans[i]);
            printf("\n");
        }
        return;
    }
    
    for(int i = 1; i<= N ; i++){
        if(visit[i] || cut >= i) continue;
        ans[depth] = i;
        visit[i] = 1;
        dfs(depth+1, i);
        visit[i] = 0;
    }
}

int main(){
    scanf("%d %d", &N, &M); //4 4
    dfs(0, 0);
    
}