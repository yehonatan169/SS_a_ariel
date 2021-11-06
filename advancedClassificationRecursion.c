#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h> 

int mypow(int num,int power)
{
    if(power==0)
    {
        return 1;
    }
    return num*mypow(num,power-1);
}

int pcheck(int num)
{
    if(num==0)
    {
        return 0;
    }
    return 1+pcheck(num/10);
}

int powDigits(int num,int power)
{
    if(num==0)
    {
        return 0;
    }
    return mypow(num%10,power)+powDigits(num/10,power);
}



int reverse(int num,int digits)
{
    if(num==0)
    {
        return 0;
    }
    return (num%10 * mypow(10, digits-1)) + reverse(num/10,digits-1);
}

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num)
{
    int power=pcheck(num);

    if( powDigits(num,power)==num)
    {
        return 1;
    }   
    return 0;
}

/* will return if a number is a palindrome */
int isPalindrome(int num)
{
    int digits=0;
    int temp=num;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    int comp=reverse(num,digits);
    if(comp==num)
    {
        return 1;
    }
    return 0;
}


