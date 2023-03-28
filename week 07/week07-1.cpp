#include <Stdio.h>
int main()
{
    FILE*fout=fopen("file.txt","w");
    ///printf("Hello world\n");
    fprintf(fout,"Hello world\n");

    printf("檔案就出現了喔,請檢查檔案總管\n");
}
