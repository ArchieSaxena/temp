
// #include <stdio.h>
// void main (){
//     int num[20];
//     int i, j, a, n;
//     printf("enter number of elements in an array\n");
//     scanf("%d", &n);
//     printf("Enter the elements\n");
//     for (i = 0; i < n; ++i)
//         scanf("%d", &num[i]);
//     for (i = 0; i < n; ++i){
//         for (j = i + 1; j < n; ++j){
//             if (num[i] > num[j]){
//                 a = num[i];
//                 num[i] = num[j];
//                 num[j] = a;
//             }
//         }
//     }
//     printf("The numbers in ascending order is:\n");
//     for (i = 0; i < n; ++i){
//         printf("%d\n", num[i]);
//     }
// }

// #include <stdio.h>
// void sum(int,int);
// void main()
// {
//     int x=5,int y=7;
//     sum(x,y);

// }
// void sum(int a,int b)
// {
//     printf("enter 2 no");
//     scanf("%d %d",&a,&b);
//     sum=a+b;
//     printf("sum is %d",sum);
// }

// T2 SDF 
// Q1
// #include <stdio.h>
// int main()
// {
//     int t[5]={3,1,18,25,29};
//     int x,y,z;
//     x=t[0]-1;
//     y=x;
//     z=t[x++];
//     printf("%d %d %d",x,y,z);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%d %d",sizeof("TESTs"),strlen("TEST"));
//     return 0;
// }
 
// #include <stdio.h>

// int main(void)
// {
//     int a[] = {2, 1, 3, 4, 3, 1, 2, 3, 1, 2};

//     int count_stud;
//     printf("Enter number of students : ");
//     scanf("%d", &count_stud);
//     int marks[count_stud][10];
//     // for each student representing a row, we are storing marks of different subjects in different columns

//     for (int i = 0; i < count_stud; i++)
//     {
//         printf("Enter answers of student %d\n", i + 1);
//         for (int j = 0; j < 10; j++)
//         {
//             printf("Enter answers of question %d\n", j + 1);
//             scanf("%d", &marks[i][j]);
//         }
//     }
//     // printing marks of students in different subjects
//     for (int i = 0; i < count_stud; i++)
//     {
//         printf("The answers filled by student %d is:\n", i + 1);
//         for (int j = 0; j < 10; j++)
//         {
//             printf("ques %d : %d \n", j + 1, marks[i][j]);
//         }
//     }
//     // calculating total marks for each student
//     for (int i = 0; i < count_stud; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 10; j++)
//         {
//             if (a[j] == marks[i][j])
//             {
//                 sum ++;
//             }
            
//         }
//         printf("MARKS of student %d is %d \n", i + 1, sum);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[5]={2,1,3,4,3};
//     int marks[10][10];
//     int count_stud, count_sub, i, j;
//     printf("Enter number of students and no of ques");
//     scanf("%d %d", &count_stud, &count_sub);
//     // for each student representing a row, we are storing marks of different subjects in different columns

//     for(i=0;i<count_stud;i++)
//     {
//         printf("Enter marks of student %d\n", i+1); 
//         for(j=0;j<count_sub;j++)
//         {
//             printf("Enter ams key of question %d\n", j+1);
//             scanf("%d", &marks[i][j]);
//         }
        
//     } 
//     //printing marks of students in different subjects
//     for(i=0;i<count_stud;i++)
//     {
//         printf("The ans key of students %d are:\n", i+1); 
//         for(j=0;j<count_sub;j++)
//         {
//             printf("ques %d : %d \n",j+1,marks[i][j]);
//         }
//     } 
//     // calculating total marks for each student
// 	for(i=0;i<count_stud;i++)
// 	{
//         int sum=0;
//         for(j=0;j<count_sub;j++)
//         {
//             if(a[j]==marks[i][j])
//             {
//                 sum++;
//             }
//         }  
//         printf("sum of student %d is %d ",i+1,sum);   
//     } 
//     return 0;
// }

// #include <stdio.h>
// int show();
// int main()
// {
//     int p;
//     printf("count");
//     p=show();
//     printf("%d",p);
//     return 0;
// }
// int show()
// {
//     return 35;
//     return 15;
// }

// #include <stdio.h>
// int main()
// {
//     int a[3][4]={1,2,3,4,5,6,7,8,9,0,1,4};
//     printf("%u %u",a,&a);
//     return 0;
// }
 
