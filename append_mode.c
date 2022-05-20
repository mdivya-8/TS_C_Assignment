#include<stdio.h>
int main()
{
FILE*fp=fopen("file.txt","a");
if(fp)
printf("file is opened successfully\n");
else
printf("file is not opened successfully\n");
char c;
fputc(' ',fp);
fputc('h',fp);
fputc('e',fp);
fputc('l',fp);
fputc('l',fp);
fputc('o',fp);
rewind(fp);
while((c=fgetc(fp))!=EOF)
{
printf("%c",c);
}
fclose(fp);
}

