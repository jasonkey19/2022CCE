#include <Stdio.h>
int main()
{
    FILE*fin=fopen("file.txt","r");

    ///printf("Hello world\n");
    ///fprint(fout,"Hello world\n");
    char line[200];
    ///scanf("%s",line);
    fscanf(fin,"%s" ,line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);

    fscanf(fin,"%s" ,line);
    printf("現在執行目錄的檔案裡讀入 %s\n",line);


}

