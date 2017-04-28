#include <stdio.h>
int main()
{
   int n;
   char c[5];
   int p = 0,count = 0;

   scanf("%d", &n);
   for(int i = 0; i < n ; i++){
        scanf("%c %c %c %c %c", &c[0],&c[1],&c[2],&c[3],&c[4]);
        while(p <= 16 && count < 5){
            p = p + c[count];
            count = count + 1;
        }
   }
   if(p <= 21){
        printf("%d",p);
   }else{
        printf("busted");
   }
}