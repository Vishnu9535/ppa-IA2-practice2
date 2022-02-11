#include <stdio.h>
void input(float *base, float *height){
  printf("enter the base and height");
  scanf("%f %f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area=base*height/2;
}
void output(float base, float height, float area)
{
  printf("area of triangle %f %f is %f",base,height,area);
}
int main()
{
  int base,height,area;
  input(&base,&height);
  find_areaoutput();
  
}