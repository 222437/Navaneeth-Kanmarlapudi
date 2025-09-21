#include<stdio.h>
#include<ctype.h>
int main()
{
        FILE *fp=fopen("source.txt","r");
        char ch;
        int chars=0,words=0,lines=0;
        if(!fp)
        {
                printf("file not found.\n");
                return 1;
        }
        while((ch=fgetc(fp))!=EOF)
        {
           chars++;
           if(ch=='  '||ch=='\n') words++;
           if(ch=='\n')lines;
        }
        fclose(fp);
        printf("chars:%d\nwords:%d\nlines:%d\n",chars,lines,words+1);
        return 0;
}
