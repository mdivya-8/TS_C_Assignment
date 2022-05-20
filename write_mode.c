#include<stdio.h>
int main()
{
FILE*fp=fopen("file.txt","w");
if(fp)
printf("file is opened successfully\n");
else
printf("file is not opened successfully\n");
}
