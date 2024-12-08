#include<stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    
    int bucket[101] = {0,};
    
    for(int count=0; count<M; count++){
        int i, j, k;
        scanf("%d %d %d", &i , &j, &k);
        
        for(int range = i; range <= j ; range++){
            bucket[range] = k;
        }
    }
    
    for(int idx = 1; idx <= N ; idx++){
        printf("%d ", bucket[idx]);
    }
    
    return 0;
}