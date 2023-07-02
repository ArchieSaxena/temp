// #include <stdio.h>

// struct costumer{
//     char name[50];
//     int account_number;
//     int balance;
// };
// int main()
// {
//     int n;
//     printf("enter the no of customers");
//     scanf("%d",&n);
//     struct costumer c[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",c[i].name);
//         printf("enter account number");
//         scanf("%d",&c[i].account_number);
//         printf("enter balance");
//         scanf("%d",&c[i].balance);
//         if(c[i].balance>1000)
//           {
//               c[i].balance=c[i].balance+100;
//               printf("%d \n",c[i].balance);
//           }
//         printf("%d \n",c[i].account_number);
        
        
//         int m;
//         printf("enter the amount to be withdrawn");
//         scanf("%d",&m);
//         c[i].balance=c[i].balance-m;
//         printf("%d",c[i].balance);
       
//     }
//     return 0;
// }

// #include <stdio.h>
// struct student
// {
//     char name[50];
//     int rollno;
//     int sub;
// };
// int main()
// {
//     int i,j;
//     int n;
//     printf("no of students");
//     scanf("%d",&n);
//     struct student s[n];
//     for(i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",s[i].name);
//         printf("enter rollno");
//         scanf("%d",&s[i].rollno);
//         printf("enter submarks");
//         scanf("%d",&s[i].sub);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%s \n",s[i].name);
//         printf("%d \n",s[i].rollno);
//         printf("%d \n",s[i].sub);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// const int n = 2;
// struct employee
// {
//     int employee_id;
//     char employee_name[50];
//     int designation;
//     // 1 for Project Manager, 2 for Team Leader, 3 for Team Member
//     int years_of_experience;
//     int salary;
// };
// struct employee emps[10];
// void addBonus()
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (emps[i].years_of_experience > 4)
//         {
//             emps[i].salary += 5000;
//             printf("Salary of Employee Id %d updated to Rs. %d\n", emps[i].employee_id,emps[i].salary);
//         }
//     }
// }
// int main(void)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("ENTER EMPLOYEE NAME : ");
//         gets(emps[i].employee_name);
//         printf("ENTER EMPLOYEE ID : ");
//         scanf("%d", &emps[i].employee_id);
//         printf("ENTER EMPLOYEE DESIGNATION : ");
//         scanf("%d", &emps[i].designation);
//         printf("ENTER EMPLOYEE EXPERIENCE : ");
//         scanf("%d", &emps[i].years_of_experience);
//         printf("ENTER EMPLOYEE SALARY : ");
//         scanf("%d", &emps[i].salary);
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t%s\t%d\t%dYears\tRs. %d\n", emps[i].employee_id,
//                emps[i].employee_name, emps[i].designation, emps[i].years_of_experience,
//                emps[i].salary);
//     }
//     printf("\n\n");
//     addBonus();
// }

// #include <stdio.h>
// struct student {
//    char name[50];
//    int age;
// };

// // function prototype
// void display(struct student s);

// int main() {
//    struct student s1;

//    printf("Enter name: ");

//    // read string input from the user until \n is entered
//    // \n is discarded
//    scanf("%[^\n]%*c", s1.name);

//    printf("Enter age: ");
//    scanf("%d", &s1.age);

//    display(s1); // passing struct as an argument

//    return 0;
// }

// void display(struct student s) {
//    printf("\nDisplaying information\n");
//    printf("Name: %s", s.name);
//    printf("\nAge: %d", s.age);
// }

// 1. a) Write a structure to store the names, salary and employee id of 10 employees in a
// company. 
// b) Write a program to increase the salary depending on the number of hours of work
// per day as follows and then print the name of all the employees along with their final
// salaries.

// Hours of work per day 8 10 &gt;=12
// Increase in salary $50 $100 $150

// 1. Write a program to add two distances in the inch-feet system using structures.

// 1. Write a program to print the tickets of the boarders of a boat using array of structures
// with initialization in the program. Create boat structure with name, seat_number salary and
// fare.
// 1. Write a program using a function that does not require any parameter to be passed and
// returns a structure.
// a) Create structure A with char, integer and float variable.
// b) Create function read to return struct type. // struct A read();
// c) Create show function to display the values of structure type. // void show(struct
// A);

