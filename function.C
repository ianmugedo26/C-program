//even or odd numbers
#include<stdio.h>

void checkEvenOdd(int p) {
    if(p %2 == 0){
        printf("The number is even \n");
    }
    else {
        printf("The number is odd \n");
    }
}
int main(){
    int p ;
    printf("Enter the number :");
    scanf("%d",&p);
    checkEvenOdd(p);

    return 0;
    
}