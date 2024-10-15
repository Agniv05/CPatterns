#include <stdio.h>
int main(){
  int n,i,j,k,t,b;
  printf ("Enter no. of rows :");
  scanf ("%d",&n);
  int arr[n];
  arr[0]=0;
  arr[1]=1;
  i=0;
  j=1;
  for (k=2;k<=n;k++){
    arr[k]=i+j;
    i=j;
    j=arr[k];
  }
  for (t=1;t<=n;t++){
    for (b=0;b<t;b++){
      printf ("%d",arr[b]);
    }
    printf ("\n");
  }
}



//output  for input 5
//  Enter no. of rows: 5
  //0
  //01
  //011
  //0112
  //01123