// #include <stdio.h>
// struct employee{
//     char name[40];
//     int salary;
//     int id;
//     int workhours;
// }emp[1000];
// int main()
// {
//     int n;
//     printf("enter no of employees");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%s %d %d %d",emp[i].name,&emp[i].salary,&emp[i].id,&emp[i].workhours);
//     }
//     printf("\nEMP_NAME\tEMP_SALARY\tEMP_ID\tEMP_WORKHOURS\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].salary,emp[i].id,emp[i].workhours);
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(emp[i].workhours==8)
//         {
//         emp[i].salary=emp[i].salary+50;
//         }
//         else if(emp[i].workhours==10)
//         {
//         emp[i].salary=emp[i].salary+100;
//         }
//         else if(emp[i].workhours>=12)
//         {
//         emp[i].salary=emp[i].salary+150;
//         }
//         else
//             printf("no increment");
//     }
//     printf("new updated salary \n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].salary,emp[i].id,emp[i].workhours);
//     }
//     return 0;
// }

// #include <stdio.h>
// struct students{
//     char branch[50];
//     char name[40];
//     int roll_no;
//     float cgpa;
// };
// int main()
// {
//     int n;
//     printf("enter no of students");
//     scanf("%d",&n);
//     struct students s[n];
//     int ni;
//     float max;
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",s[i].name);
//         printf("enter branch");
//         scanf("%s",s[i].branch);
//         printf("enter roll no");
//         scanf("%d",&s[i].roll_no);
//         printf("enter cgpa");
//         scanf("%f",&s[i].cgpa);
//     }
//     max=s[1].cgpa;
//     for(int i=0;i<n;i++)
//     {
        
//         if(max<s[i].cgpa)
//         {
//             max=s[i].cgpa;
//             ni=i;
//         }
//     }
//     printf("student %s got max cgoa = %f",s[ni].name,max);
// }

// #include <stdio.h>
// #include <string.h>
// struct customerinfo{
//     char name[50];
//     char dob[30];
//     char place[50];
//     char password[50];
//     char country[50];
// };
// void display(struct customerinfo c[]);
// void pass(struct customerinfo c[]);
// int main()
// {
//     int n;
//     printf("enter value of n");
//     scanf("%d",&n);
//     struct customerinfo c[3];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",c[i].name);
//         printf("enter dob");
//         scanf("%s",c[i].dob);
//         printf("enter place");
//         scanf("%s",c[i].place);
//         printf("enter country");
//         scanf("%s",c[i].country);
//         pass(c);
        
//     }
//     display(c);
    

//     return 0;
// }
// char s[20]="India";
// int n=3;
// void display(struct customerinfo c[])
// {

//     for(int i=0;i<n;i++)
//     {
//         int m=strcmp(c[i].country,s);
//         if (m==0)
//         {
//             printf("%s \n",c[i].name);
//             printf("%s \n",c[i].dob);
//             printf("%s \n",c[i].place);
//             printf("%s \n",c[i].country);   
//         }
//     }
// }
// void pass(struct customerinfo c[])
// {
//     for(int i=0;i<n;i++)
//     {
//         c[i].password[0] = c[i].name[0];
//         c[i].password[1] = c[i].name[strlen(c[i].name) - 1];
//         c[i].password[2] = c[i].place[0];
//         c[i].password[3] = c[i].place[1];
//         c[i].password[4] = c[i].country[0];
//         c[i].password[5] = c[i].country[1];
//         c[i].password[6] = c[i].dob[0];
//         printf("%s",c[i].password);
//     }
   
// }
 
// int a=10; a=10 &a=g449u2c
// int *p=&a p=g449u2c *p=10 
// int **p

// #include <stdio.h>
// int main ()
// {
//     int k=5;
//     int *p=&k;
//     int **m=&p;
//     printf("%d %d %d",k,*p,**m);
// }


// int arr[5] = {1, 2, 3, 4, 5};
//             1000 1002 1004 1006
//             &arr[0]
//             arr
// char *s="JIIT"
//     person1->date;

// Q 1) Write a C program using pointer to declare var with value 20 and print the value of the
// ptr, var and *ptr

// Q 2) Write a C program to accept 5 numbers, store them in array and find out
// the smallest number using pointer.
// Q3) Write a C; Program to accept m X n matrix and find the largest and
// smallest number from the matrix using dynamic memory allocation.
// Q 4) Write a C program to reverse an array;s elements using dynamic
// memory allocation.
// Q 5) Write a C Program to count vowels and consonants in a string using
// pointer.

