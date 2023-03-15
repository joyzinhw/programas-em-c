#include <stdio.h>
int main(void) 
{

float cel,fh,f, c;

f = 0;
c = 0;

printf("digite uma temperatura em graus celsius: \n");
printf("digite uma temperatura em graus fahrenheit: \n");
    
scanf("%f%f", &cel,&fh);

printf("\n valor em fahrenheit:");
f = printf("\n %.2f", (cel * 9/5) + 32);
printf("\n \n");

printf("\n valor em celsius:");
c = printf("\n %.2f", (fh-32) * 5/9); 



return 0;
}