#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n = 0;
    scanf("%d", &n); 
    
    int * arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i <n ; i++){
        scanf("%d", arr+i);
    }
    
    int key = 0;
    int count = 0;
    scanf("%d", &key);
    for(int i = 0 ; i < n ; i++){
        if (*(arr+i) == key) count++;
    }
    printf("%d", count);
    free(arr);
    return 0;
}