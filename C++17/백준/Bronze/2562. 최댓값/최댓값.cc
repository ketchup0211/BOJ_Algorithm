#include <stdio.h>

int main(void)
{
    int i, arr[10]={0};
    int max, num;
    
    for(i=0;i<9;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    num = 0;
    for(i=1;i<9;i++)
    {
        if(max<=arr[i])
        {
            max = arr[i];
                num = i;
        }
    }
    printf("%d\n%d", max, num+1);
        return 0;
}