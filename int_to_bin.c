//program to convert an integer to binary format
#include<stdio.h>
int main(){
  int n,remainder,binary=0,i=1;
  printf("Enter a number");
  scanf("%d",&n);
  while(n!=0){
    remainder=n%2;
    n=n/2;
    binary=binary+remainder*i;
    i=i*10;
  }
  printf("The binary format of the integer=%d",binary);
  return 0;
}
