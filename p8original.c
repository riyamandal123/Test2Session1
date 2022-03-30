#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x,y;
}point;
typedef struct line
{
    point p1,p2;
    float distance;
}line;
typedef struct polygon
{
    int n;
    line l[100];
    float perimeter;
}polygon;
int input_n()
{
  int n;
  printf("enter the number of sides of the polygon\n");
  scanf("%d",&n);
  return n;
}
void input_polygon(int n, polygon *p)
{
  p->n=n;
}
point input_point()
{
  point z;
  printf("Enter the co-ordinates of the points\n");
  scanf("%f %f",&z.x,&z.y);
  return z;
}
line input_line()
{
 line l;
 l.p1=input_point();
 l.p2=input_point();
 l.distance=sqrt((l.p1.x - l.p2.x)*(l.p1.x - l.p2.x)+(l.p1.y - 
 l.p2.y)*(l.p1.y - l.p2.y));
 return l;
}
void input_n_lines(int n, line l[n])
{
 for(int i=0;i<n;i++)
 {
   l[i]=input_line();
   printf("%f\n",l[i].distance);
  }
}

void find_perimeter(int n ,polygon *p)
{
  p->perimeter=0;
  for(int i=0;i<n;i++)
  {
    p->perimeter+=p->l[i].distance;
  }
}
void output(polygon *p)
{
 printf("the perimeter of the polygone is %f",p->perimeter);
}
int main()
{
  int n;
  polygon p;
  n=input_n();
  input_polygon(n,&p);
  line l[100];
  input_n_lines(n,p.l);
  find_perimeter(n,&p);
  output(&p);
  return 0;
}