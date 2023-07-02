// #include <stdio.h>
// #include <stdlib.h>
  
// int main()
// {
//    char str[1000];
//    FILE *fptr;
//    char fname[20]="test.txt";

//     printf("\n\n Create a file (test.txt) and input text :\n");
// 	printf("----------------------------------------------\n"); 
//     fptr=fopen(fname,"w");	
//     if(fptr==NULL)
//     {
//         printf(" Error in opening file!");
//         exit(1);
//     }
//     printf(" Input a sentence for the file : ");
//     gets(str);
//     fputs(str,fptr);
//     fclose(fptr);
//     printf("\n The file %s created successfully...!!\n\n",fname);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     FILE * file;
//     char path[100];

//     char ch;
//     int characters, words, lines;


//     /* Open source files in 'r' mode */
//     file = fopen("test.txt", "r");


//     /* Check if file opened successfully */
//     if (file == NULL)
//     {
//         printf("\nUnable to open file.\n");
//         printf("Please check if file exists and you have read privilege.\n");

//         exit(EXIT_FAILURE);
//     }

//     /*
//      * Logic to count characters, words and lines.
//      */
//     characters = words = lines = 0;
//     while ((ch = fgetc(file)) != EOF)
//     {
//         characters++;

//         /* Check new line */
//         if (ch == '\n' || ch == '\0')
//             lines++;

//         /* Check words */
//         if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
//             words++;
//     }

//     /* Increment words and lines for last word */
//     if (characters > 0)
//     {
//         words++;
//         lines++;
//     }

//     /* Print file statistics */
//     printf("\n");
//     printf("Total characters = %d\n", characters);
//     printf("Total words      = %d\n", words);
//     printf("Total lines      = %d\n", lines);


//     /* Close files to release resources */
//     fclose(file);

//     return 0;
// }

// #include <stdio.h>

// int main ()
// {
//   FILE * fptr;
//     int i,n;
//     char str[100];
//     char fname[20]="test.txt";
//     char str1;
  
//     printf("\n\n Write multiple lines in a text file and read the file :\n");
// 	printf("------------------------------------------------------------\n");   
// 	printf(" Input the number of lines to be written : ");
// 	scanf("%d", &n);
// 	printf("\n :: The lines are ::\n");
// 	fptr = fopen (fname,"w"); 
// 	for(i = 0; i < n+1;i++)
// 		{
// 		fgets(str, sizeof str, stdin);
// 		fputs(str, fptr);
// 		}
//   fclose (fptr);
// /*-------------- read the file -------------------------------------*/
// 	fptr = fopen (fname, "r");  
// 	printf("\n The content of the file %s is  :\n",fname);
// 	str1 = fgetc(fptr);
// 	while (str1 != EOF)
// 		{
// 			printf ("%c", str1);
// 			str1 = fgetc(fptr);
// 		}
//     printf("\n\n");
//     fclose (fptr);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[1000];
//     FILE *fptr;
//     fptr=fopen("test.txt","r");
    // if(fptr==NULL)
    // {
    //     printf(" Error in opening file!");
    // }
//     printf("enter string");
//     gets(str);
//     for(int i=0;i<strlen(str);i++)
//     {
//         if(str[i]>=97 && str[i]<=122)
//         {
//             str[i]=str[i]-32;
//         }
//         else{
//             str[i]=str[i];
//         }
//     }
//     printf("enter string in upper case is %s",str);
// }

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//         //1
//         FILE *file;
//         char ch;
//         char fileName[100] = "test.txt";
    
//         //2
//         file = fopen(fileName,"r");
    
//         //3
//         if(file == NULL){
//             printf("File not found.");
//         }else{
//             //4
//             ch = fgetc(file);
    
//             //5
//             while(ch != EOF){
//                 printf("%c",toupper(ch));
//                 ch = fgetc(file);
//             }
//             fclose(file);
//         }
//     }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int DSA,TOC,DM,dsa,toc,dm;
//         //DRAGON
//         scanf("%d",&DSA);
//         scanf("%d",&TOC);
//         scanf("%d",&DM);
//         int sum=DSA+TOC+DM;
        
