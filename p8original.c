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
Triangle input_triangle()
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
      t[i].area=0.5*((t[i].base)*(t[i].height));     
    }
  }
Triangle find_smallest_triangle(int n, Triangle t[n])
  {
    Triangle smallest ;
    smallest.area=t[0].area;
    for(int i=1;i<n;i++){
     if(smallest.area > t[i].area){
       smallest.area = t[i].area;
     }
        
   }
    return smallest;
  }
  void output(int n, Triangle t[n], Triangle smallest)
  {
    printf("smallest of in given triangles %f",smallest.area);
  }

int main()
{
  int n;
  Triangle z;
  n=input_n();
  z=input_triangle();
  Triangle t[n];
  input_n_triangles(n,t);
  find_area(&t);
  find_areas_n(n,t);
  find_smallest_triangle(n,t);
  
  return 0;  
  
  
    
  }
