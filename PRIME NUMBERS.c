+#include<stdio.h>
int main()
{
int up,low,j,i,prime;
printf("ENTER LOWER AND UPPER LIMITS: ");
scanf("%d %d",&low,&up);
 // how //
for(i=low;i<=up;i++) // dividend //
{
for(j=2;j<i;j++) // divisor //
{
if(i%j==0)
break;
}
if(j==i)
{printf("%d\n",i);}
}
return 0;
}
