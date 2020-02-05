#include <stdio.h>
 
void main () {
    int n[11];
    int a;    
    float b = 0;
    float media;

   for( a = 0; a <= 10; a = a + 1){
    
    n[a] = a;

printf("O total[%d]= %d\n",a ,n[a]);

b = b + n[a];
media = b /10;
   }
printf("Soma: %f\n",b);
printf("Media: %f",media);
}