//         //SLOTH
//         scanf("%d",&dsa);
//         scanf("%d",&toc);
//         scanf("%d",&dm);
//         int total=dsa+toc+dm;
        
//         if(sum>total)
//         {
//             printf("DRAGON \n");
//         }
//         else if(sum==total)
//         {
//             if(DSA>dsa)
//             {
//                 printf("DRAGON \n");
//             }
//             else if(DSA==dsa)
//             {
//                 if(TOC>toc)
//                 {
//                     printf("DRAGON \n");
//                 }
//                 else
//                 {
//                     printf("TIE \n");
//                 }
//             }
//             else
//                 printf("SLOTH \n");
//         }
//         else 
//         {
//             printf("SLOTH \n");
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int r[10000];
//     int t,m,n,a;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int m,n;
//         scanf("%d %d",&m,&n); //no of deposits //no of coins he want
        
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",&r[j]);
//         }
//         for(int j=0;j<m;j++)
//         {
//             if(r[j]>n)
//             {
//                 printf("1\n");
//             }
//             else if(r[j]+r[j+1]>n)
//             {
//                 printf("2\n");
//             }
//             else if(r[j]+r[j+1]+r[j+2]>n)
//             {
//                 printf("3\n");
//             }
//         }
//     } 
// }


/*  C program read integers and appends sum to the end in File Handling  */

// #include <stdio.h>
// #include <stdlib.h>


// int main()
// {
//     int a,i,n,sum=0;
//     FILE *fp;

//     //Writing numbers to the file
//     fp=fopen("test1.txt","w");
//     if(fp==NULL)
//     {
//         printf("File could not open!!");
//         exit(0);
//     }

//     printf("How many numbers? ");
//     scanf("%d",&n);
//     printf("\nEnter numbers in the file:\n");

//     for(i=0;i<n;++i)
//     {
//     scanf("%d",&a);
//     putw(a,fp);
//     }
//     fclose(fp);

//     //Reading the file and doing sum
//     fp=fopen("test.txt","r");
//     if(fp==NULL)
//     {
//         printf("File could not open!!");
//         exit(0);
//     }

//     while((a=getw(fp))!=EOF)
//     sum+=a;

//     fclose(fp);

//     //Appending sum to the file
//     fp=fopen("test","a");
//     if(fp==NULL)
//     {
//         printf("File could not open!!");
//         exit(0);
//     }

//     putw(sum,fp);
//     fclose(fp);

//     //Displaying file after append
//     fp=fopen("test.txt","r");
//     if(fp==NULL)
//     {
//         printf("File could not open!!");
//         exit(0);
//     }

//     printf("\nFile after append:\n");
//     while((a=getw(fp))!=EOF)
//     {
//         printf("%d ",a);
//     }
//     printf("%d",sum);
    

//     fclose(fp);

//     return 0;

// }

/**
 * C program to copy contents of one file to another.
 */

// #include <stdio.h>
// #include <stdlib.h>


// int main()
// {
//     FILE *fptr;
//     FILE *mptr;
//     char sourcePath[100];
//     char destPath[100];

//     char ch;

//     /* 
//      * Open source file in 'r' and 
//      * destination file in 'w' mode 
//      */
//     fptr= fopen("test.txt", "r");
//     mptr= fopen("test1.txt",   "w");

//     /* fopen() return NULL if unable to open file in given mode. */
//     if (fptr == NULL || mptr == NULL)
//     {
//         /* Unable to open file hence exit */
//         printf("\nUnable to open file.\n");
//         printf("Please check if file exists and you have read/write privilege.\n");

//         exit(EXIT_FAILURE);
//     }


//     /*
//      * Copy file contents character by character.
//      */
//     ch = fgetc(fptr);
//     while (ch != EOF)
//     {
//         /* Write to destination file */
//         fputc(ch, mptr);

//         /* Read next character from source file */
//         ch = fgetc(fptr);
//     }


