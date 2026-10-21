#include <stdio.h>
int main()
{
    int n, digit,num = 0,place = 1;
printf("ENTER A 5-DIGIT NUMBER: ");
scanf("%d", &n);
// loop // 
while(n > 0)
{
digit = n % 10;      // get last digit
digit = digit + 1;   // add 1 to the digit
num = num + (digit * place);
place = place * 10;  // move to next place value
n = n / 10;          // remove last digit
}
printf("NEW NUMBER = %d", newNum);
return 0;
}
