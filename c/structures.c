// #include <stdio.h>
// int main()
// {
//     struct employee
//     {
//         char name[30];
//         int salary;
//         int id;
//         int workhours;
//     }emp[100];
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
//             emp[i].salary=emp[i].salary+50;
//         }
//         else if(emp[i].workhours==10)
//         {
//             emp[i].salary=emp[i].salary+100;
//         }
//         else if(emp[i].workhours>=12)
//         {
//             emp[i].salary=emp[i].salary+150;
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
// struct distance{
//     int feet;
//     float inch;
// } d1,d2,d3,d4,result;
// int main()
// {
//     printf("enter 1st distance");
//     printf("enter feet");
//     scanf("%d",&d1.feet);
//     printf("enter inch");
//     scanf("%f",&d1.inch);

//     printf("enter 2nd distance");
//     printf("enter feet");
//     scanf("%d",&d2.feet);
//     printf("enter inch");
//     scanf("%f",&d2.inch);

//     result.feet=d1.feet+d2.feet;
//     result.inch=d1.inch+d2.inch;
//     printf("%d %f",result.feet,result.inch);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     int n;
//     printf("ENTER NUMBER OF BOATERS : ");
//     scanf("%d", &n);
//     struct boat
//     {
//         char name[50];
//         int seat_number;
//         int salary;
//         int fare;
//     };
//     struct boat b[n];
//     printf("ENTER INFO ON BOATERS : \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("ENTER NAME : ");
//         scanf("%s", &b[i].name);
//         printf("ENTER SEAT NUMBER : ");
//         scanf("%d", &b[i].seat_number);
//         printf("ENTER SALARY : ");
//         scanf("%d", &b[i].salary);
//         printf("ENTER FARE : ");
//         scanf("%d", &b[i].fare);
//     }

//     // PRINTING TICKETS
//     printf("TICKETS OF BOATERS -\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("----------------------------------- \n");
//         printf("NAME : %s\nSEAT NUMBER : %d\nSALARY : %d\nFARE : %d", b[i].name, b[i].seat_number, b[i].salary, b[i].fare);
//         printf("\n");
//     }
// }

// #include <stdio.h>
// struct student{
//     char name[50];
//     int rno;
//     int sub[3];
// };
// int main()
// {
//     int i,j,count,total,n,ni;
//     struct student s[n];
//     printf("the no of students u want");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",&s[i].name);
//         printf("enter rno");
//         scanf("%d",&s[i].rno);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=2;j++)
//         {
//             printf("enter marks of student %d for subject %d",i,j);
//             scanf("%d",&s[i].sub[j]);
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         total=0;
//         for(int j=0;j<3;j++)
//         {
//             total=total+s[i].sub[j];
//         }
//         printf("total marks by student %s are %d",s[i].name,total);
    
//     }
//     return 0;

// }

// #include <stdio.h>
// struct structure
// {
// char name[50];
// int integer;
// float decimal;
// };
// struct structure
// read(void);
// void show(struct structure A);
// int main(void)
// {
// struct structure B = read();
// show(B);
// }
// struct structure read(void)
// {
// struct structure A;
// printf("FILL STRUCTURE : \n");
// fflush(stdin);
// printf("ENTER NAME : ");
// gets(A.name);
// printf("ENTER INTEGER VALUE : ");
// scanf("%d", &A.integer);
// printf("ENTER FLOAT VALUE : ");
// scanf("%f", &A.decimal);
// return A;
// }
// void show(struct structure A)
// {
// printf("DISPLAYING STRUCTURE -\n");
// printf("-----------------------------------\n");
// printf("NAME : %s\nINTEGER VALUE : %d\nFLOAT VALUE : %f\n", A.name, A.integer,
// A.decimal);
// printf("\n");
// }

// #include <stdio.h>
// struct student{
//     char name[30];
//     int rollno;
//     int sub;
// };
// int main()
// {
//     int i,j,max,count,total,n;
//     struct student st[100];
//     printf("enter how many students");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("enter name and roll no");
//         scanf("%s",&st[i].name);
//         scanf("%d",&st[i].rollno);
//         scanf("%d",&st[i].sub);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%s \n",st[i].name);
//         printf("%d \n",st[i].rollno);
//         printf("%d \n",st[i].sub);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// union student 
// {
//             char name[20];
//             char subject[20];
//             float percentage;
// };

// int main() 
// {
//     union student record1;
//     union student record2;

//     // assigning values to record1 union variable
//        strcpy(record1.name, "Raju");
//        strcpy(record1.subject, "Maths");
//        record1.percentage = 86.50;

//        printf("Union record1 values example\n");
//        printf(" Name       : %s \n", record1.name);
//        printf(" Subject    : %s \n", record1.subject);
//        printf(" Percentage : %f \n\n", record1.percentage);

