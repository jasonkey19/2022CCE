#include <Stdio.h>
int main()
{
 int N=0;
 int a[20];
 for(int i=0;i<20;i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   N=i;
   break;
   }
 }
 int ans=0;
 int c;
 scanf("%d",&c);
 for(int i=0;i<N;i++){
  if(a[i]==c)ans++;
  }
   printf("%d\n",ans);
}
