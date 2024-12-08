#include<stdio.h>

int main(void){
    int students[31]={0,};
    
    for(int i=1; i<=28; i++){
        int num;
        scanf("%d", &num);
        students[num] = 1;
    }
    
    for(int i=1; i <= 30 ; i++){
        if(!students[i]){
            printf("%d\n", i);
        }
    }
    return 0;
}