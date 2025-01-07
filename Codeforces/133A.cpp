#include<stdio.h>
#include<string.h>

int main()
{
    char p[101];
    gets(p);

    int len=strlen(p);

    for(int i=0;i<len;i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
            printf("YES\n");
            goto end;
        }
    }
    printf("NO\n");

    end:
        return 0;
}
