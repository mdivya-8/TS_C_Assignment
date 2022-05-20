#include<stdio.h>
int main()
{
FILE*fp=fopen("file.txt","w+");
if(fp)
printf("file is opened successfully\n");
else
printf("file is not opened successfully\n");
//#if 0
char c;
fputc('t',fp);
fputc('s',fp);
fclose(fp);
//rewind(fp);

//fp=fopen("file.txt","r");
while((c=fgetc(fp))!=EOF)
{
printf("%c",c);
}
fclose(fp);
}
