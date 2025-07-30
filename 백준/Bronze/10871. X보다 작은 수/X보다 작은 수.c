#include<stdio.h>

int main(void){
    int N=0, X=0;
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N ; i++){
        int num = 0;
        scanf("%d", &num);
        if(num<X) printf("%d ", num);
    }
    return 0;
}