// Q 6) Write a C program given two integer numbers, and to swap their
// values using pointers.
// Q 7) Write a C program to change the value of constant integer using
// pointers.
// Q 8) Write a C program to read and print student details using structure
// pointer, demonstrate example of structure with pointer.

// #include <stdio.h>
// void swap(int *a,int *b);
// int main()
// {
//     int x,y,*a,*b,i;
//     printf("Enter the value of x and y\n");
//     scanf("%d%d", &x, &y);
//     printf("Before Swapping\nx = %d\ny = %d\n", x, y);
//     a = &x;
//     b = &y;
//     swap(a,b);
//     printf("After Swapping\nx = %d\ny = %d\n", x, y);
//     return 0;
// }
// void swap(int *a,int *b)
// {
//     int i;
//     i=*b;
//     *b=*a;
//     *a=i;
// }

// B15


// #include <stdio.h>
// #include <string.h>

// struct Student_Details
// {
//     char name[50];
//     int Rno;
//     int sec;
//     struct Subjects
//     {
//         int M[3];
//         int P[3];
//         int C[3];
//     } Sub;
// };

// int main(void)
// {
//     float sum[3];
//     struct Student_Details s[4][20];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("DETAILS OF STUDENT OF SECTION %i\n", i + 1);
//         for (int j = 0; j < 2; j++)
//         {
//             printf("ENTER DETAILS OF STUDENT - \n");
//             fflush(stdin);
//             printf("NAME - ");
//             gets(s[i][j].name);
//             printf("Roll No - ");
//             scanf("%d", &s[i][j].Rno);
//             printf("SECTION = %i\n",i+1);
//             s[i][j].sec = i + 1;
//             for (int k = 0; k < 3; k++)
//             {
//                 if (k == 0)
//                 {
//                     printf("T1 marks - \n");                 
//                 }
//                 if (k == 1)
//                 {
//                     printf("T2 marks - \n");
//                 }
//                 if (k == 2)                                                 
//                 {
//                     printf("END sem marks - \n");
//                 }
//                 printf("MATH - ");
//                 fflush(stdin);
//                 scanf("%d", &s[i][j].Sub.M[k]);
//                 if (s[i][j].Sub.M[k] > 25 && (k==0 || k==1))
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.M[k] = 0;
//                 }
//                 else if (s[i][j].Sub.M[k] > 50)
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.M[k] = 0;
//                 }
                
//                 printf("CHEMISTRY - ");
//                 fflush(stdin);
//                 scanf("%d", &s[i][j].Sub.C[k]);
//                 if (s[i][j].Sub.C[k] > 25 && (k==0 || k==1))
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.C[k] = 0;
//                 }
//                 else if(s[i][j].Sub.C[k] > 50 )
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.C[k] = 0;
//                 }
                
//                 printf("PHYSICS - ");
//                 fflush(stdin);
//                 scanf("%d", &s[i][j].Sub.P[k]);
//                 if (s[i][j].Sub.P[k] > 25 && (k==0 || k==1))
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.P[k] = 0;
//                 }
//                 else if(s[i][j].Sub.P[k] > 50 )
//                 {
//                     printf("INVALID MARKS ENTERED!\n");
//                     s[i][j].Sub.P[k] = 0;
//                 }

//                 sum[k] = s[i][j].Sub.P[k]+s[i][j].Sub.C[k]+s[i][j].Sub.M[k];
                
//             }
//         }
//     }
// }

// #include <stdio.h>

// struct distance
// {
//     int feet;
//     int inches;
//     int distance;
// } d[4], result, temp;
// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Distance %d :\n", i + 1);
//         printf("Feet : ");
//         scanf("%d", &d[i].feet);
//         printf("Inches : ");
//         scanf("%d", &d[i].inches);
//         printf("\n");
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         d[i].distance = d[i].feet + d[i].inches / 12;
//     }
//     // SORTING
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4 - i - 1; j++)
//         {
//             if (d[i].distance > d[i + 1].distance)
//             {
//                 temp = d[i];
//                 d[i] = d[i + 1];
//                 d[i + 1] = temp;
//             }
//         }
//     }
//     printf("SORTED DISTANCES DISPLAYED :\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("\nDistance %d :\n", i + 1);
//         printf("feet : %d\n", d[i].feet);
//         printf("inches : %d\n", d[i].inches);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         result.feet += d[i].feet;
//         result.inches += d[i].inches;
//     }
//     result.feet += result.inches / 12;
//     result.inches = result.inches % 12;
//     printf("\nSum of distances is :%d feet %d inches", result.feet, result.inches);
//     return 0;
// }


