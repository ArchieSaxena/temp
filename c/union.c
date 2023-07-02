// q1
#include <stdio.h>
union student {
    char name[33];
    long rollNumber;
    short int age;
};
int main(){
    union student a;
    printf("%lu", sizeof(a));
}

// q2
// #include <stdio.h>
// union student {
//     char name[33];
//     long rollNumber;
//     short int age;
//     char coursesEnrolled[5][20];
// };
// int main(){
//     union student a;
//     printf("%lu", sizeof(a));
// }

// q3
// #include <stdio.h>
// union student {
//     char name[33];
//     long rollNumber;
//     short int age;
//     char coursesEnrolled[5][20];
// };
// int main(){
//     union student a;
//     gets(a.name);
//     printf("Name is %s\n", a.name);
//     scanf("%d", &a.age);
//     printf("Age is %d\n", a.age);
//     scanf("%ld", &a.rollNumber);
//     printf("Roll Number is %ld\n", a.rollNumber);
//     fflush(stdin);
//     for (int i = 0; i < 5; i++)
//     {
//         gets(a.coursesEnrolled[i]);
//         printf("Subject %d is : %s\n", i+1, a.coursesEnrolled[i]);
//     }
// }

// q6
// #include <stdio.h>
// union myUnion{
//     char ch[10];
//     int num;
//     float fl;
// } u1,u2;
// int main(){
//     printf("Enter values for first variable:\n");
//     scanf("%s %d %f", u1.ch, &u1.num, &u1.fl);
//     printf("%s %d %f\n", u1.ch, u1.num, u1.fl);
//     printf("Enter string for second variable:\n");
//     scanf("%s", u2.ch);
//     printf("%s\n", u2.ch);
//     printf("Enter num for second variable:\n");
//     scanf("%d", &u2.num);
//     printf("%d\n", u2.num);
//     printf("Enter float for second variable:\n");
//     scanf("%f", &u2.fl);
//     printf("%f\n", u2.fl);
//     printf("Size is %d", sizeof(u1));
// }

// q7
// #include <stdio.h>
// union myUnion{
//     char ch;
//     int num;
//     float fl;
// } u;
// struct myStruct{
//     char ch;
//     int num;
//     float fl;
//     } s;
//     int main(){
//     printf("Enter values for union:\n");
//     scanf("%c %f %d", &u.ch, &u.fl, &u.num);
//     printf("Enter values for struct:\n");
//     scanf(" %c %f %d", &s.ch, &s.fl, &s.num);
//     printf("Values in union are : %c %f %d\n", u.ch, u.fl, u.num);
//     printf("Values in structure are : %c %f %d\n", s.ch, s.fl, s.num);
//     printf("Sizes are %d and %d\n", sizeof(u), sizeof(s));
// }

// // q4
// #include <stdio.h>
// union numchar{
//     int num;
//     char ch;
// };
// int main(){
//     union numchar n1;
//     scanf("%d", &n1.num);
//     union numchar* n2 = &n1;
//     printf("%d %c", n2->num, n2->ch);
// }

// q5
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// union employee {
//     char name[50];
//     int salary;
//     int id;
//     int age;

// };
// int main()
// {
//     int n,i,b,j;
//     printf("enter the no of students\n");
//     scanf("%d",&n);
//     union employee e[n];
//     for(i=0;i<n;i++)
//     {
//         printf("enter employee name \n");
//         scanf("%s",e[i].name);
//         printf("name %s\n",e[i].name);

//         printf("enter the salary\n");
//         scanf("%d",&e[i].salary);
//         printf("salary %d\n",e[i].salary);

//         printf("enter age\n ");
//         scanf("%d",&e[i].age);
//         printf("age %d\n",e[i].age);

//         printf("enter id\n ");
//         scanf("%d",&e[i].id);
//         printf("id %d\n",e[i].id);
//         printf("size of union %d\n", sizeof(e[i]));
//     }

// }

//q8
// symtab[i].u.sval[0]


// #include <stdio.h>
// union Employee{
//     int id;
//     char name[20];
//     int age;
//     int salary;
// } emp1, emp2;
// int main(){
//     int n;
//     printf("enter no of employees");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter data for 1st employee\n");
//         printf("Enter name: ");
//         fflush(stdin);
//         gets(emp1.name);
//         printf("Name of employee is %s\n", emp1.name);
//         printf("Enter id: ");
//         scanf("%d", &emp1.id);
//         printf("ID of first employee is %d\n", emp1.id);
//         printf("Enter age: ");
//         scanf("%d", &emp1.age);
//         printf("Age of first employee is %d\n", emp1.age);
//         printf("Enter Salary: ");
//         scanf("%d", &emp1.salary);
//         printf("Salary of first employee is %d\n", emp1.salary);
//     }
// }

#include <stdio.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("   Player %d, enter a number:  ", player);
        scanf("%d", &choice);

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
            printf("   Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("   ==>\aPlayer %d win ", --player);
    else
        printf("   ==>\aGame draw");

    getch();

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
        return  - 1;
}


/***********************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 ************************/


void board()
{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t   Tic Tac Toe");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   Player 1 (X)  -  Player 2 (O)\n\n");


    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t|     |     |     |\n");
    printf("\t|  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);

    printf("\t|__|_|__|\n");
    printf("\t|     |     |     |\n");

    printf("\t|  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);

    printf("\t|__|_|__|\n");
    printf("\t|     |     |     |\n");

    printf("\t|  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);

    printf("\t|     |     |     |\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}