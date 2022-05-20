#include<stdio.h>
int main()
{
FILE*fp=fopen("file.txt","r+");
if(fp)
printf("file is opened successfully\n");
else
printf("file is not opened successfully\n");
//#if 0
char c;
fputc('h',fp);
fputc('e',fp);
fputc('n',fp);
fclose(fp);
//rewind(fp);
fp=fopen("file.txt","r");
while((c=fgetc(fp))!=EOF)
{
printf("%c",c);
}
fclose(fp);
}
