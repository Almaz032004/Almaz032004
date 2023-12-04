//program to count the number of even and odd numbers in a given number
#include<stdio.h>
int main(){
  int n,evencount=0,oddcount=0,digit;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n!=0){
    digit=n%10;
    if(digit%2==0){
      evencount++;
    }
    else oddcount++;
  }
printf("The number even numbers=%d\nThe number of odd numbers=%d",evencount,oddcount);
return 0;
}
