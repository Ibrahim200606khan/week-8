#include <stdio.h>
int main(){
int a,b,i,hcf,lcm;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
hcf = 1;  // initialize HCF to 1//

for(i = 1; i <= a && i <= b; i++) // check all numbers from 1 to the smaller of a and b //
{
if(a%i == 0 && b%i == 0)  // if i divides both numbers exactly //
{
hcf = i;  // store current common factor
}
}
// formula to calculate LCM using HCF
lcm = (a*b)/hcf;
printf("HCF = %d\n", hcf);
printf("LCM = %d\n", lcm);
return 0;
}
