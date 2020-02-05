#include <stdio.h>

void main()
{
   int i, num = 0;

   printf("Escolha um numero entre:");
   scanf("%d",&num);

   for (i = 1; i <= 10; ++i)
   {
       printf("%d X %d = %d\n",num, i, num * i);
   }
}