#include<stdio.h>
 
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=0,n;
 
    for(int i=1;;i++){
        a=a-1;
        c+=1;
        if(c==b){
            a=a+1;
            c=0;
        }
        if(a==0){
            n=i;
            break;
        }
    }
    printf("%d",n);
}
 