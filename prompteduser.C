// Structure of the book 
#include <stdio.h>
#include <string.h>

struct Name {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
} name1;

int main() {
    // Getting user input for the book details
    printf("Enter the title of the book: ");
    scanf("%29s", name1.title); 
    printf("Title: %s\n", name1.title);

    printf("Enter the author: ");
    scanf("%29s", name1.author); 
    printf("Author: %s\n", name1.author);

    printf("Enter the year of publication: ");
    scanf("%d", &name1.publication_year); 
    printf("Publication year: %d\n", name1.publication_year);

    printf("Enter the ISBN: ");
    scanf("%12s", name1.ISBN); 
    printf("ISBN: %s\n", name1.ISBN);

    printf("Enter the price: ");
    scanf("%f", &name1.price); 
    printf("Price: %.2f\n", name1.price); 

    return 0;
}
