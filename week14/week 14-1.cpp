#include <stdio.h>
int sum(int a,int b);///���ŧideclare

int main()
{
    int ans=sum(2,3);///�ϥΩI�s
    printf("ans:%d\n",ans);
}
int sum(int a,int b)///�w�qdefine
{
    return a+b;
}///�^�� �^�_�j�a
