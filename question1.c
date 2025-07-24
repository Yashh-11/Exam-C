#include<stdio.h>

int main(){

    int a,b,c,sum=0;
    printf("Enter Value of A :");
    scanf("%d",&a);
    printf("Enter Value of B :");
    scanf("%d",&b);
    printf("Enter Value of C :");
    scanf("%d",&c);
    if (a>0 && b>0 && c>0)
    {
        sum=a+c;
        printf("\nSum of First And Last Digit is : %d",sum);
    }
    else
    {
        printf("You Entered Negative Number !!");
    }
    
    
    return 0;
}