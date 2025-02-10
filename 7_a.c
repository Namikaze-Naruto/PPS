/*
    Write a menu driven program for :
    1. Factorial of a number
    2. Prime or not
    3. Even or Odd
    4. Exit
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void eodd (void);
void fact (void);
void prime (void);

int main ()
{
    
    int choice,st;

    do
    {
        system("clear");
        printf ("Welcome to my program !!\n ");
        getch ();
        system("clear");
        printf("Enter your choice :");
        
        printf ("Menu are :- \n     1. Factorial of a program\n    2. Prime or not\n    3. Even or Odd\n    4. Exit \n");
        scanf(" %d",&choice);
        system ("clear");
        switch (choice)
        {   
            case 1 :
                fact();
                break;

            case 2 :
                prime();
                break;

            case 3 :
            eodd ();
                break;

            case 4 :
                printf ("You exited the program !!");
                getch ();
                exit (1);
        }
    
        printf ("\n To exit the the program :0 \n To continue : 1 ");
        scanf ("%d",&st);
    }
    

    while (st);
    return 0;
}

void fact (void)
{
    int i,fac=1;
    printf ("Enter the number for factorial :");
    scanf("%d",&i);
    for ( i;i>0;i--) fac = fac *i;
    printf ("\n %d",fac);
    
}

void prime (void)
{
    int n,p;
    printf ("Enter the number you want to check : ");
    scanf ("%d",&n);
    for (p=2;p<n;p++)
    {
        if (n%p==0) 
        {
            printf("\n Not a prime.");
            break;
        }
    }
    if (p == n-1) printf ("\n Given is a prime number.");
}

void eodd (void)
{
    int num;
    printf ("Enter the number : ");
    scanf ("%d",&num);
    if (num % 2==0) printf ("\n Number is Even.");
    else if (num %2 !=0) printf ("\n Number is Odd.");
    else printf ("\nInvalid Input.");    

}