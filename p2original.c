#include <stdio.h>
int input_side(){
  int x;
  printf("enter the side of the triangle");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a, int b, int c)
{
  int v;
  if(a!=b && a!=c && b!=c){
    v=0;
  }
  else {
    v=1;  
  }
  return v;
}
 void output(int a, int b, int c, int v){
   if(v==0){
     printf("its a scalene");
   }
   else if(v==1){
     printf("its not a scalene");
   }
 }
int main(){
 int a,v,b,c,x;
 a=input_side();
  b=input_side();
  c=input_side();
 v=check_scalene(a,b,c);
  output(a,b,c,v);
  return 0;
}