// q2
// #include <stdio.h>
// union employee{
//     int id;
//     char name[50];
//     int age;
//     int salary;
// };
// int main()
// {
//     union employee e[5];
//     for(int i=0;i<5;i++)
//     {
//         printf("enter id");
//         scanf("%d",&e[i].id);
//         printf("id %d\n",e[i].id);

//         printf("enter name");
//         scanf("%s",e[i].name);
//         printf("name %s\n",e[i].name);

//         printf("enter age");
//         scanf("%d",&e[i].age);
//         printf("age %d\n",e[i].age);

//         printf("enter salary");
//         scanf("%d",&e[i].salary);
//         printf("salary %d\n",e[i].salary);
//     }
//     return 0;
// }

// q1
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
//     struct Players
//     {
//         char player_name[50];
//         char Team_name[50];
//         float Bat_avg;
//     };
//     struct Players p[16];
//     printf("ENTER INFO ABOUT Players : \n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Player %d NAME : ", i + 1);
//         gets(p[i].player_name);
//         printf("Team %d NAME : ", i + 1);
//         gets(p[i].Team_name);
//         printf("Batting average : ");
//         scanf("%f", &p[i].Bat_avg);
//         fflush(stdin);
//     }
//     printf("\n\n");
//     // PRINTING INFO OF PLAYERS OF TEAM INDIA FIRST
//     printf("PRINTING MEMBERS OF TEAM INDIA - \n");
//     for (int i = 0; i < 16; i++)
//     {
//         if (strcmp("INDIA", p[i].Team_name) == 0)
//         {
//             printf("PLAYER NAME : %s\n", p[i].player_name);
//             printf("PLAYER'S TEAM NAME : %s\n", p[i].Team_name);
//             printf("BATTING AVERAGE : %0.2f\n", p[i].Bat_avg);
//         }
//     }
//     printf("\n\n");
//     // PRINTING INFO OF PLAYERS OF TEAM PAKISTAN SECOND
//     printf("PRINTING MEMBERS OF TEAM PAKISTAN - \n");
//     for (int i = 0; i < 16; i++)
//     {
//         if (strcmp("PAKISTAN", p[i].Team_name) == 0)
//         {
//             printf("PLAYER NAME : %s\n", p[i].player_name);
//             printf("PLAYER'S TEAM NAME : %s\n", p[i].Team_name);
//             printf("BATTING AVERAGE : %0.2f\n", p[i].Bat_avg);
//         }
//     }
// }


// q3
// #include <stdio.h>
// void counter(char *s);
// void reverse(char *s);
// int main()
// {
//     char str[80];
//     printf("enter sentence");
//     printf("\n");
//     gets(str);
//     counter(str);
//     printf("\n");
//     reverse(str);
//     puts(str);
// }
// void counter(char *s)
// {
//     int count = 0;
//     for (int i = 0; i < *(s + i); i++)
//     {
//         if (*(s + i) != ' ')
//             count++;
//     }
//     printf("Total number of characters in a string: %d", count);
// }

// void reverse(char *s)
// {
//     int l, i;
//     char t;
//     for (l = 0; *(s + l); l++)
//     {
//         for (i = 0; i < l / 2; i++)
//         {
//             t = *(s + i);
//             *(s + i) = *(s + l - i - 1);
//             *(s + l - i - 1) = t;
//         }
//     }
// }


/******************************************************************************

                           GAME ZONE
                A PLACE FOR OLD GAME IN A NEW MANNER

*******************************************************************************/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function Declaration For Game 1//

//GAME 1 IS TIC-TAC-TOE//

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board();

//Function Declaration For Game 2//

//GAME 2 IS ROCK PAPER Scissors//

int generateRandomNumber(int );
int greater(char c1, char c2);

//Function Declaration For Game 3//

//GAME 3 IS Cricket IN A NEW MANNER//


int GetPlayerToss(char player1[],char player2[],int oversToplay);

