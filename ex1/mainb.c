#include "my_mat.h"
#include <stdio.h>
#include <stdlib.h> 


int main()
{
  char a;
  int readed=0,i,j;
  printf("enter\n A: to read matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
  scanf("%c",&a);
  while(a!='D')
  {
    if(a=='A')
    {
      A(mat);
      readed = 1;
      printf("enter\n A: to read new matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
      scanf("%c",&a);
    }
    else
    {
      if(readed==0)
      {
          printf("error graph wasn't readed");
          printf("enter\n A: to read new matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
      }
      else
      {
        printf("enter two vertexes\n");
        scanf("%d",&i);
        scanf("%d",&j);
      }
    }
    int ans [V][V]=floydWarshall(mat);
    if(a=='B')
    {
      B(mat, i, j);
      printf("enter\n A: to read new matrix\n B: to calculate if there is a route between two vertexes \n C: to print the shortest route between two vertexes\n D: to close program");
    }
    if(a=='C')
    {
      C(mat, i, j);
    }

  }

  return 0;
}