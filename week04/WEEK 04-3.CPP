#include <Stdio.h>
#include<string.h>
int testMirror(char line[50])
{
   return 0;
}
int testPalindrome(char line[50])
{
     int N=strlen(line);
     int yes=0;
     for(int i=0;i<N;i++){
        if(line[i]==line[N-1-i]) yes++;
     }
     if(yes==N)printf("全部yes收齊,是迴文\n");
     else printf("不是全部都yes,就不是迴文\n");
 }
int main()
{
     char line[50];

     while(scanf("%s",line)==1){
       printf("%s--",line);

       int p= testPalindrome(line);
       int m= testMirror(line);
       if(p==0&&m==0)printf("is not a palindrome.\n\n");
       if(p==1&&m==0)printf("is aregular palindrome.\n\n");
       if(p==0&&m==1)printf("is a mirrored string.\n\n");
       if(p==1&&m==1)printf("is a  mirrored palindrome.\n\n");

    }
}

