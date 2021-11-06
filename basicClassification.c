#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h> 

/* will return if a number is prime*/
int isPrime(int num)
{
    if(num==1||num==2||num==3)
    {
        return 1;
    }
    if(num<1||num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }
    for(int i=5;i*i<=num;i+=6)
    {
        if(num%i==0||num % (i + 2)==0)
        {
            return 0;
        }
    }
    return 1;
}

/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int num)
{
    int temp=num;
    int sum=0;
    
    while(temp>0)
    {
        int cur=temp%10;
        int fact=1;
        while(cur>1)
        {
            fact=fact*cur;
            cur=cur-1;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        return 1;
    }
    return 0;
}