//     printf("\nFiles copied successfully.\n");


//     /* Finally close files to release resources */
//     fclose(fptr);
//     fclose(mptr);

//     return 0;
// }

/**
 * C program to compare two files character by character.
 */

// #include <stdio.h>
// #include <stdlib.h>

// /* Function declaration */
// int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col);


// int main()
// {
//     /* File pointer to hold reference of input file */
//     FILE * fPtr1; 
//     FILE * fPtr2;
//     char path1[100];
//     char path2[100];

//     int diff;
//     int line, col;


//     /* Input path of files to compare */
//     printf("Enter path of first file: ");
//     scanf("%s", path1);
//     printf("Enter path of second file: ");
//     scanf("%s", path2);


//     /*  Open all files to compare */
//     fPtr1 = fopen(path1, "r");
//     fPtr2 = fopen(path2, "r");

//     /* fopen() return NULL if unable to open file in given mode. */
//     if (fPtr1 == NULL || fPtr2 == NULL)
//     {
//         /* Unable to open file hence exit */
//         printf("\nUnable to open file.\n");
//         printf("Please check whether file exists and you have read privilege.\n");
//         exit(EXIT_FAILURE);
//     }


//     /* Call function to compare file */
//     diff = compareFile(fPtr1, fPtr2, &line, &col);

//     if (diff == 0)
//     {
//         printf("\nBoth files are equal.");
//     }
//     else 
//     {
//         printf("\nFiles are not equal.\n");
//         printf("Line: %d, col: %d\n", line, col);
//     }


//     /* Finally close files to release resources */
//     fclose(fPtr1);
//     fclose(fPtr2);

//     return 0;
// }


// /**
//  * Function to compare two files.
//  * Returns 0 if both files are equivalent, otherwise returns
//  * -1 and sets line and col where both file differ.
//  */
// int compareFile(FILE * fPtr1, FILE * fPtr2, int * line, int * col)
// {
//     char ch1, ch2;

//     *line = 1;
//     *col  = 0;

//     do
//     {
//         // Input character from both files
//         ch1 = fgetc(fPtr1);
//         ch2 = fgetc(fPtr2);
        
//         // Increment line 
//         if (ch1 == '\n')
//         {
//             *line += 1;
//             *col = 0;
//         }

//         // If characters are not same then return -1
//         if (ch1 != ch2)
//             return -1;

//         *col  += 1;

//     } while (ch1 != EOF && ch2 != EOF);


//     /* If both files have reached end */
//     if (ch1 == EOF && ch2 == EOF)
//         return 0;
//     else
//         return -1;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     char name[100];
//     int marks,i,n;
//     printf("no of students");
//     scanf("%d",&n);
//     FILE *fptr;
//     fptr=fopen("test.txt","w");
//     if(fptr==NULL)
//     {
//         printf("error");
//         exit(1);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter student %d information \n",i+1);
//         printf("enter name \n");
//         scanf("%s",name);
//         printf("enter marks \n");
//         scanf("%d",&marks);
//         fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
//     }
//     fclose(fptr);
// }



// #include <stdio.h>
// int main()
// {
//     int r[10000];
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int m,n;
//         scanf("%d %d",&m,&n); //no of deposits //no of coins he want
        
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",&r[j]);
//         }
//         int a;
//         for (i = 0; i < m; ++i) 
//         {
//             for (int j = i + 1; j < m; ++j) 
//             {
//                 if (r[i] < r[j]) 
//                 {
//                     a = r[i];
//                     r[i] = r[j];
//                     r[j] = a;
//                 }
//             }
//         }
//         for(int i=0;i<m;i++)
//         {
//             printf("%d",r[i]);
//         }
//         // int sum=0;
//         // for(int l=0;l<m;l++)
//         // {
//         //     sum+=r[l];
//         // }
//         // if(sum<n)
//         // {
//         //     printf("-1\n");
//         // }
//         // int s=0,c=0;
//         // for(int k=0;k<m;k++)
//         // {
//         //     s+=r[k];
            
