///了解 for迴圈各種髮型
#include <Stdio.h>
int main()
{
    for(int i=0; i<3; i++){/// 0 1 2
        printf("迴圈(電腦習慣)i是%d\n",i);
    }
    for (int i=1; i<=3; i++){/// 1 2 3
        printf ("迴圈(人類熟悉)i是%d\n",i);
    }
    for(int a=3; a>0; a--){///321>0
        printf("倒過來的迴圈a是%d\n",a);
    }
}

