#include <stdio.h>

int input_n()
{
    int a;
    printf("Please enter a number\n");
    scanf("%d",&a);
    return a;
}

void intput_array(int n, int a[n])
{
    for(int i=0;i<n;i++){
        printf("Enter the element no %d of the array\n",i+1);
        scanf("%d",&a[i]);
    }
}

int find_array_sum(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum)
{
    int i;
    printf("The sum of" );
    for(i=0;i<n-1;i++) {
        printf("%d+",a[i]);
    }
    printf("%d=%d",a[i],sum);
}

int main(){

    int n,sum;
    n = input_n();
    int a[n];
    intput_array(n,a);
    sum=find_array_sum(n,a);
    output(n,a,sum);
    return 0;
}