//         //     if(s>=n)
//         //     {
//         //         printf("%d\n",c);
//         //         break;
//         //     }
//         //     c++;
//         // }
//     }
// }

// #include <stdio.h>


// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     int n;
//     int a[n];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int s=0;
//     for(int j=0;j<n;j++)
//     {
//         s+=a[j];
//     }
//     printf("%d",s);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int a,b;
//     float c,d;
// 	scanf("%d %d",&a,&b);
//     scanf("%f %f",&c,&d);
//     int sum=a+b;
//     float sums=c+d;
//     // float subs=c-d;
//     // int sub=a-b;
//     if(c>d)
//     {
//         float subs=c-d;
//     }
//     else
//     {
//         float subs=d-c;
//     }
//     if(a>b)
//     {
//         int sub=a-b;
//     }
//     else
//     {
//         int sub=b-a;
//     }
//     printf("%d %d\n",sum,sub);
//     printf("%0.1f %0.1f",sums,subs);
    
//     return 0;
// }


// #include<stdio.h>  
// int armstrong(int);  
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     int b=armstrong(x);
// }  
// int armstrong(int n)
// {
//     int temp,r,sum; 
//     temp=n;    
//     while(n>0)    
//     {    
//         r=n%10;    
//         sum=sum+(r*r*r);    
//         n=n/10;    
//     }    
//     if(temp==sum)
//     {
//         printf("armstrong  number ");
//     }
//     else    
//         printf("not armstrong number");    
//     return 0;  
// }   

// archieee
// 01234567

// #include <stdio.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>




// int main()
// {
//     char str[1000];
//     int l,z;
//     int m,n;
//     // printf("enter maximum limit(n)");
//     // scanf("%d",&n);
	
//     printf("Input the string : ");
//     gets(str);	

//     /* Checks each character of string*/
//     int i,j,c;
//     while(str[i]!='\0')
//     {
//         c++;
//         for(int j=0;j<4;j++)
//         {
//             if(str[j]>=65 && str[j]<=90)
//             {
//                 l=1;
//             }
//             else
//             {
//                 l=0;
//                 break;
//             }
//         }
//         for(int o=strlen(str)-4;o<strlen(str);o++)
//         {
//             if(str[o]>=48 && str[o]<=57)
//             {
//                 z=1;
//             }
//             else{
//                 z=0;
//                 break;
//                 }
//         }
//     }    
//     if(l==1 && z==1)
//     {
//         printf("valid");
//     }
//     else if(l==0 || z==0)
//     {
//         printf("invalid");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *fptr;
//     fptr=fopen("abc.txt","w");
//     char str[100];
//     printf("enter string");
//     gets(str);
//     // fgets(str,100,fptr);
//     char ch='a';
//     if(fptr==NULL)
//     {
//         printf("error");
//         exit(1);
//     }
//     // printf("succesfully added");
//     // printf("%s",str);
//     fputs(str,fptr);
//     while(!feof(fptr))
//     {
//         ch=fgetc(fptr);
//         printf("%c",ch);
//     }
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//     int n1, n2, n3;
// };

// int main()
// {
//     int n;
//     struct threeNum num;
//    FILE *fptr;

//     if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
//         printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//         exit(1);
//     }

