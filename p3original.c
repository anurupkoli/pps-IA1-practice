#include <stdio.h>

int input(){

  int n;

  printf("please enter a number\n");
  scanf("%d", &n);

  return n;

}
int sum(int n){

  int sum=0,i=0;
  
  for (i=0; i<=n; i++)
  sum += i;
  for(i=1; i<=n; i++)

  printf("%d+",i);

  return sum;

}



void output(int n, int sum){

  printf("sum of first n natural numbers up until %d is %d\n", n, sum);

}

int main(){

  int n, add;

  n = input();
  add = sum(n);

  output(n, add);

  return 0;

}