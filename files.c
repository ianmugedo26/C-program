//C file handling:
#include <stdio.h>// printf(),scanf()
#include <stdlib.h>//exit()
int main (){
    int number;
    FILE *fptr;//declare pointer

    fptr=fopen("C:\\Users\\user\\OneDrive\\Desktop\\C -language\\file.txt","w");
    if(fptr == NULL) {
    printf("Error opening the file");
    exit(1);
    }
    printf("Enter a random number");
    scanf("%d",&number);

    fprintf(fptr,"The number entered is %d",number);
    fclose(fptr);
    printf("Number written successfully");

    return 0; //execution successful


}
