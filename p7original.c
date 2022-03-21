#include<stdio.h>
typedef struct triangle{
float base,area,altitude;
}Triangle;
Triangle input_triangle(){
    Triangle a;
printf("enter the base and height of triangle");
  scanf("%f %f",&a.base,&a.altitude);
  return a;
}
void find_area(Triangle *a)
{
  a->area=0.5*((a->base)*(a->altitude));
}
void output(Triangle a)
{
  printf("area of triangle is %f",a.area);
}
int main(){
   Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0; 
}