//     // assigning values to record2 union variable
//        printf("Union record2 values example\n");
//        strcpy(record2.name, "Mani");
//        printf(" Name       : %s \n", record2.name);

//        strcpy(record2.subject, "Physics");
//        printf(" Subject    : %s \n", record2.subject);

//        record2.percentage = 99.50;
//        printf(" Percentage : %f \n", record2.percentage);
//        return 0;
// }

// q1
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


// // // Q2
// #include <stdio.h>
// struct marks{
//     int roll_no;
//     char name[50];
//     int chem_marks;
//     int maths_marks;
//     int phy_marks;
// };
// int main()
// {
//     int max;
//     struct marks m[4];
//     for(int i=0;i<4;i++)
//     {
//         printf("enter ROLL NO \n");
//         scanf("%d",&m[i].roll_no);
//         printf("enter name");
//         scanf("%s",m[i].name);
//         printf("PHYSICS \n");
//         scanf("%d",&m[i].phy_marks);
//         printf("MATHS \n");
//         scanf("%d",&m[i].maths_marks);
//         printf("CHEMISTRY \n");
//         scanf("%d",&m[i].chem_marks);
//         printf("output \n");
//         if(m[i].maths_marks>m[i].chem_marks )
//         {
//             if(m[i].maths_marks>m[i].phy_marks && m[i].maths_marks>m[i].chem_marks)
//             {
//                 printf("highest marks are %d \n",m[i].maths_marks);
//             }
//             else if(m[i].phy_marks>m[i].chem_marks && m[i].phy_marks>m[i].maths_marks)
//             {
//                 printf("highest marks are %d \n",m[i].phy_marks);
//             }
//             else
//                 printf("highest marks are %d \n",m[i].chem_marks);
//         }

// 	    printf("Student %d\n",i+1);
// 	    float percentage = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300.0*100;
// 	    printf("Percentage : %.1f\n", percentage);
//     }
    
//     return 0;

// }

// // // Q3
// #include<stdio.h>

// struct time
// {
//     int hours;
//     int minutes;
//     int seconds;
// };

// int main()
// {
//     /* Creating structure variables */
//     struct time start, stop, diff;

//     /* Reading first time period */
//     printf("Enter hours, minutes and seconds of start time: ");
//     scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);

//     /* Reading second time period */
//     printf("Enter hours, minutes and seconds of stop time: ");
//     scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);

//     if(start.seconds > stop.seconds)
//     {
//         stop.seconds += 60;
//         --stop.minutes;
//     }

//     if(start.minutes > stop.minutes)
//     {
//         stop.minutes += 60;
//         --stop.hours;
//     }

//     diff.seconds = stop.seconds - start.seconds;
//     diff.minutes = stop.minutes - start.minutes;
//     diff.hours = stop.hours - start.hours;

//     printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);
//     return 0;
// }

// // // q5
// #include <stdio.h>
// struct employee{
//     int employee_id;
//     char employee_name[50];
//     char designation[40];
//     int years;
//     int salary;
// };
// int main()
// {
//     int n;
//     printf("no of employees");
//     scanf("%d",&n);
//     struct employee e[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter \n");
//         printf("ID");
//         scanf("%d",&e[i].employee_id);
//         printf("NAME");
//         scanf("%s",e[i].employee_name);
//         printf("DESIGNATION");
//         scanf("%s",e[i].designation);
//         printf("YEARS");
//         scanf("%d",&e[i].years);
//         printf("SALARY");
//         scanf("%d",&e[i].salary);
//         if(e[i].years>=5)
//         {
//             e[i].salary=e[i].salary+500;
//         }
//         printf("new salary of emp id %d after bonus is %d",e[i].employee_id,e[i].salary);
//     }
//     return 0;
// }

// // // q4
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
//         {
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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct date{
    int day;
    int month;
    int year;
}Date;

void printdate(Date dt)
{
    printf("%d / %d / %d",dt.day,dt.month,dt.year);
}

Date inputdate()
{
    Date dt;
    printf("Enter Day(1-31)  ");
    scanf("%d",&dt.day);
    printf("Enter month(1-12)  ");
    scanf("%d",&dt.month);
    printf("Enter Year  ");
    scanf("%d",&dt.year);
}

Date Nextdate()
{
    Date dt;
    dt.day=dt.day+1;
    if (dt.day>31)
    {
        dt.day=1;
        dt.month=dt.month+1;
    }
    if (dt.month>12)
    {
        dt.month=1;
        dt.year=dt.year+1;
    }

   printf("\nThe next date is:\n");
   printdate(dt);
}

int main()
{
    Date today;
    today=inputdate();
    printf("\nThe today date is:\n");
    printdate(today);
    Nextdate(today);
    return 0;
}

