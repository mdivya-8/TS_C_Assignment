#include<stdio.h>
  typedef struct abc{
      int a;
      char b;
      float c;
  }abc;
  void main(){
      abc x={2,'d',2.5};
      printf("%d %c %f",x.a,x.b,x.c);
  }