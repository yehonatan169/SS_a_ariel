#include "NumClass.h"
#include <stdio.h>

int main()
{
    // mainodfhjenf
    int a;
    //  printf("enter first number: ");
    scanf("%d",&a);
    int b;
   // printf("enter sec number: ");
    scanf("%d",&b);
    
    printf("The Armstrong numbers are:");
    //armstrong numbers
    for(int i=a;i<=b;i++)
    {
        if(isArmstrong(i)==1)
        {
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    //pali nums
    for(int i=a;i<=b;i++)
    {
        if(isPalindrome(i)==1)
        {
            printf(" %d",i);
        }
    }


    printf("\n");
    printf("The Prime numbers are:");
    //prime numbers
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i)==1)
        {
            printf(" %d",i);
        }
    }
    
    //strong nums
    printf("\n");
    printf("The Strong numbers are:");
    for(int i=a;i<=b;i++)
    {
        if(isStrong(i)==1)
        {
            printf(" %d",i);
        }
    }
    printf("\n");
    return 1;   
}