//     for(n = 1; n < 5; ++n)
//     {
//         num.n1 = n;
//         num.n2 = 5*n;
//         num.n3 = 5*n + 1;
//         fwrite(&num, sizeof(struct threeNum), 1, fptr); 
//     }
//     fclose(fptr); 
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int m,n,i,j,k;
//     printf("Enter minimum and maximum characters respectively");
//     scanf("%d%d",&m,&n);
//     if((n-m)<8)
//     {
//         printf("Employee id should be of at least 8 characters");
//     }
//     else
//     {
//         for(i=0,j=65;i<4;i++,j++)
//         {
//             for(k=0;k<9;k++)
//             {
//                 printf("%c%c%c%c%d%d%d%d\n",j,j,j,j,k,k,k,k);
//             }
//         }
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int m,n,o,i,j;
//     printf("Enter minimum and maximum characters respectively");
//     scanf("%d%d",&m,&n);
//     if((n-m)<8)
//     {
//         printf("Employee id should be of at least 8 characters");
//     }
//     else
//     {
//         char c[n-m];
//         printf("How many employees?");
//         scanf("%d",&o);
//         for(i=0;i<o;i++)
//         {
//             printf("Enter employee id");
//             scanf("%s",c);
//             int s=strlen(c);
//             int t=s-8;
//             if((c[0]>='A' && c[0]<='Z')&&(c[1]>='A' && c[1]<='Z')&&(c[2]>='A' && c[2]<='Z')&&(c[3]>='A' && c[3]<='Z'))
//             {
//                 if((c[-1]>=0 && c[-1]<=9)&&(c[-2]>=0 && c[-2]<=9)&&(c[-3]>=0 && c[-3]<=9)&&(c[-4]>=0 && c[-4]<=9))
//                 {
//                     for(j=0;j<=t;j++)
//                     {
//                         if(c[j+4]!='@' && c[j+4]!='_' && c[j+4]!='&' && c[j+4]!='#')
//                         {
//                             printf("Valid\n");
//                             break;
//                         }
//                         else
//                         {
//                             printf("Invalid\n");
//                             break;
//                         }
//                     }
//                 }
//                 else
//                 {
//                     printf("Invalid");
//                 }
//             }
//             else
//             {
//                 printf("Invalid");
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     float arr[5]={12.510,0,13.5,90.5,0.5};
//     float *ptr1=&arr[0];
//     float *ptr2=ptr1+3;
//     printf("%f \n",*ptr2);
//     printf("%f \n",*ptr2-*ptr1);
//     return 0;
// }

// #include <stdio.h>
// const int=2;
// struct bank{
//     char name[50];
//     int DEBIT_CARD_NUMBER;
//     int CVV_CODE;
//     int USER_PIN;
//     int MOBILE_NO;
//     int ACCOUNT_BALANCE;
// };
// int display(struct bank b1[]);
// int main()
// {
//     int n;
//     printf("enter how many employees");
//     scanf("%d",&n);
//     struct bank b[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter name");
//         scanf("%s",b[i].name);
//         printf("enter DEBIT CARD NUMBER");
//         scanf("%d",&b[i].DEBIT_CARD_NUMBER);
//         printf("enter CVV_CODE");
//         scanf("%d",&b[i].CVV_CODE);
//         printf("enter USER_PIN");
//         scanf("%d",&b[i].USER_PIN);
//         printf("enter MOBILE_NO");
//         scanf("%d",&b[i].MOBILE_NO);
//         printf("enter ACCOUNT_BALANCE");
//         scanf("%d",&b[i].ACCOUNT_BALANCE);
//     }
//     display(b);
//     return 0;
// }
// int display(struct bank b1[])
// {
//     for(int j=0;j<n;j++)
//     {
//         if(b1[j].ACCOUNT_BALANCE>=500)
//         {
//             printf("login successful");
//             printf("%d",b1[j].CVV_CODE);


//         }
//         else
//             printf("not able to login");
//     }
// }

// #include <stdio.h>
// struct student {
//     char name[50];
//     int age;
// };

// // function prototype
// void display(struct student s);

// int main() {
//     struct student s1;

//     printf("Enter name: ");

//    // read string input from the user until \n is entered
//    // \n is discarded
//     scanf("%[^\n]%*c", s1.name);

//     printf("Enter age: ");
//     scanf("%d", &s1.age);

//    display(s1); // passing struct as an argument

//     return 0;
// }

