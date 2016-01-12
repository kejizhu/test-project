#include <stdio.h>
#include <math.h>
void main()
{
  float a,b,c,s,area;
  printf("please input three num,example 3,4,5.\n");
  scanf("%f,%f,%f",&a,&b,&c);
  if((a+b)>c && (a+c)>b && (b+c)>a)
  {
    s=1.0/2*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%7.2f,b=%7.2f,c=%7.2f,s=%7.2f\n",a,b,c,s);
    printf("area=%7.2f\n",area);
  }
  else
  {
    printf("input three num is error!");
  }
}
