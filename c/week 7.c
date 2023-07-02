// q1
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter string:\n");
//     gets(str);
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
//         {
//             for (int j = i; j < strlen(str); j++)
//             {
//                 str[j] = str[j+1];
//             }
//             i++;
//         }
//     }
//     printf("%s", str);
// }

// // q3
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="my name is"
//     printf("Enter string:\n");
//     gets(str);
//     int c=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i]!='')
//         {
//             c=c+1;
//         }
//     }
//     printf("%d",c);
// }

// // q4
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int c=0,v=0;
//     char str[500];
//     printf("enter string \n");
//     gets(str);
//     for(int i=0;i<strlen(str);i++)
//     {
//         if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
//         {
//             if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')

//             {
//                 c++;
//             }
//             else
//             {
//                 v++;
//             }
//         }
//     }
//     printf("vowels count is %d \n",c);
//     printf("consonants count is %d",v);
//     return 0;
// }

// /* q2
//  * C program to find the length of a string without using the
//  * built-in function
//  */
// // #include <stdio.h>
 
// // void main()
// // {
// //     char string[50];
// //     int i, length = 0;
 
// //     printf("Enter a string \n");
// //     gets(string);
// //     /*  keep going through each character of the string till its end */
// //     for (i = 0; string[i] != '\0'; i++)
// //     {
// //         length++;
// //     }
// //     printf("The length of a string is the number of characters in it \n");
// //     printf("So, the length of %s = %d\n", string, length);
// // }

// // q5 a
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[1000],s2[1000];  
//     int i,c=0;
 
//     printf("Enter  string1: ");
//     gets(s1);
//     printf("Enter  string2: ");
//     gets(s2);
//     if(strlen(s1)==strlen(s2))
//     {
//     	for(i=0;s2[i]!='\0';i++)  
//         {
//         	if(s1[i]==s2[i])
//         	 c++;
//  	    }
//  	    if(c==i)
//           printf("strings are equal");
//         else
//           printf("strings are not equal");
//     }
//     else
//      printf("strings are not equal");
//     return 0;
// }

// // q5 c
// #include<stdio.h>
// #include<string.h>
// main(){
//    int i,j,n;
//    char str[100][100],s[100];
//    printf("Enter number of names :\n");
//    scanf("%d",&n);
//    printf("Enter names in any order:\n");
//    for(i=0;i<n;i++){
//       scanf("%s",str[i]);
//    }
//    for(i=0;i<n;i++){
//       for(j=i+1;j<n;j++){
//          if(strcmp(str[i],str[j])>0){
//             strcpy(s,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],s);
//          }
//       }
//    }
//    printf("\nThe sorted order of names are:\n");
//    for(i=0;i<n;i++){
//       printf("%s\n",str[i]);
//    }

// #include <stdio.h>
// void main()
// {
//     char str[100], str2[100];
//     int p, l, c = 0;
//     printf("Enter the string : ");
//     fgets(str, sizeof str, stdin);
//     printf("Enter the position to start extraction :");
//     scanf("%d", &p);
//     printf("Enter the length of substring :");
//     scanf("%d", &l);
//     while (c < l)
//     {
//     str2[c] = str[p+c-1];
//     c++;
//     }
//     str2[c] = '\0';
//     printf("The substring retrieve from the string is : %s\n\n", str2);
//     return 0;
// }

// #include<stdio.h>
 
// int main()
// {
//     char str[80], search[10];
//     int count1 = 0, count2 = 0, i, j, flag;
 
//     printf("Enter a string:");
//     gets(str);
//     printf("Enter search substring:");
//     gets(search);
//     while (str[count1] != '\0')
//         count1++;
//     while (search[count2] != '\0')
//         count2++;
//     for (i = 0; i <= count1 - count2; i++)
//     {
//         for (j = i; j < i + count2; j++)
//         {
//             flag = 1;
//             if (str[j] != search[j - i])
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1)
//             break;
//     }
//     if (flag == 1)
//         printf("SEARCH SUCCESSFUL!");
//     else
//         printf("SEARCH UNSUCCESSFUL!");
 
//     return 0;
// }