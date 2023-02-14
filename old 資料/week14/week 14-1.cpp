#include <stdio.h>
int sum(int a,int b);///先宣告declare

int main()
{
    int ans=sum(2,3);///使用呼叫
    printf("ans:%d\n",ans);
}
int sum(int a,int b)///定義define
{
    return a+b;
}///回傳 回復大家
