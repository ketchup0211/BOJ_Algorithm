#include <stdio.h>

int main(void){
    long long int N, M;
    long long int L1 = 0;
    scanf("%lld %lld", &N, &M);
    
    if (N>M){
        L1 = N-M;
    }
    else L1 = M-N;
    printf("%lld", L1);
}