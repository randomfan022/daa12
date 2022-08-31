#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int paths[10][10]; 
void Warshall (int n) 
{ 
 int i,j,k; 
 for(k=0;k<n;k++) 
 { 
 for(i=0;i<n;i++) 
 { 
 for(j=0;j<n;j++) 
 { 
 paths[i][j]=(paths[i][j]) || (paths[i][k] && 
paths[k][j]); 
 } 
 } 
 } 
} 
void main() 
{ 
 int n,i,j,k; 
 clock_t start,end; 
 double clk; 
 
 printf("ENTER NO OF CITIES\n"); 
 scanf("%d",&n); 
 
 printf("ENTER MATRIX\n"); 
 for(i=0;i<n;i++) 
 for(j=0;j<n;j++) 
 scanf("%d",&paths[i][j]); 
 
 start=clock(); 
 Warshall(n); 
 end=clock(); 
 
 printf("TRANSITIVE CLOSURE MATRIX\n"); 
 for(i=0;i<n;i++) 
 { 
 for(j=0;j<n;j++) 
 printf("%d ",paths[i][j]); 
 printf("\n"); 
 } 
 
 clk=(end-start)/CLOCKS_PER_SEC; 
 
 printf("TIME REQUIRED IS %f\n",clk); 
}
