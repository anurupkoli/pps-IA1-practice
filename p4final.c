#include<stdio.h>

void input_array(int n, int a[n]){
  printf("please enter total number of elements that you              want to add\n");
  scanf("%d", &n);

}

int sum_n_arrays(int n, int a[n]){
  int i,sum=0;
  
  printf("please enter the numbers one by one\n");
  for(i=0; i<n; i++){

    scanf("%d", &a[i]);
    sum += a[i]; 
  }
  return sum;
}

void output(int n, int a[n], int sum){

  printf("sum of given numbers is: %d \n", sum);

}

int main(){
  int n, sum, a[n];
input_array(n, &a[n]);
sum = sum_n_arrays(n, &a[n]);

output(n, &a[n], sum);

return 0;

}