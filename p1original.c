#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float*y2)
{
  printf("enter a number\n");
  scanf("%f%f%f%f\n",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float area)
{
  printf("the distance between two points is %f\n",area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(area);
  return 0;
}