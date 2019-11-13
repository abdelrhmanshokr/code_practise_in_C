#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number of repetition of the pattern\t");
    scanf("%d",&n);
    // using two dimensional array
    int index=(2*n)-2;
    int a[index][index];
    int i=n-1,j=n-1,x=1;
    // initializing the center cell of the two dimensional array to equal 1
    a[i][j]=1;
    while(x<n){
        // sitting the four diameter items first
        a[i-x][j-x]=x+1;
        a[i+x][j+x]=x+1;
        a[i+x][j-x]=x+1;
        a[i-x][j+x]=x+1;
        // sitting the rest of the square
        for(int inner_loop=0;inner_loop<x;inner_loop++){
            a[i+inner_loop][j+x]=x+1;
            a[i-inner_loop][j-x]=x+1;
            a[i-inner_loop][j+x]=x+1;
            a[i+inner_loop][j-x]=x+1;
            a[i+x][j+inner_loop]=x+1;
            a[i-x][j-inner_loop]=x+1;
            a[i-x][j+inner_loop]=x+1;
            a[i+x][j-inner_loop]=x+1;
        }
        x=x+1;
    }
    // printing the two dimensional array
    for(int row=0;row<=index;row++){
          for(int col=0;col<=index;col++){
               printf("%d",a[row][col]);
               printf("\t");
          }
          printf("\n");
     }
}
