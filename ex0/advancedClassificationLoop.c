#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h> 

#define TRUE 1
#define FALSE 0
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num)
{
    int digits=0;
    int temp =num;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    int sum=0;
    temp=num;
    for(int i=0;i<digits;i++)
    {
        int cur=temp%10;
        int pow=cur;
        for(int j=1;j<digits;j++)
        {
            pow=pow*cur;
        }
        sum=sum+pow;
        temp=temp/10;
    }
    if(sum==num)
    {
        return 1;
    }
    return 0;
}
/* will return if a number is a palindrome */
int isPalindrome(int num)
{
    int a=num;
    int b=0;
    while(a>0)
    {
        int temp=a%10;
        b=b+temp;
        b=b*10;
        a=a/10;
    }
    b=b/10;
    if(b==num)
    {
        return 1;
    }
    return 0;
}