// void display(struct student s) {
//     printf("\nDisplaying information\n");
//     printf("Name: %s", s.name);
//     printf("\nAge: %d", s.age);
// }


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// const int n = 5;
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
//         fflush(stdin);
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
//         printf("%d\t%s\t%d\t%dYears\tRs. %d\n", emps[i].employee_id,emps[i].employee_name, emps[i].designation, emps[i].years_of_experience,emps[i].salary);
//     }
//     printf("\n\n");
//     addBonus();
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("enter string");
//     char str[100];
//     gets(str);
//     int temp;
//     int length=strlen(str);
//     for (int i = length - 1; i >= 0; i--) {
//         if(i%2!=0)
//         {
//             if (str[i] == ' ') 
//             {
//                 str[i] = '\0';
//                 // Start from next character
//                 printf("%s ", &(str[i]) + 1);
//             }
//         }
        
//     }
//     // printing the last word
//     printf("%s", str);
// }


// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//   	char str[100];
//   	int i, j, len, startIndex, endIndex;
 
//   	printf("\n Please Enter any String :  ");
//   	gets(str);
  	
//   	len = strlen(str);
//     endIndex = len - 1;
  	
//   	printf("\n *****  Given String in Reverse Order  ***** \n"); 	   	
//     for(i = len - 1; i >= 0; i--)
// 	{
// 		if(str[i] == ' ' || i == 0)
// 		{
// 			if(i == 0)
// 			{
// 				startIndex = 0;
// 			}
// 			else
// 			{
// 				startIndex = i + 1;
// 			}
// 			for(j = startIndex; j <= endIndex; j++)
// 			{
// 				printf("%c", str[j]);
// 			}
// 			endIndex = i - 1;
// 			printf(" ");				
// 		} 
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int armstrong(int);
// int main()
// {
//     int a,temp;
//     printf("enter no");
//     scanf("%d",&a);
//     armstrong(a);
// }
// int armstrong(int n)
// {
//     int temp;
//     int r,rev=0;
//     int s=0;
//     temp=n;
//     while(n>0)
//     {
//         r=n%10;
//         s=s+(r*r*r);
//         n=n/10;
//     }
//     if(temp==s)    
//         printf("armstrong  number ");    
//     else    
//         printf("not armstrong number"); 
// ]

// archie eihcra
// hi my name is   is name my hi
// madam madam


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t,n,k;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         scanf("%d %d",&n,&k);
//         char s[n];
//         scanf("%s",s);
//         int m;
//         // gets(s);
//         int l=strlen(s);
//         if(strlen(s)%2==0)
//         {
//             for(int i=0;i<l/2;i++)
//             {
//                 if(s[i]!=s[l-i-1])
//                 {
//                     m++;
//                 }
//             }
//             if(k<m)
//             {
//                 printf("no \n");
//             }
//             else if(k==m)
//             {
//                 printf("yes \n");
//             }
//             else if(k>m)
//             {
//                 if((k-m)%2==0)
//                 {
//                     printf("yes \n");
//                 }
//                 else
//                     printf("no \n");
//                 }
                
//             }
//         }
//         else
//         {
//             for(int i=0;i<l/2;i++)
//             {
//                 if(s[i]!=s[l-i-1])
//                 {
//                     m++;
//                 }
//             }
//             if(m<=k)
//             {
//                 printf("yes \n");
//             }
//             else
//             {
//                 printf("no \n");
//             }
//         }

//     }
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         scanf("%d",&n);
//         float f=(0.143*n);
//         float m=pow(f,n);
//         int d=floor(m);
//         // printf("%d",d);
//         if(m-d<0.5)
//         {
//             printf("%d",d);
//         }
//         else
//         {
//             printf("%d",d+1);
//         }
//     }
    
// }




// Print ⌊x⌋ if x−⌊x⌋<0.5
// Otherwise, print ⌊x⌋+1
// where ⌊x⌋ denotes the floor of x.


#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        char str[n];
        scanf("%s",str);
        int c=0;
        for(int j=0;j<n/2;j++)
        {
            if(str[j]!=str[n-j-1])
            {
                c++;
            }
        }
        if(c==k)
        {
            printf("Case # %d :0",i+1);
        }
        else if(c>k)
        {
            printf("Case #%d : %d",i+1,c-k);
        }
        else
        {
            printf("Case #%d : %d",i+1,k-c);
        }
    }
}