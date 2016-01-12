#include <stdio.h>
void main()
{
  int i,a[10];
  for(i=0;i<10;)
    a[i++]=2*i+1;
  for(i=0;i<=9;i++)
    printf("%d	",a[i]);
  printf("\n%d	%d\n",a[5.2],a[5.8]);
  /* 求最大数 */
  int max;
  printf("\ninput 10 numbers:\n");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  max=a[0];
  for(i=1;i<10;i++)
    if(a[i]>max) max=a[i];
  printf("maxmum=%d\n",max);
  /* 排序-倒序 */
  int j,p,q,s;
  for(i=0;i<10;i++){
    p=i;q=a[i];
    for(j=i+1;j<10;j++)
      if(q<a[j]){p=j;q=a[j];}
    if(i!=p)
    {
	  s=a[i];
	  a[i]=a[p];
	  a[p]=s;
	}
	printf("%d	",a[i]);
  }
}
