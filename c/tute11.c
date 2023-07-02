// #include <stdio.h>
// #include <stdlib.h>
  
// int main()
// {
//    char str[1000];
//    FILE *fptr;
//    char fname[20]="test.txt";

//     printf("\n\n Create a file (test.txt) and input text :\n");
// 	printf("----------------------------------------------\n"); 
//    fptr=fopen(fname,"w");	
//    if(fptr==NULL)
//    {
//       printf(" Error in opening file!");
//       exit(1);
//    }
//    printf(" Input a sentence for the file : ");
//    fgets(str, sizeof str, stdin);
//    fprintf(fptr,"%s",str);
//    fclose(fptr);
//    printf("\n The file %s created successfully...!!\n\n",fname);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int reverse(char x[]);
// int main()
// {
//     char a[50];
//     printf("enter a string \n");
//     gets(a);
//     reverse(a);
//     printf("after reversing \n%s",a);

// }
// int reverse(char x[])
// {
//     int s;
//     s=strlen(x);
//     for(int i=0;i<s/2;i++)
//     {
//         int m;
//         m=x[i];
//         x[i]=x[s-i-1];
//         x[s-i-1]=m;
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int palindrome(char x[]);
// int main()
// {
//     char a[50];
//     printf("enter a string \n");
//     gets(a);
//     palindrome(a);

// }
// int palindrome(char x[])
// {
//     int s,m;
//     s=strlen(x);
//     for(int i=0;i<s/2;i++)
//     {
//         if(x[i]!=x[s-i-1])
//             m=1;
            

//     }
//     if(m==0)
//     {
//         printf("1");
//     }
//     else
//     {
//         printf("0");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int concate(char x[],char y[]);
// int main()
// {
//     char a[50],b[50];
//     printf("enter first string");
//     gets(a);
//     printf("enter another string");
//     gets(b);
//     concate(a,b);
// }  
// int concate(char x[],char y[])
// {
//     printf("%s",strcat(x,y));
// }

// // // #include <stdio.h>
// // int main()
// // {
// //     // int arr[] = {12, 13, 14, 15, 16};
// //     // printf("%d, %d, %d\n", sizeof(arr), sizeof(*arr), sizeof(arr[0]));
// //     // return 0;
// //     int i, a[] = {2, 4, 6, 8, 10};
// //     change(a, 5);
// //     for(i=0; i&lt;=4; i++)

