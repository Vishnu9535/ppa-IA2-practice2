#include<stdio.h>
typedef struct triangle{
float base,area,height;
}Triangle;
int input_n(){
  int n;
  printf("enter number of triangles");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle(){
  {
    Triangle z;
    printf("enter the base and height of triangles");
    scanf("%f %f",&z.base,&z.height);
    return z;
  }
void input_n_triangles(int n, Triangle t[n])
  {
    for(int i=0;i<n;i++){
      t[i]=input_triangle();
    }
  }
  void find_area(Triangle *t)
  {
    t->area=(0.5)*((t->base)*(t->height)); 
  }
  void find_areas_n(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
    {
      t[i]->area=0.5*((t[i]->base)*(t[i]->height]);     
    }
  }
Triangle find_smallest_triangle(int n, Triangle t[n])
  {
    for(int i=0;i<n;i++){
      if(t[i]->area>)
  
    }
  }