//Function FOR PLAYERS TO WIN THE TOSS//

int batting(char battingplayer[],char bowlingplayer[],int oversToplay);

//Function Declaration For Game 4

// IT IS guesses THE number//

void guess(int N);

//INITIALISING THE PROGRAM//

int main()

{   
    
    int choi=0;
    
    //  REPRESNTING USER WHICH GAME WE OFFER TO PLAY //

    printf("\t\t\t>>>>>>>>>> Welcome To Game Zone <<<<<<<<<<<\n");
    
    printf("\t\t\t<<<<<<<<<< ENJOY YOUR PLAY>>>>>>>>>>>>>\n ");
    
    printf("1- Tik\n");
    printf("2- Stone Paper\n");
    printf("3- Cricket\n");
    printf("4- Guess the number\n");
    printf("Please Choose A Game :");
    
    //ASKING USER WHICH GAME HE CHOOSE//
    
    scanf("%d",&choi);
    
    //CODE FOR TIC-TAC-TOE //    
    
    if(choi==1)
    
    //USING IF ELSE STATEMENT TO RUN THE PROGRAM WHICH USER WANT//
    
    {
        int player = 1, i, choice;
         char mark;
         do
         {
         board();
         player = (player % 2) ? 1 : 2;
         printf(" Player %d, enter a number: ", player);
         scanf("%d", &choice);
         //giving player 1 choice to fill any position by 'O'or 'X'//
         mark = (player == 1) ? 'X' : 'O';
         if (choice == 1 && square[1] == '1')
         square[1] = mark;
         else if (choice == 2 && square[2] == '2')
         square[2] = mark;
         else if (choice == 3 && square[3] == '3')
         square[3] = mark;
         else if (choice == 4 && square[4] == '4')
         square[4] = mark;
         else if (choice == 5 && square[5] == '5')
         square[5] = mark;
         else if (choice == 6 && square[6] == '6')
         square[6] = mark;
         else if (choice == 7 && square[7] == '7')
         square[7] = mark;
         else if (choice == 8 && square[8] == '8')
         square[8] = mark;
         else if (choice == 9 && square[9] == '9')
         square[9] = mark;
         else
         {
        
        //FOR ANY Invalid //
        
         printf(" Invalid move ");
         
         player--;
         
         }
         
         //FOR Choosing Winner
         i = checkwin();
         player++;
         }while (i == - 1);
         board();
         if (i == 1)
         printf(" ==>\aPlayer %d win ", --player);
         else
         printf(" ==>\aGame draw");
            }
            
            
    else if(choi==2)
    
    //FOR 2nd game 
    
    {
        
    //starting the score from 0-0 for both player
    
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    
    //Declaration of Rock, Paper and Scissors
    
    char dict[] = {'r', 'p', 's'};
    
    /* r= Rock
       p=Paper
       s=Scissors*/
    
    printf("\tWelcome to the Rock Paper Scissors\n");
    printf("\t----------------------------------\n\n");
    
    //using for loop
    
    for (int i = 0; i < 3; i++)
    {
    
        // Take player input
    
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        printf("\tPlayer's turn: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf(" -----------------\n");
        printf("| You choose: %c   |\n", playerChar);
        printf(" -----------------\n\n");
        
        //computer generate
        
        printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n\n");
        
        //instruction for player
        
        printf("\tComputer's turn\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf(" --------------------\n");
        printf("| Computer choose: %c |\n", compChar);
        printf(" --------------------\n\n");
        
        // compater character and increment the score
        
        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
            printf("\t\tComputer Got It!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf("\t\tIt's a draw. Both got 1 point!\n\n");
        }
        else
        {
            playerScore++;
            printf("\t\tYou Got It!\n\n");
        }
        printf(" -------------\n");
        printf("| You: %d      |\n", playerScore);
        printf("| Computer: %d |\n", compScore);
        printf(" -------------\n\n");
        printf("===========================================================\n\n");
    }
    
    //design for end of game 
    
    /*it display final Score of both
    player and computer*/
    
    printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|   %d  |    %d     |\n", playerScore, compScore);
    printf(" -----------------\n\n");
    
    // compare score
    
    //condition for player to win
    
    if (playerScore > compScore)
    {
        printf("\n\t -------------------\n");
        printf("\t| You Win the match |\n");
        printf("\t -------------------\n");
    }
    
    //condition for computr to win
    
    /* when playerScore < compScore*/
    
    else if (playerScore < compScore)
    {
        printf("\n\t ------------------------\n");
        printf("\t| Computer Win the match |\n");
        printf("\t ------------------------\n");
    }
    
    //condition for a draw
    
    /* when both players 
    score same*/
    
    else
    {
        printf("\n\t -------------\n");
        printf("\t| It's a draw |\n");
        printf("\t -------------\n");
    }
    }
    
    
    
    //player has a choice to play 3rd game
    
    
    else if(choi==3)
    {
      
      /*********Declaration of all possible aspect of the game ***********/
             
              int i,j,overs,noovers,player1Toss,player2Toss;
         char player1[50],player2[50];
         srand(time(NULL));
         
         /*display for entering in game */
         
         printf("-----------------------------------WELCOME TO HAND CRICKET GAME-------------------------------------\n");
         printf("Enter Player 1 Name:");
         fflush(stdin);
         gets(player1);
         printf("Enter Player 2 Name:");
         fflush(stdin);
         gets(player2);
         
         /*diplaying some choice
         about which type of match they want to Play
         
         1.fixed Overs
         
         2.play until Out*/
         
         printf("Enter\n1 - Fixed Overs\n2 - Play Until Out\n3 - How to Play?\n4 - Exit: ");
         scanf("%d",&noovers);
         
         //Alsohave option for instruction//
         
          do{
         
         //noovers=number of over 
         
         // an over contain 6 ball
         
         if(noovers==1)
         {
          printf("Enter No Of Overs: ");
          
          /* asking player to enter
           numbers of over*/
           
          scanf("%d",&overs);
          player1Toss=GetPlayerToss(player1,player2,overs); 
          
         }
         else if(noovers==2)
         {
             
          player1Toss=GetPlayerToss(player1,player2,0);
         
            
         }
         else if(noovers==3)
         {
          
          //giving instructions
          
          // about how to play 
          
          // rules for GAME
          
          printf("How To Play?\n");
          printf("Until a player Won the toss Follow the Output and give whatever it asks you to give\n");
          printf("Then the Player who won the toss chooses either to Bat or to Bowl\n");
          printf("The Player who chose batting and bowling has to proceed by pressing enter Key one by one\n");
          printf("Where System will generate Random number as runs for both players.Player 1 runs keeps on adding until his runs equals to player 2 runs\n");
          printf("Finally When Player 1 is Out.Till then his runs are his final Score.The Same process will be Conducted for player 2.\n");
          printf("Finally whoever is having Highest Score is the Winner.\n\n");
          printf("For Example: Player 1 Won the Toss And Chose Batting.Then When Player 1 Press Enter Key,A score will be generated for Player 1\n");
          printf("Suppose runs are 5 So Player 1 Score=5.Then Player 2 Also Presses Enter key.Then if he got a Score of 4.So Player 2 Score =4\n");
          printf("As Player 1 Score is not equal to player 2 Score Then Player 1 is not out and hi score will be 5 after 1st ball \n");
          printf("In 2nd ball Player 1 got 3 runs and Player 2 got 4.Since again both are not equal.Player 1 Score=5+3=8\n");
          printf("If in the 3rd Ball Player 1 got 4 runs and Player 2 also got 4 runs Then Player 1 Score is equal to Player 2's Score Then Player 1 is Out\n");
          printf("Then Final Score of player 1 is 8 runs.\n");
          printf("The Same Process is done for Player 2.So Finaly who ever got more score is Winner\n");
         }
         else
         {
          printf("--------------------------------------------Invalid Choice--------------------------------------------\n");
         }
         
         // asking player which type of game you he/she want
         
         printf("Enter 1 - Fixed Overs\n2 - Play Until Out\n3 - How to Play?\n4 - Exit: ");
         scanf("%d",&noovers);
          }while(noovers>=1 && noovers<=3);
             
    }
    
    if(choi==4)
    {
        int N = 100;

    	// Function call
    	
    	guess(N);

    	
    }
    

    return 0;
}


int checkwin()
{
 if (square[1] == square[2] && square[2] == square[3])
 return 1;
 else if (square[4] == square[5] && square[5] == square[6])
 return 1;
 else if (square[7] == square[8] && square[8] == square[9])
 return 1;
 else if (square[1] == square[4] && square[4] == square[7])
 return 1;
 else if (square[2] == square[5] && square[5] == square[8])
 return 1;
 else if (square[3] == square[6] && square[6] == square[9])
 return 1;
 else if (square[1] == square[5] && square[5] == square[9])
 return 1;
 else if (square[3] == square[5] && square[5] == square[7])
 return 1;
 else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
 square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
 != '7' && square[8] != '8' && square[9] != '9')
 return 0;
 else
 return - 1;
}

/***********************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 ************************/

void board()
{
 //system("cls");
 printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
 printf("\t Tic Tac Toe");
 printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
 printf(" Player 1 (X) - Player 2 (O)\n\n");
 printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
 printf("\t|   |   |   |\n");
 printf("\t| %c | %c | %c |\n", square[1], square[2], square[3]);
 printf("\t|___|___|___|\n");
 printf("\t|   |   |   |\n");
 printf("\t| %c | %c | %c |\n", square[4], square[5], square[6]);
 printf("\t|___|___|___|\n");
 printf("\t|   |   |   |\n");
 printf("\t| %c | %c | %c |\n", square[7], square[8], square[9]);
 printf("\t|   |   |   |\n");
 printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}


//Functions for Rock Paper

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}






