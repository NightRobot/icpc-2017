#include <stdio.h>
#include <string.h>

int main()
{
   int T;
   char c[120][5][3];
   int p[120];
   int count=0,cardpoint=0;
   scanf("%d", &T);
   for(int i = 0; i < T ; i++){
     scanf("%s %s %s %s %s",&c[i][0],&c[i][1],&c[i][2],&c[i][3],&c[i][4]);
   }
   for(int j = 0; j < T ; j++){
     count = 0;
     p[j] = 0;
     while((p[j]<=16) && (count < 5)){
       cardpoint = 0;
       if(strcmp("A",c[j][count])==0){
         cardpoint = 1;
       }else if(strcmp("2",c[j][count])==0){
         cardpoint = 2;
       }else if(strcmp("3",c[j][count])==0){
         cardpoint = 3;
       }else if(strcmp("4",c[j][count])==0){
         cardpoint = 4;
       }else if(strcmp("5",c[j][count])==0){
         cardpoint = 5;
       }else if(strcmp("6",c[j][count])==0){
         cardpoint = 6;
       }else if(strcmp("7",c[j][count])==0){
         cardpoint = 7;
       }else if(strcmp("8",c[j][count])==0){
         cardpoint = 8;
       }else if(strcmp("9",c[j][count])==0){
         cardpoint = 9;
       }else if(strcmp("10",c[j][count])==0){
         cardpoint = 10;
       }else if(strcmp("J",c[j][count])==0){
         cardpoint = 10;
       }else if(strcmp("Q",c[j][count])==0){
         cardpoint = 10;
       }else if(strcmp("K",c[j][count])==0){
         cardpoint = 10;
       }
       p[j] = p[j] + cardpoint;
       count++;
     }
   }
   for(int k=0; k < T; k++){
     if(p[k]<=21){
       printf("%d",p[k]);
     }else{
       printf("busted");
     }
     printf("\n");
   }
}
