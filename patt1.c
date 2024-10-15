#include <stdio.h>
int main(){
  int n;
  int i,j;
  printf ("Enter no. of rows:");
  scanf ("%d",&n);
  for (i=1;i<=n;i++){
    for (j=1; j<=i;j++){
      printf ("%s","*");
    }
    printf ("\n");
  }
}


//output: input 5
//*
//**
//***
//****
//*****
