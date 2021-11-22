#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>

#define INF INT_MAX
#define V 10
int mat[V][V];

// the function A creat matrix and fiil her with the value that gaved by the user
void A();//int mat[10][10]

/* the function B recive 10x10 matrix and coordination i,j and print True if there is path between i and j 
   and False if not
*/
void B(int i, int j);

/* the function B recive 10x10 matrix and coordination i,j and print the path between i and j 
   if  there is no path the function will print -1
   */
void C(int i,int j);

/* floydWarshall algorithem to find the shortest path for evrey 2 vertics
*/ 
int** floydWarshall (int graph[10][10]);