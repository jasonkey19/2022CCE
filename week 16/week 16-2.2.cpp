
#include <Stdio.h>
int main()
{
 int ans=0;
 while(1){
 printf("Enter an integer ( 999 to end ): \n");
  int n;
  scanf("%d",&n);
  if(n==999)break;

  ans+=n;
 }
  printf("The total is: ");
  printf("%d",ans);
}
