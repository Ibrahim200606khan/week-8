#include <stdio.h>
int main(){
int i,j;
// rows //
for(i=1;i<=5;i++)
{
j=1;
// columns //
while(j<=i)
{
printf("%d",j);
j++;
}
printf("\n");
}
return 0;
}
