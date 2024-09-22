#include<stdio.h>
#include<string.h>

#define MAX 100

char word[MAX];
int numOfChar[26];

int main(void){
    
    scanf("%s", word);
    for(int i = 0; i< strlen(word);i++){
        numOfChar[word[i]-'a']++;
    }
    for(int i=0;i<26;i++){
    printf("%d ", numOfChar[i]);
    }
    return 0;
}