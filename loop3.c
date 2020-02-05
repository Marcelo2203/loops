#include <stdio.h>
 
void main () {
    int n[11];
    int a;    
    int b = 0;

   for( a = 0; a <= 10; a = a + 1){
    
    n[a] = a;

printf("O total[%d]= %d\n",a ,n[a]);

b = b + n[a];
   }
printf("Soma: %d",b);
}