// #include <stdio.h>

// int main()
// {


//     char p[]="Examsquiz";

//     char t;

//     int i, j;

//     for(i=0,j=strlen(p); i<j; i++)

//     {

//         t = p[i];

//         p[i] = p[j-i];

//         p[j-i] = t;

//     }

//     printf("%s", p);

//     return 0;

// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[100];
//     int f=0;
//     printf("enter string");
//     int m=0;
//     gets(a);
//     if(strlen(a)==8)
//     {
//         for(int i=0;i<4;i++)
//         {
//             if(a[i]>=65 && a[i]<=90)
//             {
//                 f=1;
//             }
//         }
//         for(int j=4;j<8;j++)
//         {
//             if(a[j]>=48 && a[j]<=57)
//             {
//                 m=1;
//             }
//         }
//     }
//     if(f==1 && m==1)
//     {
//         printf("VALID");
//     }
//     else{
//         printf("not valid");
//     }
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     printf("%d",strcmp("I","Z"));
// }

// #include <stdio.h>
// int main()
// {
//     int arr[100];
//     int n,max;
//     printf("enter total no ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     max=arr[0];
//     for(int i=0;i<=n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("the smallest element is %d",max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char s[20];
//     int temp;
//     printf("enter string");
//     gets(s);
//     for(int i=0;i<strlen(s)/2;i++)
//     {
//         temp=s[i];
//         s[i]=s[len-i-1];
//         s[len-i-1]=temp;
//         i++;
//     }
//     puts(s);
// }

// #include <stdio.h>
// int main()
// {
//     int arr[4],i=0;
//     for(i=0;i<4;i++)
//     {
//         scanf("%d",&arr[i]);

//     }   
//     for(i=0;i<4;i++)
//     {
//         arr[i+1]=arr[i]+1;
//     }
//     for(i=0;i<4;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//     const int a=20;     //declare and assign constant integer
//     int *p;             //declare integer pointer
//     p=&a;               //assign address into pointer p
 
//     printf("Before changing - value of a: %d",a);
 
//     //assign value using pointer
//     *p=40;
 
//     printf("\nAfter  changing - value of a: %d",a);
//     printf("\nValue has changed.");
 
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[]="JIIT MCQ-22";
//     char str2[]={'J','I','I','T','M','C','Q','-','2'};
//     int n1=strlen(str1);
//     int n2=strlen(str2);
//     printf("%d %d",n1,n2);

// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[]={'a','b','c','d','e','f'};
  
    
//     printf("%d ",strlen(str));
    
// }

// #include <stdio.h> 
// struct students 
// { 
//     char name[20]; 
//     char reg[15]; 
//     int m1, m2, m3, m4, m5; 
// }; 
// int main() 
// { 
//     struct students student; 
//     printf("Enter the student name : "); 
//     gets(student.name); 
//     printf("Enter the student Register no. : "); 
//     gets(student.reg); 
//     printf("Enter the student marks in subject 1 : "); 
//     scanf("%d", &student.m1); 
//     printf("Enter the student marks in subject 2 : "); 
//     scanf("%d", &student.m2); 
//     printf("Enter the student marks in subject 3 : "); 
//     scanf("%d", &student.m3); 
//     printf("Enter the student marks in subject 4 : "); 
//     scanf("%d", &student.m4); 
//     printf("Enter the student marks in subject 5 : "); 
//     scanf("%d", &student.m5); 
//     float avg = (student.m1 + student.m2 + student.m3 + student.m4 + student.m5) / 5.0; 
//     FILE *outfile; 
//     outfile = fopen("Student.txt", "w"); 
//     fprintf(outfile, "Name of the student : %s\n", student.name); 
//     fprintf(outfile, "Register No. of the student : %s\n", student.reg); 
//     fprintf(outfile, "Mark of the student subject 1 : %d\n", student.m1); 
//     fprintf(outfile, "Mark of the student subject 2 : %d\n", student.m2); 
//     fprintf(outfile, "Mark of the student subject 3 : %d\n", student.m3); 
//     fprintf(outfile, "Mark of the student subject 4 : %d\n", student.m4); 
//     fprintf(outfile, "Mark of the student subject 5 : %d\n", student.m5); 
//     fprintf(outfile, "Average marks of the student : %.2f\n", avg); 
 
//     return 0; 
// }