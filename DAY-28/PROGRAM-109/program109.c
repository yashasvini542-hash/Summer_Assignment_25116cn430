#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct Book b[100];
    int n = 0, choice, searchId, i;

    while (1)
    {
        printf("\n----- Library Management System -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n==0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\nBook List\n");
                    for(i=0;i<n;i++)
                    {
                        printf("\nID : %d", b[i].id);
                        printf("\nName : %s", b[i].name);
                        printf("\nAuthor : %s\n", b[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d",&searchId);

                for(i=0;i<n;i++)
                {
                    if(b[i].id==searchId)
                    {
                        printf("\nBook Found");
                        printf("\nName : %s",b[i].name);
                        printf("\nAuthor : %s\n",b[i].author);
                        break;
                    }
                }

                if(i==n)
                    printf("Book Not Found!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}