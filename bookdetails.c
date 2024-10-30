#include <stdio.h>
#include <string.h>
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    //Declaration and initialization of a book variable
    struct book myBook;
    strcpy(myBook.title, "Introduction to C Programming");
    strcpy(myBook.author, "John Smith");
    myBook.publication_year = 2022;
    strcpy(myBook.ISBN, "9780131103627");
    myBook.price = 49.99;

    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    struct book userBook;
    printf("\nEnter book details:\n");
    printf("Title: ");
    scanf(" %[^\n]", userBook.title);
    printf("Author: ");
    scanf(" %[^\n]", userBook.author);
    printf("Publication Year: ");
    scanf("%d", &userBook.publication_year);
    printf("ISBN: ");
    scanf("%s", userBook.ISBN);
    printf("Price: ");
    scanf("%f", &userBook.price);

    return 0;
}
