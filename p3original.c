#include<stdio.h>
int input_number(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int is_composite(int n){
int composite=0;
  for(int i=2;i<n;i++)
    {
      if(n%i==0){
        composite=1;
      }   
  }
   return composite;
}
void output(int n, int composite)
{
if(composite==1){
  printf("its  a composite number");
  }
  else {
    printf("its not a composite number");
  }
}
  int main(){
    int n,composite;
    n=input_number();
    composite=is_composite(n);
    output(n,composite);
    return 0;
  }