//function for CRICKET

int GetPlayerToss(char player1[],char player2[],int oversToplay)
{
 int player1Choice,player2Choice,toss,player1Toss,batorbowlChoice,player2Score,player1Score;
     printf("%s Choose your choice either 1 for head or 2 for tail: ",player1);
  scanf("%d",&player1Choice);
  //USE OF IF STATEMENT
  
  //FOR DIFFERENT condition
  
  if(player1Choice==1)
  {
   player2Choice=2;
   printf("%s Choice is Tail\n",player2);
  }
  else if(player1Choice==2)
  
  // ANOTHER condition
  
  {
   player2Choice=1;
   printf("%s Choice is Head\n",player2);
  }
  else
  
  //ANOTHER condition
  
  {
   printf("--------------------------------------------Invalid Choice--------------------------------------------\n");
   return(0);
  }
  toss=rand()%2;
  toss=toss+1;
  if(toss==1)
  printf("Toss is Head\n");
  else
  
  //ANOTHER condition
  
  printf("Toss is Tail\n");
  if(toss==player1Choice)
  {
   player1Toss=1;
   printf("Player 1 %s Won the Toss\n",player1);
   printf("Choose\n1 - Batting\n2 - Bowl: ");
   scanf("%d",&batorbowlChoice);
   if(batorbowlChoice==1)
   {
        printf("----------------%s is Going to bat Now-----------------------\n",player1);
    player1Score=batting(player1,player2,oversToplay);
    printf("----------------%s is Going to bat Now-----------------------\n",player2);
    player2Score=batting(player2,player1,oversToplay);
    printf("----------------Its Time for Results-----------------------\n");
   }
   else
  
   //ANOTHER condition
  
   {
    printf("----------------%s is Going to bat Now-----------------------\n",player2);
    player2Score=batting(player2,player1,oversToplay);
    printf("----------------%s is Going to bat Now-----------------------\n",player1);
    player1Score=batting(player1,player2,oversToplay);
    printf("----------------Its Time for Results-----------------------\n");
   }
  }
  else if(toss==player2Choice)
  
  //ANOTHER condition
  
  {
   player1Toss=2;
   printf("Player 2 %s Won the Toss\n",player2);
   printf("Choose\n1 - Batting\n2 - Bowl: ");
   scanf("%d",&batorbowlChoice);
   if(batorbowlChoice==1)
   {
    printf("----------------%s is Going to bat Now-----------------------\n",player2);
    player2Score=batting(player2,player1,oversToplay);
    printf("----------------%s is Going to bat Now-----------------------\n",player1);
    player1Score=batting(player1,player2,oversToplay);
    printf("----------------Its Time for Results-----------------------\n");
   }
   else
  
   //ANOTHER condition
  
   {
    printf("----------------%s is Going to bat Now-----------------------\n",player1);
    player1Score=batting(player1,player2,oversToplay);
    
    printf("----------------%s is Going to bat Now-----------------------\n",player2);
    player2Score=batting(player2,player1,oversToplay);
    
    printf("----------------Its Time for Results-----------------------\n");
   }
  }
  else
  
  //ANOTHER condition
  
  {
   printf("------------------------------------------------Error-------------------------------------------------\n");
   return(0);
  }
  if(player1Score==player2Score)
  {
   printf("Draw Match\nThanks For Playing the Game\n");
  }
  if(player1Score>player2Score)
  printf("%s Won the Match\nThanks for Playing the Game\n",player1);
  if(player1Score<player2Score)
  printf("%s Won the Match\nThanks for Playing the Game\n",player2);
  return(player1Toss);
}

