#include <stdio.h>
#include <stdlib.h>


struct Book{
    char *title;
    char *author;
    float price;
};



int main (){

    struct Book books[3] = {
        {"Cinayet ve Ceza", "Dostoyevski", 10.99},
        {"1984", "George Orwell", 8.99},
        {"C language", "Dennis M.Ritchie", 12.49}
    };


    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
        printf(" \n");
    }
    return (0);
}
