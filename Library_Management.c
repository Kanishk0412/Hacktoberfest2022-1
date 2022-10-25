// block 1  
// to import standard input and output  
#include <stdio.h>  
// to import clear statements, etc. ( if any )  
#include <conio.h>  
// to import standard libraries  
#include <stdlib.h>  
// to import strings and use strings  
#include <string.h>  
  
  
// block 2  
  
// declare all variables which store their respective   
// data using structure ' library '  
struct library  
{  
    // to store the name of the book  
    char book_name[100];  
    // to store the name of the author of the book  
    char author_name[100];  
    // to store the cost of the book  
    float cost;  
    // to store the number of pages of the book  
    int no_of_pages;  
};  
  
  
// block 3  
  
// main function  
int main()  
{  
    // using the strut library again.'  
    // in order to perform operations  
    struct library lib[100];  
    char book_name[100];  
    int i, j, count;  
    i = 0;  
    j = 0;  
    count = 0;  
  
  
    // block 3.1  
  
    while(j!=6)  
    {  
        printf(" \n\n1. Add Book details\n ");  
        printf(" 2. Display the list of books and its details\n ");  
        printf(" 3. Display the total no. of books in the library\n ");  
        printf(" 4. Exit\n\n");  
        printf(" Enter the number: ");  
        scanf(" %d", &j);  
  
  
       // block 3.1.1  
  
        switch(j)  
        {  
            // in order to add the book details  
            case 1:  
                printf(" \nYou can add the details of the book ");  
                printf(" \nEnter the book name: ");  
                scanf(" %s", lib[i].book_name);  
                printf(" \nEnter the author name: ");  
                scanf(" %s", lib[i].author_name);  
                printf(" \nEnter the number of pages: ");  
                scanf(" %d", &lib[i].no_of_pages);  
                printf(" \nEnter the cost of the book: ");  
                scanf(" %f", &lib[i].cost);  
                count = count + 1;  
                i = i + 1;  
                break;  
  
            case 2:  
                // if there are no books registered previously  
                if (count==0)  
                {  
                    printf(" \nThere are no books stored!!\n\n ");  
                }  
                else  
                {  
                    // to view the list of the books  
                    printf(" \nYou can view the list of books ");  
                    printf(" \nThe list of books are: ");  
                    for(i=0; i < count; i++)  
                    {  
                        printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                        printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                        printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
                        printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);  
                    }  
                }  
                break;  
  
            case 3:  
                // to view the total number of books  
                printf(" \nTotal number of books in the library are: %d\n\n ", count);  
                break;  
              
            case 4:  
                // to exit from the program  
                exit(0);  
                  
            default:  
                // if any number other than 1, 2, 3, 4 is entered   
                printf(" \nInvalid number entered\n\n ");  
        }  
  
    }  
  
}  
An explanation for the program:

As we have classified the entire program into 5 blocks, let us discuss each block one by one.

Block 1:

// to import standard input and output  
#include <stdio.h>  
// to import clear statements, etc. ( if any )  
#include <conio.h>  
// to import standard libraries  
#include <stdlib.h>  
// to import strings and use strings  
#include <string.h>  
In this block, we have included or imported all the pre-processors that are necessary for the program, which tells the C compiler to perform specific operations before compiling accordingly. This step, i.e., " Pre-processors ", is one of the main steps in the " Structure of C program ". Without using specific pre-processors, we cannot perform any required task within the program.

Block 2:

// declare all variables which store their respective   
// data using structure ' library '  
struct library  
{  
    // to store the name of the book  
    char book_name[100];  
    // to store the name of the author of the book  
    char author_name[100];  
    // to store the cost of the book  
    float cost;  
    // to store the number of pages of the book  
    int no_of_pages;  
};  
<
This block deals with the structure " library ", which involves the mandatory variables. Generally, the Structures in C language are used to group several variables within a single place. These variables are declared and initiated within this block in order to use those whenever needed throughout the program. In the same way, the structure " library " is also used in this program. It is used in order to declare the variables like " book_name ", " author_name ", " cost ", and " no_of_pages ", which possess different data types.

