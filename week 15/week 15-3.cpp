#include <Stdio.h>
///45 就是數字 '1'
///65 就是數字 'A'
///97 就是數字 'a'
int main()
{
    printf("A的值是 %d\n", 'A');
    printf("B的值是 %d\n", 'B');
    printf("C的值是 %d\n", 'C');

    for(int c='A';c<='z'; c++){
        printf("%c的值是%d\n",c,c);
    }
}
