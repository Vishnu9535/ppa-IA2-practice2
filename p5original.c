#include<stdio.h>
void input(int a,int b){
  printf("input two numbers");
  scanf("%d %d",&a,&b);
    
}
int gcd(int a,int b){
  int x;
 for(int i=1; i<=a && i<=b ;i++){
    if(a%i==0 && b%i==0){
      x=i;
    }
}
  return x;
   }
void output(int a, int b, int x){
  printf("gcd of %d %d  is %d ",a,b,x);
}
int main(){
  int a,b,x;
  input(a,b);
  x=gcd(a,b);
  output(a,b,x);
  return 0; 
}



