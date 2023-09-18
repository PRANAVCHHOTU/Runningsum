#include <stdio.h>
 //using namespace std;
int main () {
    int n,i,j;
    
    printf ("any type of pattern:");
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
     printf("\n");
      for(j=0;j<2*n-1; j++)  

      {
          printf("%d ",i );
      }
    } 
    return 0;
}