// //     printf(&quot;%d, &quot;, a[i]);
// //     return 0;
// //     }
// //     void change(int *b, int n)
// //     {
// //     int i;
// //     for(i=0; i&lt;n; i++)
// //     *(b+1) = *(b+i)+5; 
// // }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(void)
// {
// // WAP to reverse the order of 5 given strings
//     char *names[] = {"Anand", "Naureen", "Banjot", "Wahid", "Sheena"};
//     printf("STRINGS IN ORIGINAL ORDER - \n%s\n%s\n%s\n%s\n%s\n", *(names + 0), *(names+ 1), *(names + 2), *(names + 3), *(names + 4));
//     for (int i = 0; i < 5 / 2; i++)
//     {
//         char *temp = names[i];
//         names[i] = names[4 - i];
//         names[4 - i] = temp;
//     }
//     printf("STRINGS IN NEW ORDER -\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\n", names[i]);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int r1, r2, c1, c2;
//     printf("ENTER ROW SIZE OF FIRST MATRIX: ");
//     scanf("%d", &r1);
//     printf("ENTER COLUMN SIZE OF FIRST MATRIX: ");
//     scanf("%d", &c1);
//     printf("ENTER ROW SIZE OF SECOND MATRIX: ");
//     scanf("%d", &r2);
//     printf("ENTER COLUMN SIZE OF SECOND MATRIX: ");
//     scanf("%d", &c2);
//     if (r1 < 1 || r2 < 1 || c1 < 1 || c2 < 1)
//     {
//         printf("SIZE OF MATRIX CAN'T BE LESS THAN ONE");
//         return 1;
//     }
//     if (c1 != r2)
//     {
//         printf("ONLY MATRICES OF HAVING M = N CAN BE MULTIPLIED! THAT IS SIZE IS SAME!\n");
//         return 2;
//     }
//     int *m1[r1];
//     int *m2[r2];
//     int *result[r1];
//     for (int r = 0; r < r1; r++)
//     {
//         *(result + r) = malloc(sizeof(int) * c2);
//         for (int c = 0; c < c2; c++)
//         {
//             *(*(result + r) + c) = 0;
//         }
//     }
//     printf("enter matrix 1 elements:\n");
//     for (int i = 0; i < r1; i++)
//     {
//         *(m1 + i) = malloc(sizeof(int) * c1);
//         for (int j = 0; j < c1; j++)
//         {
//             printf("matrix1[%d][%d] = ", i, j);
//             scanf("%d", (*(m1 + i) + j));
//         }
//     }
//     printf("enter matrix 2 elements :\n");
//     for (int i = 0; i < r2; i++)
//     {
//         *(m2 + i) = malloc(sizeof(int) * c2);
//         for (int j = 0; j < c2; j++)
//         {
//         printf("matrix2[%d][%d] = ", i, j);
//         scanf("%d", (*(m2 + i) + j));
//         }
//     }
//     printf("RESULTANT MATRIX: \n");
//     for (int k = 0; k < r1; k++)
//     {
//         for (int i = 0; i < c2; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 *(*(result + k) + i) += *(*(m1 + k) + j) * *(*(m2 + j) + i);
//             }
//             printf("Result[%d][%d] = %d \n", k, i, *(*(result + k) + i));
//         }       
//         free(*(result + k));
//     }
//     for (int i = 0; i < r1; i++)
//     {
//         free(*(m1 + i));
//     }
//     for (int i = 0; i < r2; i++)
//     {
//         free(*(m2 + i));
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Function Prototypes
int strlength(char *str);
char *reverse(char *str);
char *concatenate(char *str1, char *str2);
char *copy(char *str);
int streql(char *str1, char *str2);
int main(void)
{
    char *str1 = malloc(50);
    printf("ENTER STRING 1 : ");
    gets(str1);
    char *str2 = malloc(50);
    printf("ENTER STRING 2 : ");
    gets(str2);
    char ch;
    while (1)
    {
        printf("ENTER CASE TYPE : ");
        fflush(stdin);
        scanf("%c", &ch);
        switch (ch)
        {
        case 'L':
            printf("LENGTH OF STRING 1- %i\n", strlength(str1));
            printf("LENGTH OF STRING 2- %i\n", strlength(str2));
            break;
        case 'R':
            char *rvrsal = reverse(str1);
            printf("REVERSED STRING 1 : %s\n", rvrsal);
            free(rvrsal);
            rvrsal = reverse(str2);
            printf("REVERSED STRING 2 : %s\n", rvrsal);
            free(rvrsal);
            break;
        case 'C':
            char *joint = concatenate(str1, str2);
            printf("CONCATENATED STRING : %s\n", joint);
            free(joint);
            break;
        case 'V':
            int choice;
            fflush(stdin);
            printf("WHICH STRING DO YOU WANT TO COPY TO A NEW STRING str3 ?\nENTER 1 FOR str1 OR 2 FOR str2 : \n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                char *str3 = copy(str1);
                printf("COPIED STRING str3 : %s\n", str3);
                free(str3);
            }
            else if (choice == 2)
            {
                char *str3 = copy(str2);
                printf("COPIED STRING str3 : %s\n", str3);
                free(str3);
            }
            else
            {
printf("INVALID INPUT, A KID COULD HAVE FOLLOWED THAT SIMPLE AN INSTRUCTION!\n");
            }
            break;
        case '=':
            printf("ARE THE STRINGS EQUAL?\n%s\n", streql(str1, str2) ? "YES" : "NO");
            break;
        default:
            printf("INVALID INPUT!\n");
        }
        char cont;
        fflush(stdin);
        printf("DO YOU WANT TO CONTINUE RUNNING PROGRAM?\n-> ");
        scanf("%c", &cont);
        cont = tolower(cont);
        if (!(cont == 'y'))
            break;
    }
    free(str1);
    free(str2);
}
int strlength(char *str)
{
    int length = 0;
    for (char *ptr = str; *ptr != '\0'; ptr++)
    {
        length++;
    }
    return length;
}
char *reverse(char *str)
{
    int len = strlength(str);
    char *back = malloc(len);
    for (int i = 0; i < len; i++)
    {
        *(back + i) = *(str + len - 1 - i);
    }
    *(back + len) = '\0';
    return back;
}
char *concatenate(char *str1, char *str2)
{
    int len1 = strlength(str1);
    int len2 = strlength(str2);
    char *joined = malloc(len1 + len2 - 1);
    for (int i = 0; i <= len1 + len2 - 1; i++)
    {
        if (i > len1 - 1)
            *(joined + i) = *(str2 + i - len1);
        else
            *(joined + i) = *(str1 + i);
    }
    *(joined + len1 + len2) = '\0';
    return joined;
}
char *copy(char *str)
{
    char *temp = malloc(strlength(str));
    int i = 0;
    for (char *ptr = str; *ptr != '\0'; ptr++)
    {
        temp[i] = *ptr;
        i++;
    }
    return temp;
}
int streql(char *str1, char *str2)
{
    int len1 = strlength(str1);
    int len2 = strlength(str2);
    if (len1 != len2)
        return 0;
    for (int i = 0; i < len1; i++)
    {
        if (!(*(str1 + i) == *(str2 + i)))
            return 0;
    }
    return 1;
}