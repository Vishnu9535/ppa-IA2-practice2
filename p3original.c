#include <stdio.h>
int input_number(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  return n;
}
int is_composite(int n){
  int a=n;
  for(int i=2;i<=a/2;i++){
    if(a%i==0){
      return 1;
    }
  }
  return 0;
}
void output(int n,int composite){
  if(composite==1){
    printf("%d is a composite number",n);
  }
  else{
    printf("%d is not a composite number",n);
  }
}
int main(){
  int n= input_number();
  int comp=is_composite(n);
  output(n,comp);
  
}