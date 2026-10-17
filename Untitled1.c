#include<stdio.h>
int main(){
int up,low,i,num,prime;
printf("ENTER UPPER AND LOWER LIMIT: ");
scanf("%d %d",&up,&low);
for(num=low;num<=up;num++) // check every number in the range //
{
prime=1;
if(num<2) // cus 0 and 1 are not prime numbers //
prime=0;
for(i=2;i<=num;i++) // This checks whether any number can divide nums //
{
if(num%i==0) // checks if i divides num exactly //
{prime=0;break;} //  break Immediately exits the inner loop //
}
if(prime) // If no divisor was found, print the number //
printf("%d\n",num);
}
return 0;
}