int batting(char battingplayer[],char bowlingplayer[],int oversToplay)
{
 int i,j,battingScore,sum=0,bowlerSocre,flag=1;
 char c;
 
 // using if else STATEMENT
 
 if(oversToplay>0)
 {
  for(i=1;i<=oversToplay;i++)
  {
   for(j=1;j<=6;j++)
   {
    printf("%d.%d ball\n",i,j);
    printf("%s Press Enter key to bowl :",bowlingplayer);
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    bowlerSocre=(int)rand()%7;
    
    //Generate from 0-6 where 0 means no ball
    
    printf("%s Press Enter key to bat :",battingplayer);
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
    battingScore=rand()%7;
    
    //Generate 0-6 runs
    
    if(battingScore==bowlerSocre)
    {
     flag=0;
     printf("-----------------%s is Out----------------\n",battingplayer);
     printf("%s Total Score=%d\n",battingplayer,sum);
     if(sum==0)
            printf("-----------Hehehe Duck Out-----------------\n");
     break;
    }
    else
    {
     printf("Got %d runs\n",battingScore);
                    if(battingScore==6)
                    printf("Sixerrrrrr Keep it Up\n");
                    if(battingScore==4)
               printf("Its a Four Great Man\n");
     sum=sum+battingScore;
     printf("%s Score=%d\n",battingplayer,sum);
    }
   }
   if(flag==0)
   break;
  }
 
  return(sum);
 }
 
   if(oversToplay==0)
   {
    
    // USING WHILE loop
    
      while(flag)
      {
        printf("%s Press Enter key to bowl :",bowlingplayer);
  fflush(stdin);
  scanf("%c",&c);
  fflush(stdin);
  bowlerSocre=(int)rand()%7;
  
  //Generate from 0-6 where 0 means no ball
  
  printf("%s Press Enter key to bat :",battingplayer);
  fflush(stdin);
  scanf("%c",&c);
  fflush(stdin);
  battingScore=rand()%7;
  
  //Generate 0-6 runs
  
  if(battingScore==bowlerSocre)
  {
   flag=0;
   printf("-----------------%s is Out----------------\n",battingplayer);
   printf("%s Total Score=%d\n",battingplayer,sum);
   if(sum==0)
   printf("-----------Hehehe Duck Out-----------------\n");
   break;
  }
  
  else
  
  //ANOTHER condition
  
  {
   printf("Got %d runs\n",battingScore);
            if(battingScore==6)
            
            //CONDITION OF Score
            
            printf("Sixerrrrrr Keep it Up\n");
            if(battingScore==4)
       printf("Its a Four Great Man\n");
   sum+=battingScore;
   printf("%s Score=%d\n",battingplayer,sum);
  }
      }
      return(sum);
   }
 
}



//Function for guess the number

// Function that generate a number in

// the range [1, N] and checks if the

// generated number is the same as the

// guessed number or not

void guess(int N)
{
	int number, guess, numberofguess = 0;

	// Generate a random number
	
	number = rand() % N;

	printf("Guess a number between"
		" 1 and %d\n",
		N);

	// Using a do-while loop that will
	
	// work until user guesses
	
	// the correct number
	
	do {

		if (numberofguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}

		// Input by user
		
		scanf("%d", &guess);

		
		// When user guesses lower
		
		// than actual number
		
		if (guess > number)

		{
			printf("Lower number "
				"please!\n");
			numberofguess++;
		}

		
		// When user guesses higher
		
		// than actual number
		
		else if (number > guess)

		{
			printf("Higher number"
				" please!\n");
			numberofguess++;
		}

		// Printing number of times
		
		// user has taken to guess
		
		// the number
		
		else
			printf("You guessed the"
				" number in %d "
				"attempts!\n",
				numberofguess);

	} while (guess != number);
}