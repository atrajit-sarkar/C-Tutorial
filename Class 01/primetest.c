#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int flag=0;
    printf("Enter your number: ");
    scanf("%d",&a);
    int y=sqrt(a);
    // printf("%d",y);
    int i=2;
    // printf("%d",a%i);
    while (i<=y){
        if (a%i!=0){
            i++;
            continue;
        }
        else{
            printf("This is a composite number and divisible by %d, ",i);
            flag=1;
            i++;
            // break;
        }
    }
    if (flag==0){
        printf("This is a prime number");
    }
    return 0;
}
