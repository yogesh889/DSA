#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

void addBook() {
    FILE *fp;
    struct Book b;

    fp = fopen("library.txt", "a");

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    fprintf(fp, "%d %s %s\n", b.id, b.name, b.author);

    fclose(fp);

    printf("Book Added Successfully!\n");
}

void displayBooks() {
    FILE *fp;
    struct Book b;

    fp = fopen("library.txt", "r");

    printf("\nBook Records:\n");

    while(fscanf(fp, "%d %s %s", &b.id, b.name, b.author) != EOF) {
        printf("ID: %d | Name: %s | Author: %s\n",
               b.id, b.name, b.author);
    }

    fclose(fp);
}

int main() {
    int choice;

    while(1) {
        printf("\n1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
