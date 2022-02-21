#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1)
{
  printf("enter a numbers\n");
  scanf("%f %f\n",x1,y1);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float d1,d2,d3;
  d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  if ( d1+d2>d3 && d2+d3>d1 && d3+d1>d2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void output(float triangle)
{
  if(triangle==0)
  {
    printf("it forms a triangle\n");
  }
  else
  {
    printf("it doesnot forms a triangle\n");
  }
}
int main()
{
  float x1,x2,x3,y1,y2,y3,triangle;
  input_line(&x1,&y1);
  input_line(&x2,&y2);
  input_line(&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(triangle);
  return 0;
}