#include<stdio.h>
int input_array_size(){
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  
  return n;
}
void input_array(int n,int a[n]){
  printf("Enter the array elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n]){
  int sum=0,flag=0;
  for(int i=0;i<n;i++){
    for(int j=2;j<=a[i]/2;j++){
      if(a[i]%j==0){
        flag=1;
      }
      else{
        flag=0;
      }
    }
    if(flag==1){
      sum=sum+a[i];
    }3
  }
  return sum;
}
void out_put(int sum){
  printf("%d",sum);
  
}
int main(){
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int s=sum_composite_numbers(n,a);
  out_put(s);
}