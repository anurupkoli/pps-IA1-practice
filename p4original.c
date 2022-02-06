#include<stdio.h>

int input_array_size(){
  int n;
  printf("please enter a number\n");
  scanf("%d", &n);

  return n;
}

void input_array(int n, int a[n]){

  for(int i=0; i<=n; i++){
    printf("enter the element number %d of the array\n",i+1);
    scanf("%d", &a[i]);

  }
}

int sum_n_arrays(int n, int a[n]){
  int sum=0;
  for(int i=0; i<n; i++){
    sum += a[i];
   
  }
   return sum;
}

void output(int n, int a[n], int sum){
  int i;
  printf("the sum of");
  for(i=0; i<n; i++){
    printf("%d+", a[i]);

  }
  printf("%d=%d",a[i], sum);
}

int main(){
  int n, a[n], sum;
  n = input_array_size();
  input_array(n,a);
  sum = sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;

}
