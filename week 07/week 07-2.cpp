#include <Stdio.h>
int main()
{
    FILE*fin=fopen("file.txt","r");

    ///printf("Hello world\n");
    ///fprint(fout,"Hello world\n");
    char line[200];
    ///scanf("%s",line);
    fscanf(fin,"%s" ,line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);

    fscanf(fin,"%s" ,line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n",line);


}

