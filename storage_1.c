# AUTO & STATIC#
#include <stdio.h>
void fun (void){
    auto int a=1;
    static int b=1;
    a++;
    b++;
    printf("%d %d\n",a,b);
}
void main()
{
 fun(); 
 fun();
 fun();
}