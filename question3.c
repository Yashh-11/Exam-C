#include <stdio.h>

void divide(int n)
{

    printf("Enter Number which where you want : ");
    scanf("%d",&n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("\nIt is divisible By 3 And 5...Congratulations!!");
    }
    else
    {
        printf("\nSorry!! It is not Divisible with 3 And 5...");
    }
    
}

int main()
{
    int n;
    divide(n);
    return 0;
}