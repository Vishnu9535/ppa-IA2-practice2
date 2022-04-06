#include<stdio.h>
int input_array_size(){
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    printf("enter the array element");
    scanf("%d",&a[i]); 
  }
}
  
int sum_composite_numbers(int n, int a[n]){
  int sum=0;
  for(int i=0;i<n;i++){
    for(int j=2;j<a[i];j++){
      if(a[i]%j==0){
        sum=sum+a[i];
        break;
      }
    }
  }
  return sum;
}
void output(int sum){
  printf("sum of composite elements is %d",sum);
}
int main(){
  int n,a[30],sum;
  n=input_array_size();
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}