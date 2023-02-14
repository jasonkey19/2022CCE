#include <Stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
     int temp=a;
     a=b;
     b=temp;
    }
    if(b>c){
    int temp=b;
    c=temp;
    }
    printf("%d %d %d",a,b,c);
}
