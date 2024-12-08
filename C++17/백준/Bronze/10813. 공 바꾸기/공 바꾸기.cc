#include<stdio.h>

void exchange(int* a, int* b){
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void){
    int N, M;
 
    int bucket[101];
    for(int idx = 0; idx < 101; idx++){
        bucket[idx] = idx;
    }
    
    scanf("%d %d", &N, &M);
    for(int cnt = 0; cnt < M; cnt++){
        int i, j;
        scanf("%d %d", &i, &j);
        exchange(&bucket[i], &bucket[j]);
    }
    
    for(int idx = 1; idx <= N ; idx++){
        printf("%d ", bucket[idx]);
    }
    return 0;
}