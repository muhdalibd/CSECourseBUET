/*
    3. Book Structure Management
    Create a structure named Book to store book details like title, author, and price.
    Write a C program to input details for three books, find the most expensive and
    the lowest priced books, and display their information.
*/
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[30];
    float price;
};

int main(){
    struct Book b1, b2, b3;
    printf("Book 1 Details :\n");
    scanf("%s %s %f", b1.title, b1.author, &b1.price);
    printf("Book 2 Details :\n");
    scanf("%s %s %f", b2.title, b2.author, &b2.price);
    printf("Book 3 Details :\n");
    scanf("%s %s %f", b3.title, b3.author, &b3.price);

    // Find the most expensive book
    struct Book mostExpensive;
    if(b1.price > b2.price && b1.price > b3.price){
        mostExpensive = b1;
    }
    else if(b2.price > b1.price && b2.price > b3.price){
        mostExpensive = b2;
    } else{
        mostExpensive = b3;
    }

    // Find the lowest priced book
    struct Book lowestPrice;
    if(b1.price < b2.price && b1.price < b3.price){
        lowestPrice = b1;
    }
    else if(b2.price < b1.price && b2.price < b3.price){
        lowestPrice = b2;
    } else{
        lowestPrice = b3;
    }
    printf("\n");

    printf("%s\t%s\t%.2f\n", mostExpensive.title, mostExpensive.author, mostExpensive.price);
    printf("%s\t%s\t%.2f\n", lowestPrice.title, lowestPrice.author, lowestPrice.price);
    return 0;
}