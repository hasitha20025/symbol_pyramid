#include <stdio.h>

int main() {

    int num,i,j;
    char symbol;
    printf("Input any symbols:-");
    scanf("%c",&symbol);
    printf("Input rows number:-");
    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= 2*num-1; j++)
        {
            if(j>= num-(i-1)&& j <= num+(i-1))
            {

                printf("%c", symbol);
                //printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}