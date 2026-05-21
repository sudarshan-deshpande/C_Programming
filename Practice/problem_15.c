#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;

    struct Date pubDate;

    int available; // 1 = Available, 0 = Issued
};

void addBook(struct Book books[], int *count)
{
    struct Book *b = &books[*count];

    printf("\nEnter Book ID: ");
    scanf("%d", &b->id);

    getchar();

    printf("Enter Book Name: ");
    fgets(b->name, sizeof(b->name), stdin);
    b->name[strcspn(b->name, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = '\0';

    printf("Enter Price: ");
    scanf("%f", &b->price);

    printf("Enter Publication Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &b->pubDate.day,
          &b->pubDate.month,
          &b->pubDate.year);

    b->available = 1;

    (*count)++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks(struct Book books[], int count)
{
    int i;

    if (count == 0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    printf("\n---------------------------------------------------------------------------------\n");
    printf("ID\tName\t\tAuthor\t\tPrice\tStatus\t\tPublication Date\n");
    printf("---------------------------------------------------------------------------------\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%-15s %-15s %.2f\t",
               books[i].id,
               books[i].name,
               books[i].author,
               books[i].price);

        if (books[i].available)
            printf("Available\t");
        else
            printf("Issued\t\t");

        printf("%02d-%02d-%04d\n",
               books[i].pubDate.day,
               books[i].pubDate.month,
               books[i].pubDate.year);
    }
}

void searchByID(struct Book books[], int count)
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook Found!\n");

            printf("ID: %d\n", books[i].id);
            printf("Name: %s\n", books[i].name);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);

            printf("Publication Date: %02d-%02d-%04d\n",
                   books[i].pubDate.day,
                   books[i].pubDate.month,
                   books[i].pubDate.year);

            if (books[i].available)
                printf("Status: Available\n");
            else
                printf("Status: Issued\n");

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nBook Not Found.\n");
    }
}

void searchByAuthor(struct Book books[], int count)
{
    char author[50];
    int i, found = 0;

    getchar();

    printf("\nEnter Author Name: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';

    printf("\nBooks by %s:\n", author);

    for (i = 0; i < count; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printf("ID: %d | Name: %s | Price: %.2f\n",
                   books[i].id,
                   books[i].name,
                   books[i].price);

            found = 1;
        }
    }

    if (!found)
    {
        printf("No Books Found.\n");
    }
}

void updatePrice(struct Book books[], int count)
{
    int id, i;
    float newPrice;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            printf("Enter New Price: ");
            scanf("%f", &newPrice);

            books[i].price = newPrice;

            printf("\nPrice Updated Successfully!\n");
            return;
        }
    }

    printf("\nBook Not Found.\n");
}

void issueBook(struct Book books[], int count)
{
    int id, i;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].available)
            {
                books[i].available = 0;
                printf("\nBook Issued Successfully!\n");
            }
            else
            {
                printf("\nBook Already Issued.\n");
            }

            return;
        }
    }

    printf("\nBook Not Found.\n");
}

void returnBook(struct Book books[], int count)
{
    int id, i;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (books[i].id == id)
        {
            if (!books[i].available)
            {
                books[i].available = 1;
                printf("\nBook Returned Successfully!\n");
            }
            else
            {
                printf("\nBook Was Already Available.\n");
            }

            return;
        }
    }

    printf("\nBook Not Found.\n");
}

void sortByPrice(struct Book books[], int count)
{
    int i, j;
    struct Book temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (books[j].price > books[j + 1].price)
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    printf("\nBooks Sorted by Price Successfully!\n");
}

int main()
{
    struct Book books[100];

    int count = 0;
    int choice;

    while (1)
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");

        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Books by Author\n");
        printf("5. Update Price\n");
        printf("6. Issue Book\n");
        printf("7. Return Book\n");
        printf("8. Sort Books by Price\n");
        printf("9. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(books, &count);
            break;

        case 2:
            displayBooks(books, count);
            break;

        case 3:
            searchByID(books, count);
            break;

        case 4:
            searchByAuthor(books, count);
            break;

        case 5:
            updatePrice(books, count);
            break;

        case 6:
            issueBook(books, count);
            break;

        case 7:
            returnBook(books, count);
            break;

        case 8:
            sortByPrice(books, count);
            break;

        case 9:
            printf("\nExiting Program...\n");
            return 0;

        default:
            printf("\nInvalid Choice.\n");
        }
    }

    return 0;
}