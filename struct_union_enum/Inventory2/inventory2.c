/* Maintains a part database (linked list version) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

/* points to first part */
struct part *inventory = NULL;

struct part *findPart(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/**************************************************
 * main:
 * Prompts the user to enter an operation code,
 * then calls a function to perform the requested
 * action. Repeats until the user enters the command
 * 'q'. Prints an error message if the user enters
 * an illegal code.
 **************************************************/
int main(void)
{
    char code;

    for ( ; ; )
    {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n'){;}
        switch (code)
        {
            case 'i': insert(); break;
            case 's': search(); break;
            case 'u': update(); break;
            case 'p': print(); break;
            case 'q': return 0;
            default: printf("Illegal code.\n");
        }
        printf("\n");
    }
}

/**************************************************
 * findPart: 
 * Looks up a part number in the inventory list.
 * Returns a pointer to the node containing the part
 * number; if the part number is not found, returns
 * NULL. .
 **************************************************/
struct part *findPart(int number)
{
    struct part *p;

    for (p = inventory;
        p != NULL && number > p->number;
        p = p->next)
    { ;}

    if (p != NULL && number == p->number)
    {return p;}

    return NULL;
}

/**************************************************
 * insert: 
 * Prompts the user for information about a new part
 * and then inserts the part into the inventory list;
 * the list remains sorted by part number. Prints an 
 * error message and returns prematurely if the part 
 * already exists or space could not be allocated for 
 * the part. .
 **************************************************/
void insert(void)
{
    struct part *current, *previous, *newNode;

    newNode = (struct part *)malloc(sizeof(struct part));
    if (newNode == NULL)
    {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &newNode->number);

    for (current = inventory, previous = NULL;
        current != NULL && newNode->number > current->number;
        previous = current, current = current->next)
    { ;}

    if (current != NULL && )
}