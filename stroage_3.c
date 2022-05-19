#AUTO & REGISTER#
#include<stdio.h>
void main(){
    int a=20;
    register int b=70;
    printf("%d %d",a,b);
    printf("%u %u",&a,&b);//address of register variable b is requested
}