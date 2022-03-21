#include<stdio.h>
#include<string.h>
void input_string(char a[]){
  printf("enter the word");
  fgets(a,20,stdin); 
}
void str_reverse(char a[],  char reverse[])
{
  int len;
  len=strlen(a);
   int x=len-1;
  for(int i=0;i<len;i++) 
  {
    reverse[i]=a[x]; 
    x--;
 } 
}
void output(char reverse[] )
{
  printf("reverse of the string is %s",reverse);
}
int main(){
  char a[20],reverse[20];
  input_string(a);
  str_reverse(a,reverse);
  output(reverse);
  return 0;
  
}