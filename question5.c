#include <stdio.h>

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }
        for (int j = 10-i; j >= 6; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}