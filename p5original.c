#include <stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers");
  scanf("%d %d",a,b);
}
void gcd(int a, int b,int *hcf){
  for(int i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      *hcf=i;
    }
  }
}
void output(int a, int b, int hcf)
{
  printf("gcd of %d and %d is %d",a,b,hcf);
}
int main(){
  int a,b,hcf;
  input(&a,&b);
  gcd(a,b,&hcf);
  output(a,b,hcf);
  return 0;
}