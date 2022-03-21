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
    Triangle t;
    printf("enter the base and height of triangles");
    scanf("%f %f",&t.base,&t.height);
    return t;
  }
void input_n_triangles(int n, Triangle t[n])
  {
    for(int i=0;i<n;i++){
      t[i]=input_triangle();
    }
  }
  Triangle find_area(Triangle z)
  {
    z.area=(0.5)*(z.base*z.height); 
    return z;
  }
  void find_areas_n(int n, Triangle t[n])
{
    Triangle z;
    for(int i=0;i<n;i++)
    {
      t[i]=find_area(z);     
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
  Triangle t[n];
  Triangle smallest;
   n=input_n();
   input_n_triangles(n,t);
   find_areas_n(n,t);
   smallest=find_smallest_triangle(n,t);
   output(n,t,smallest);
   return 0;
  }
