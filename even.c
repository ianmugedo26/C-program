//even or odd numbers
#include<stdio.h>
int main(){
    int p = 6;
    printf("Enter the number :");
    scanf("%d",p);

    if(p %2 == 0){
        printf("%d is even \n",p);
    }
    else {
        printf("%d is odd \n",p);
    }
    return 0;

}
