#include <stdio.h>
int main()
{
   int r,c;
   scanf("%d %d",&r,&c);
   int tmp[r][c];
   int tmp_new[r][c];
   int check[4],total;
   for(int i = 0 ; i < r ;i++){
       for(int j = 0 ; j < c ; j++){
           scanf("%d",&tmp[i][j]);
       }
   }
   for(int i = 0 ; i < r ;i++){
       for(int j = 0 ; j < c ; j++){
           if(tmp[i][j] == 0){
           int n = 0;
           float val = 0;
           for(int k = -1; k < 2; k++){
               for(int l = -1; l < 2; l++){
                if(i+k >= 0 && i+k < r && j+l >= 0 && j+l < c && i+k != j+l && i+k != j+l-2 && i+k-2 != j+l){
                    printf("%d %d\n", i+k, j+l);
                    val += tmp[i+k][j+l];
                    n += 1;
                }
               }
           }
           tmp_new[i][j] = val/n;
           }else{
               tmp_new[i][j] = tmp[i][j];
           }
       }
   }
    for(int i = 0 ; i < r ;i++){
       for(int j = 0 ; j < c ; j++){            
            printf("%d",tmp_new[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}