Block 3:

// main function  
int main()  
{  
    // using the strut library again.'  
    // in order to perform operations  
    struct library lib[100];  
    char book_name[100];  
    int i, j, count;  
    i = 0;  
    j = 0;  
    count = 0;  
  
  
    // block 3.1  
  
    while(j!=6)  
    {  
        // statements regarding the choice  
  
         
   // block 3.1.1  
  
        switch(j)  
        {  
            // switch cases depending on the option chosen  
        }  
  
    }  
In this block, the main section is initiated. We have considered " int main " directly. In the main section, we reconsidered the structure " library " that has been declared previously in order to access its members. The name of the book using a variable " book_name " can be declared again to have a specific nature and difference between the one declared in the structure, and the other declared in the main section.

The variables like " book_name ", " i ", " j " and " count " are declared in which the variable " book_name " defines the name of the book entered, " i " and " j " defines the use for iteration, and " count " defines the number of books present in the library. After declaring the required variables according to their data types, we considered a while loop and a switch case. Let us discuss everything about while loop and switch cases in the upcoming statements.

Block 3.1:

while(j!=6)  
{  
        printf(" \n\n1. Add Book details\n ");  
        printf(" 2. Display the list of books and its details\n ");  
        printf(" 3. Display the total no. of books in the library\n ");  
        printf(" 4. Exit\n\n");  
        printf(" Enter the number: ");  
        scanf(" %d", &j);  
  
       // block 3.1.1  
        switch(j)  
        {  
            // switch cases depending on the option chosen  
        }  
  
}  
In this block, the iteration is implemented using a while loop. We need to initiate the iteration in order to have multiple inputs and give out their corresponding outputs. In other words, we can say that we use a while loop for iterating many times when we want to give input many times, one after another, so that all the information of the books present in the library can be somehow known.

A variable " j ", which is initiated as 0, is considered, and a base condition " j ! = 6 " is given. In the while loop, the condition " j ! = 6 " ensures that the serial number or the choice among the statements " Add Book details ", " Display the list of books and its details ", " Display the total no. of books in the library " and " Exit " is not exceeded. When a number 5 is given, then it is considered to be the default and then quits the loop, which further prints the " Invalid Input " statement.

There is a " switch case " introduced, which compares the scanned value of j previously and then checks the case according to the number scanned. Let us discuss everything about the switch case block in the upcoming statements.

Block 3.1.1:

switch(j)  
     {  
         // in order to add the book details  
         case 1:  
             printf(" \nYou can add the details of the book ");  
             printf(" \nEnter the book name: ");  
             scanf(" %s", lib[i].book_name);  
             printf(" \nEnter the author name: ");  
             scanf(" %s", lib[i].author_name);  
             printf(" \nEnter the number of pages: ");  
             scanf(" %d", &lib[i].no_of_pages);  
             printf(" \nEnter the cost of the book: ");  
             scanf(" %f", &lib[i].cost);  
             count = count + 1;  
             i = i + 1;  
             break;  
  
         case 2:  
             // if there are no books registered previously  
             if (count==0)  
             {  
                 printf(" \nThere are no books stored!!\n\n ");  
             }  
             else  
             {  
                 // to view the list of the books  
                 printf(" \nYou can view the list of books ");  
                 printf(" \nThe list of books are: ");  
                 for(i=0; i < count; i++)  
                 {  
                     printf(" \nThe name of the book is: %s ", lib[i].book_name);  
                     printf(" \nThe name of the author is: %s ", lib[i].author_name);  
                     printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);  
                     printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);  
                 }  
             }  
             break;  
  
         case 3:  
             // to view the total number of books  
             printf(" \nTotal number of books in the library are: %d\n\n ", count);  
             break;  
           
         case 4:  
             // to exit from the program  
             exit(0);  
               
         default:  
             // if any number other than 1, 2, 3, 4 is entered   
             printf(" \nInvalid number entered\n\n ");  
     }  
