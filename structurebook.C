// Structure of the book 
#include<stdio.h>
#include<string.h>
 
 struct Name{
     char title[30];
     char author[30];
     int publication_year;
     char ISBN[13];
     float price;
 } name1, name2;
 // initializing the variables(. operators)
 int main(){
     strcpy(name1.title,"Introduction to C Programming");
     strcpy(name1.author,"John Smith");
     name1.publication_year=2022;
     strcpy(name1.ISBN, "9780131103627");
     name1.price = 49.99;
      
     printf("title:%s \n",name1.title);
     printf("author:%s \n",name1.author);
     printf("Publoication year:%d\n",name1.publication_year);
     printf("ISBN:%s \n",name1.ISBN);
     printf("price:%f \n",name1.price);
     
     
     return 0;
 }
 