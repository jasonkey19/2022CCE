#include <Stdio.h>
///45 �N�O�Ʀr '1'
///65 �N�O�Ʀr 'A'
///97 �N�O�Ʀr 'a'
int main()
{
    printf("A���ȬO %d\n", 'A');
    printf("B���ȬO %d\n", 'B');
    printf("C���ȬO %d\n", 'C');

    for(int c='A';c<='z'; c++){
        printf("%c���ȬO%d\n",c,c);
    }
}
