#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

int main(){
  char a;
  int i,j;
  //printf("enter\n A: to read matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
  scanf("%c",&a);
  while(a!='D'){
    if(a=='A'){
      A();
     floydWarshall(mat);
    //  printf("\n");
    //   for(int p=0;p<V;p++){
    //     for(int q=0;q<V;q++){
    //       printf("%d  ",ans[p][q]);
    //   }
    //   printf("\n");
    // }
    }
    else{
        //printf("enter two vertexes\n");
        if(a=='B'){
          scanf("%d",&i);
          scanf("%d",&j);
          if(B(i, j)){
            printf("True\n");
          }
          else{
            printf("False\n");
          }
        }
        if(a=='C'){
          scanf("%d",&i);
          scanf("%d",&j);
          int x = C(i, j); 
          if( x != -1){
            printf("%d\n",x);
          }
          else{
            printf("-1\n");
          }
        }
      }
    //printf("enter\n A: to read new matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
    scanf("%c",&a);
  }
  return 0;
}