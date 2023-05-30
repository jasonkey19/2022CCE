
#include <Stdio.h>
#include <String.h>

int main()
{
 char line[100];
 scanf("%s",line);

 int N=strlen(line);
 int bad=0;
 for(int i=0;i<N;i++){
  if(line[i]!=line[N-1-i])bad=1;
  }
   if(bad==1)printf("NO");
   else printf("YES");
   }

