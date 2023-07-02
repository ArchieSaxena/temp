// #include <stdio.h>
// int main(){
//     printf("hello \n");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[50];
//     int key,size;
//     printf("enter size of array");
//     scanf("%d",&size);
//     for(int i=1;i<=size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter key to be searched");
//     scanf("%d",&key);
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//         printf("found");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// const int CITY=2;
// const int WEEK=7;

// int main()
// {
//    int temperature[CITY][WEEK];
//    int i ,j;

//    /*Take input from user*/
//    for(i=0;i<CITY;i++)
//    {
//        for(j=0;j<WEEK;j++)
//        {
//            printf("City[%d], Day[%d]: ", i+1, j+1);
//            scanf("%d", &temperature[i][j] );
//        }
//        printf("\n");
//    }

//    /*Display output*/
//    printf("Displaying Values:\n\n");

//    for(i=0;i<CITY;i++)
//    {
//        for(j=0;j<WEEK;j++)
//        {
//            printf("City[%d], Day[%d]=%d\n", i+1, j+1, temperature[i][j]);
//        }
//        printf("\n");g
//    }

//    return 0;
// }



// #include<stdio.h>    
// #include<stdlib.h>  
// int main()
// {  
//     int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;      
//     printf("enter the number of row=");    
//     scanf("%d",&r);    
//     printf("enter the number of column=");    
//     scanf("%d",&c);    
//     printf("enter the first matrix element=\n");    
//     for(i=0;i<r;i++)    
//     {    
//         for(j=0;j<c;j++)    
//         {    
//             scanf("%d",&a[i][j]);    
//         }    
//     }    
//     printf("enter the second matrix element=\n");    
//     for(i=0;i<r;i++)    
//     {    
//         for(j=0;j<c;j++)    
//         {    
//             scanf("%d",&b[i][j]);    
//         }    
//     }    
        
//     printf("multiply of the matrix=\n");    
//     for(i=0;i<r;i++)    
//     {    
//         for(j=0;j<c;j++)    
//         {    
//             mul[i][j]=0;    
//             for(k=0;k<c;k++)    
//             {    
//                 mul[i][j]+=a[i][k]*b[k][j];    
//             }    
//         }    
//     }    
//     //for printing result    
//     for(i=0;i<r;i++)    
//     {    
//         for(j=0;j<c;j++)    
//         {       
//             printf("%d\t",mul[i][j]);    
//         }    
//         printf("\n");    
//     }    
//     return 0;  
// }  

// #include <stdio.h>
// int main()
// {
//     int mat1[10][10];
//     int rows,columns,i,j;
//     printf("enter rows and columns");
//     scanf("%d %d",&rows,&columns);
//     printf("enter elements of matrix 1");
//     for(i=0;i<rows;i++)
//     {
//         for(j=0;j<columns;j++)
//         scanf("%d",&mat1[i][j]);
//     }
//     for(i=0;i<rows;i++)
//     {
//         for(j=0;j<columns;j++)
//         {
//             printf("\n");
//             for(j=0;j<columns;j++)
//             if(j>i)
//             {
//                 printf("%d\t", mat1[i][j]);
//             }

//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int i,j,k;                         //variables for nested for loops
// int main()
// {
// 	int arr[2][3][3];              //array declaration
// 	printf("enter the values in the array: \n");
// 	for(i=1;i<=2;i++)              //represents block
// 	{
// 		for(j=1;j<=3;j++)          //represents rows
// 		{
// 			for(k=1;k<=3;k++)      //represents columns
// 			{
// 				printf("the value at arr[%d][%d][%d]: ",i,j,k);
// 				scanf("%d",&arr[i][j][k]);
// 			}
// 		}
// 	}
// 	printf("printing the values in array: \n");
// 	for(i=1;i<=2;i++)
// 	{
// 		for(j=1;j<=3;j++)
// 		{
// 			for(k=1;k<=3;k++)
// 			{
// 				printf("%d ",arr[i][j][k]);
// 				if(k==3)
// 				{
// 					printf("\n");
// 				}
// 			}
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// #include<stdio.h>
//  int check_prime(int);
//  int main()
// {
//    int n, result;
//    printf("Enter an integer to check whether it is prime or not.\n");
//    scanf("%d",&n);
//     result = check_prime(n);
//     if ( result == 1 )
//       printf("%d is prime\n", n);
//    else
//       printf("%d is not prime\n", n);
//     return 0;
// }
// int check_prime(int a)
// {
//    int c;
//     for (c=2;c<=a-1;c++)
//    { 
//       if ( a%c == 0 )
//      return 0;
//    }
//    return 1;
// }

// #include <stdio.h>
// int main()
// {
//     int a[50],n,c=0,m=0,g=0;
//     printf("enter size of array");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=1;i<=n;i++)
//     {
//         if(a[i]>0)
//         {
//             c=c+1;
//         }
//         else if(a[i]<0)
//         {
//             m=m+1;
//         }
//         else
//         {
//             g=g+1;
//         }
//     }

//     printf("positive nos are %d \n",c);
//     printf("negative nos are %d",m);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,b,square();
//     printf("eneter no");
//     scanf("%d",&n);
//     b=square(n);
//     printf("hemce square of %d is %d",n,b);
// }
// int square(int m)
// {
//     int c;
//     c=m*m;
//     return(c);
// }

// #include <stdio.h>
// int main()
// {
//     float square ( float ) ;
//     float a, b ;
//     printf ( "\nEnter any number " ) ;
//     scanf ( "%f", &a ) ;
//     b = square ( a ) ;
//     printf ( "\nSquare of %f is %f", a, b ) ;
// }
// float square ( float x )
// {
//     float y ;
//     y = x * x ;
//     return ( y ) ;
// }

// #include <stdio.h>

// // An example function that takes two parameters 'x' and 'y'
// // as input and returns max of two input numbers
// int max(int x, int y)
// {
// 	if (x > y)
// 	return x;
// 	else
// 	return y;
// }

// // main function that doesn't receive any parameter and
// // returns integer.
// int main(void)
// {
// 	int a = 10, b = 20;

// 	// Calling above function to find max of 'a' and 'b'
// 	int m = max(a, b);

// 	printf("m is %d", m);
// 	return 0;
// }

// smallest element

// #include <stdio.h>    
     
// int main()    
// {    
//     //Initialize array     
//     int arr[] = {25, 11, 7, 75, 56};      
        
//     //Calculate length of array arr    
//     int length = sizeof(arr)/sizeof(arr[0]);    
        
//     //Initialize min with first element of array.    
//     int min = arr[0];    
        
//     //Loop through the array    
//     for (int i = 0; i < length; i++) {     
//         //Compare elements of array with min    
//        if(arr[i] < min)    
//            min = arr[i];    
//     }      
//     printf("Smallest element present in given array: %d\n", min);    
//     return 0;    
// }  

// highest elemet

// #include <stdio.h>
// int main() {
//   int n;
//   double arr[100];
//   printf("Enter the number of elements (1 to 100): ");
//   scanf("%d", &n);

//   for (int i = 0; i < n; ++i) {
//     printf("Enter number%d: ", i + 1);
//     scanf("%lf", &arr[i]);
//   }

//   // storing the largest number to arr[0]
//   for (int i = 1; i < n; ++i) {
//     if (arr[0] < arr[i]) {
//       arr[0] = arr[i];
//     }
//   }

//   printf("Largest element = %.2lf", arr[0]);

//   return 0;
// }

// #include <stdio.h>
// int main() {
//    char line[150];
   
//    printf("Enter a string: ");
//    fgets(line, sizeof(line), stdin); // take input


//    for (int i = 0, j; line[i] != '\0'; ++i) {

//       // enter the loop if the character is not an alphabet
//       // and not the null character
//       while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
//          for (j = i; line[j] != '\0'; ++j) {

//             // if jth element of line is not an alphabet,
//             // assign the value of (j+1)th element to the jth element
//             line[j] = line[j + 1];
//          }
//          line[j] = '\0';
//       }
//    }
//    printf("Output String: ");
//    puts(line);
//    return 0;
// }


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
//             i--;
//         }
//     }
//     printf("%s", str);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];;
//     printf("Enter string:\n");
//     gets(str);
//     int c=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] != ' ')
//         {
//             c=c+1;
//         }
//     }
//     printf("%d",c);
// }

// #include <stdio.h>  
// #include <string.h>  
   
// int main()  
// {  
//     char string[] = "The best of both worlds";  
//     int count = 0;  
      
//     //Counts each character except space  
//     for(int i = 0; i < strlen(string); i++) {  
//         if(string[i] != ' ')  
//             count++;  
//     }  
      
//     //Displays the total number of characters present in the given string  
//     printf("Total number of characters in a string: %d", count);  
   
//     return 0;  
// } 

// #include <stdio.h>
// int main() {
//     char line[150];
//     int vowels, consonant, digit, space;

//     vowels = consonant = digit = space = 0;

//     printf("Enter a line of string: ");
//     fgets(line, sizeof(line), stdin);

//     for (int i = 0; line[i] != '\0'; ++i) {
//         if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
//             line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
//             line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
//             line[i] == 'U') {
//             ++vowels;
//         } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
//             ++consonant;
//         } else if (line[i] >= '0' && line[i] <= '9') {
//             ++digit;
//         } else if (line[i] == ' ') {
//             ++space;
//         }
//     }

//     printf("Vowels: %d", vowels);
//     printf("\nConsonants: %d", consonant);
//     printf("\nDigits: %d", digit);
//     printf("\nWhite spaces: %d", space);
//     return 0;
// }

// #include <stdio.h>  
// #include <string.h>  
   
// int main()  
// {  
//     char string[50];
//     printf("enter string");
//     gets(string); 
//     int count = 0;  
      
//     //Counts each character except space  
//     for(int i = 0; i < strlen(string); i++) {  
//         if(string[i] != ' ')  
//             count++;  
//     }  
      
//     //Displays the total number of characters present in the given string  
//     printf("Total number of characters in a string: %d", count);  
   
//     return 0;  
// }  


// #include<stdio.h>
// #include<stdlib.h>
// int rd()
// {
// 	int rem;
// 	A:rem=rand()%7;
// 	if(rem==0)
// 		goto A;
// 	else
// 		return rem;
// }
// void displaychart(int curp,char player[4])
// {	int i,j,t,c,sft=0,diceres,pos1,pos2;


// 		if(curp==100)
// 		{
// 			printf("Congratulations!!!!!! \n\nPlayer %s wins\n",player);
// 			scanf("%*s");
// 			exit(0);
// 		}

// 	for(i=10;i>0;i--)
// 	{
// 		t=i-1;
// 		if((sft%2)==0)
// 		{
// 			c=0;
// 			for(j=10;j>=1;j--)
// 			{
// 				diceres=(i*j)+(t*c++);

// 				if(curp==diceres)
// 					printf("%s\t",player);
// 				else
// 				printf("%d\t",diceres);

// 			}
// 			sft++;
// 		}
// 		else
// 		{
// 			c=9;
// 			for(j=1;j<=10;j++)
// 			{
// 				diceres=(i*j)+(t*c--);

// 				if(curp==diceres)
// 					printf("%s\t",player);
// 				else
// 					printf("%d\t",diceres);
// 			}


// 			sft++;
// 		}
// 		printf("\n\n");
// 	}



// 	printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
// }
// void main()
// {
// 	int i,dice,cur_pos1=0,cur_pos2=0;
// 	char ch;
// 	while(1)
// 	{
// 		printf("Snakes: | 25 to 9  | 65 to 40 | 99 to 1  |\nLadder: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
// 		printf("Choose your option\n");
// 		printf("[1] Player 1 plays\n");
// 		printf("[2] Player 2 plays\n");
// 		printf("[3] Exit\n");
// 		scanf("%s",&ch);

// 		switch(ch)
// 		{

// 			case '1':dice=rd();
//                     system("cls");
//                     printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
//                     printf("\t\t\t    Snakes And Ladders\n");
//                     printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
// 					cur_pos1=dice+cur_pos1;
// 					if(cur_pos1<101){
// 						if(cur_pos1==99)
// 						{
// 						displaychart(1,"-P1-");//snake
// 						}
// 						if(cur_pos1==65)
// 						{
// 						displaychart(40,"-P1-");//snake
// 						}
// 						if(cur_pos1==25)
// 						{
// 						displaychart(9,"-P1-");//snake
// 						}
// 						if(cur_pos1==70)
// 						{
// 						displaychart(93,"-P1-");//ladder
// 						}
// 						if(cur_pos1==60)
// 						{
// 						displaychart(83,"-P1-");//ladder
// 						}
// 						if(cur_pos1==13)
// 						{
// 						displaychart(42,"-P1-");//ladder
// 						}
// 						else{
// 							displaychart(cur_pos1,"-P1-");
// 						}
//                         printf("\t\t\t\tDice = %d\n",dice);
//                         printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
// 					}
// 					else{
// 						cur_pos1=cur_pos1-dice;
// 						printf("Range exceeded of Player 1.\n");
// 						displaychart(cur_pos1,"-P1-");
// 					}
// 					printf("Player 2 position is %d\n\n",cur_pos2);

// 				break;
// 			case '2':dice=rd();
//                     system("cls");
//                     printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
//                     printf("\t\t\t    Snakes And Ladders\n");
//                     printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
// 					cur_pos2=dice+cur_pos2;
// 					if(cur_pos2<101){
// 						if(cur_pos2==99)	//snake
// 						{
// 						displaychart(1,"$-P2-");
// 						}
// 						if(cur_pos2==65)	//snake
// 						{
// 						displaychart(40,"-P2-");
// 						}
// 						if(cur_pos2==25)	//snake
// 						{
// 						displaychart(9,"-P2-");
// 						}
// 						if(cur_pos2==70)	//ladder
// 						{
// 						displaychart(93,"-P2-");
// 						}
// 						if(cur_pos2==60)	//ladder
// 						{
// 						displaychart(83,"-P2-");
// 						}
// 						if(cur_pos2==13) 	//ladder
// 						{
// 						displaychart(42,"-P2-");
// 						}
// 						else{
// 							displaychart(cur_pos2,"-P2-");
// 						}
// 						printf("\t\t\t\tDice = %d\n",dice);
// 						printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
// 					}

// 					else{
// 						cur_pos2=cur_pos2-dice;
// 						printf("Range exceeded of Player 2.\n");
// 						displaychart(cur_pos2,"-P2-");
// 					}
// 					printf("Player 1 position is %d\n\n",cur_pos1);
// 				break;
// 			case '3':exit(0);
// 				break;

// 			default:printf("Incorrect choice.Try Again\n");

// 		}

// 	}

// }


// #include <stdio.h>
// #include <conio.h>

// char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

// int checkwin();
// void board();

// int main()
// {
//     int player = 1, i, choice;

//     char mark;
//     do
//     {
//         board();
//         player = (player % 2) ? 1 : 2;

//         printf("Player %d, enter a number:  ", player);
//         scanf("%d", &choice);

//         mark = (player == 1) ? 'X' : 'O';

//         if (choice == 1 && square[1] == '1')
//             square[1] = mark;
            
//         else if (choice == 2 && square[2] == '2')
//             square[2] = mark;
            
//         else if (choice == 3 && square[3] == '3')
//             square[3] = mark;
            
//         else if (choice == 4 && square[4] == '4')
//             square[4] = mark;
            
//         else if (choice == 5 && square[5] == '5')
//             square[5] = mark;
            
//         else if (choice == 6 && square[6] == '6')
//             square[6] = mark;
            
//         else if (choice == 7 && square[7] == '7')
//             square[7] = mark;
            
//         else if (choice == 8 && square[8] == '8')
//             square[8] = mark;
            
//         else if (choice == 9 && square[9] == '9')
//             square[9] = mark;
            
//         else
//         {
//             printf("Invalid move ");

//             player--;
//             getch();
//         }
//         i = checkwin();

//         player++;
//     }while (i ==  - 1);
    
//     board();
    
//     if (i == 1)
//         printf("==>\aPlayer %d win ", --player);
//     else
//         printf("==>\aGame draw");

//     getch();

//     return 0;
// }

// /*********************************************

// FUNCTION TO RETURN GAME STATUS
// 1 FOR GAME IS OVER WITH RESULT
// -1 FOR GAME IS IN PROGRESS
// O GAME IS OVER AND NO RESULT
//  **********************************************/

// int checkwin()
// {
//     if (square[1] == square[2] && square[2] == square[3])
//         return 1;
        
//     else if (square[4] == square[5] && square[5] == square[6])
//         return 1;
        
//     else if (square[7] == square[8] && square[8] == square[9])
//         return 1;
        
//     else if (square[1] == square[4] && square[4] == square[7])
//         return 1;
        
//     else if (square[2] == square[5] && square[5] == square[8])
//         return 1;
        
//     else if (square[3] == square[6] && square[6] == square[9])
//         return 1;
        
//     else if (square[1] == square[5] && square[5] == square[9])
//         return 1;
        
//     else if (square[3] == square[5] && square[5] == square[7])
//         return 1;
        
//     else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
//         square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
//         != '7' && square[8] != '8' && square[9] != '9')

//         return 0;
//     else
//         return  - 1;
// }


// /*******************************************************************
// FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
//  ********************************************************************/


// void board()
// {
//     system("cls");
//     printf("\n\n\tTic Tac Toe\n\n");

//     printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


//     printf("     |     |     \n");
//     printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

//     printf("_____|_____|_____\n");
//     printf("     |     |     \n");

//     printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

//     printf("_____|_____|_____\n");
//     printf("     |     |     \n");

//     printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

//     printf("     |     |     \n\n");
// }

// /*******************************************************************
// END OF PROJECT
//  ********************************************************************/

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

// /*
//  * C program to find the length of a string without using the
//  * built-in function
//  */
// #include <stdio.h>
 
// void main()
// {
//     char string[50];
//     int i, length = 0;
 
//     printf("Enter a string \n");
//     gets(string);
//     /*  keep going through each character of the string till its end */
//     for (i = 0; string[i] != '\0'; i++)
//     {
//         length++;
//     }
//     printf("The length of a string is the number of characters in it \n");
//     printf("So, the length of %s = %d\n", string, length);
// }

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
// }

/*  
 * C program to accept a string and a substring and
 * check if the substring is present in the given string
 */
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

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    int i,j,n;
//    char str[100][100],s[100];
//    printf("Enter number of names :\n");
//    scanf("%d",&n);
//    printf("Enter names in any order:\n");
//    for(i=0;i<n;i++)
//    {
//       scanf("%s",str[i]);
//    }
//    for(i=0;i<n;i++)
//    {
//       for(j=i+1;j<n;j++)
//       {
//          if(strcmp(str[i],str[j])>0)
//          {
//             strcpy(s,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],s);
//          }
//       }
//    }
//    printf("\nThe sorted order of names are:\n");
//    for(i=0;i<n;i++)
//    {
//       printf("%s\n",str[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main (){
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
//     return 0;
// }

// int i = 0;
//     // get sum of integers between 1 to n
// const int completeSum  = n*(n + 1)/2;
//     //Store array element sum
//     int arrSum = 0;
//     for (i= 0; i< n; i++)
//     {
// 	arrSum += arr[i];
//     }
//     // Missing number
//     return (completeSum - arrSum);
// }


// #include <stdio.h>
// int fact(int);
// int main()
// {
//     int b,sum;
//     for(int i=1;i<=5;i++)
//     {
//         b=fact(i);
//         sum=(sum+b/i);
//     }
//     printf("%d",sum);
//     return 0;
// }
    
// int fact(int x)
// {
//     int y=1;
//     for(int i=1;i<=x;i++)
//     {
//         y=y*i;
//     }
//     return(y);
// }

// #include <stdio.h>  
// int fact (int);  
// int main()  
// {  
//     int n,f;  
//     printf("Enter the number whose factorial you want to calculate?");  
//     scanf("%d",&n);  
//     f = fact(n);  
//     printf("factorial = %d",f);  
// }  
// int fact(int n)  
// {  
//     if (n==0)  
//     {  
//         return 0;  
//     }  
//     else if ( n == 1)  
//     {  
//         return 1;  
//     }  
//     else   
//     {  
//         return n*fact(n-1);  
//     }  
// }  

// #include <stdio.h>
// int fact(int);
// int main()
// {
//     int n;
//     int b;
//     printf("enter no of which we need to find factorial");
//     scanf("%d",&n);
//     b=fact(n);
//     printf("%d",b);
//     return 0;
// }
// int fact(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//         return n*fact(n-1);
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
//             if(a[i]==marks[i][j])
//             {
//                 for(j=0;j<count_sub;j++)
//                 {
//                     sum++;
//                 }
//             }
//         printf("sum of student %d is %d ",i+1,sum);
//         }     
//     } 
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter Number of students");
//     scanf("%d",&n);
   
//     int a[n][10];
//     int k[10];
//     int s;
//     int j;
    
//     printf("Enter Answer Key");
//     for(int i=0;i<10;i++)
//      scanf("%d",&k[i]);
     
//     for(int i=0;i<n;i++)
//     {   s=0;
      
//          printf("Enter MARKS");
//         for(j=0;j<10;j++)
//        { scanf("%d",&a[i][j]);
//         if(a[i][j]==k[j])
//         s=s+1;
//        }
//        printf("%d",s);
//     }
//     return 0;
// }


// #include <stdio.h>
// int fibonacci(int);
// int main()
// {
//     int n;
//     printf("enter n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d \n",fibonacci(i));
//     }
//     return 0;
// }
// int fibonacci(int i)
// {
//     if(i==0)
//     {
//         return 0;
//     }
//     else if(i==1)
//     {
//         return 1;
//     }
//     else{
//         return fibonacci(i-1)+fibonacci(i-2);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[50];
//     int n,f=0;
//     int max;
//     printf("enter the size of array");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    // printf("enter no to be searched");
    // scanf("%d",&b);
    // for(int i=1;i<=n;i++)
    // {
    //     if(b==arr[i])
    //     {
    //         f=1;
    //         break;
    //     }
    //     else 
    //         f=0;
    // }
    // if(f==1)
    // {
    //     printf("element there");
    // }
    // else
    //     printf("not");
    // return 0;
    // max=arr[0];
    // for(int i=0;i<=n;i++)
    // {
    //     if(arr[i]>max)
    //     max=arr[i];
    // }
    // printf("%d",max);
    // return 0;
// }

// #include <stdio.h>
// #define MAX_SIZE 100

// int main()
// {
//     int arr[MAX_SIZE];
//     int i, size, num, pos;

//     /* Input size of the array */
//     printf("Enter size of the array : ");
//     scanf("%d", &size);

//     /* Input elements in array */
//     printf("Enter elements in array : ");
//     for(i=0; i<size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     /* Input new element and position to insert */
//     printf("Enter element to insert : ");
//     scanf("%d", &num);
//     printf("Enter the element position : ");
//     scanf("%d", &pos);
//     * If position of element is not valid */
//     if(pos > size+1 || pos <= 0)
//     {
//         printf("Invalid position! Please enter position between 1 to %d", size);
//     }
//     else
//     {
//         /* Make room for new array element by shifting to right */
//         for(i=size; i>=pos; i--)
//         {
//             arr[i] = arr[i-1];
//         }
        
//         /* Insert new element at given position and increment size */
//         arr[pos-1] = num;
//         size++; 

//         /* Print array after insert operation */
//         printf("Array elements after insertion : ");
//         for(i=0; i<size; i++)
//         {
//             printf("%d\t", arr[i]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char s[20];
//     int len = 0;
//     printf("Enter string");
//     gets(s);
//     //count characters until null character is reached
//     while(s[len]!='\0')
//     len++;
//     printf("%d", len);
// }

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

// #include<stdio.h>
// #include<string.h>
 
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
//         for (j = i; j< i + count2; j++)
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


// #include <stdio.h>

// int main()
// {
//     int var = 20;
//     int *ptr = &var;
//     printf("VAR : %d\nPTR : %p\nADDRESS OF VAR IN PTR : %p\nVALUE PTR IS POINTING TO : %d", var,ptr,&var,*ptr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char i='b';
//     switch(i)
//     {
//         case 'a':
//             printf("A");
//         case 'b':
//             printf("B");
//         case 3:
//             printf("C");
//             break;
//         default:
//             printf("wrong");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i=3, *j, k;
//     j = &i;
//     printf("%d\n", i**j*i+*j);
//     return 0;
// }
// ans 30

// #include <stdio.h>
// int main()
// {
//     int x=30, *y, *z;
//     y=&x; /* Assume address of x is 500 and
//     integer is 4 byte size */
//     z=y;
//     *y++=*z++;
//     x++;
//     printf("x=%d, y=%d, z=%d\n", x, y, z);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[20] = "Hello";
//     char *const p=str;
//     *p='M';
//     printf("%s\n", str);
//     return 0;
// }
// mello

// #include <stdio.h>
// int main()
// {
//     int ***r, **q, *p, i=8;
//     p = &i;
//     q = &p;
//     r = &q;

//     printf("%d, %d, %d\n", *p, **q, ***r);
//     return 0;
// // }
// #ans= 8,8,8

// #include <stdio.h>
// int main()
// {
//     char *str;
//     str = "%s";
//     printf(str, "K\n");
//     return 0;
// }
// ans 8

// #include <stdio.h>
// int main()
// {
//     printf("%d, %d\n", sizeof(NULL), sizeof(""));
//     return 0;
// }

			
/*C program to read and print student details using structure pointer, 
demonstrate example of structure with pointer.*/


// #include <stdio.h>




// q1
// #include <stdio.h>
// int main(void)
// {
//     int var = 20;
//     int *ptr = &var;
//     printf("VAR : %d\nPTR : %p\nADDRESS OF VAR IN PTR : %p\nVALUE PTR IS POINTING TO : %d", var, ptr, ptr, *ptr);
// }

// q2


// // q3
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main(void)
// {
//     int m;
//     printf("ENTER ROW SIZE OF ARRAY : ");
//     scanf("%d", &m);
//     int n;
//     printf("ENTER COLUMN SIZE OF ARRAY : ");
//     scanf("%d", &n);
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             printf("ELEMENT [%d][%d] : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int *min = *arr, *max = *arr;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             max = (((arr + i) + j) > *max) ? *(arr + i) + j : max;
//             min = (((arr + i) + j) < *min) ? *(arr + i) + j : min;
//         }
//     }
//     printf("VALUE OF MINIMUM ELEMENT : %d\nVALUE OF MAXIMUM ELEMENT : %d\n",
//     *min, *max);
//     return 0;
// }

// q4
// #include <stdio.h>
// #include <stdlib.h>


// int main(void)

// {
	
// 	int *a,n,i,j,temp;

// 	printf("Enter size of array:");
// 	scanf("%d",&n);

// 	a=malloc(sizeof(int)*n);

// 	printf("Enter %d Elements:",n);
// 	for(i=0;i<n;i++)

// 	{

// 		scanf("%d",&a[i]);

// 	}

	


// 	for(i=0,j=n-1;i<j;i++,j--)
	
// 	{

// 		temp=a[i];
// 		a[i]=a[j];
// 		a[j]=temp;
// 	}

// 	printf("\After reversing the array:\n");
// 	for(i=0;i<n;i++)

// 	{

// 		printf("%d ",a[i]);

// 	}

	
// 	return 0;

// }

// // q5
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     char *p;
//     int  vCount=0,cCount=0;

//     printf("Enter any string: ");
//     fgets(str, 100, stdin);

//     //assign base address of char array to pointer
//     p=str;

//     //'\0' signifies end of the string
//     while(*p!='\0')
//     {
//         if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
//         		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
//             vCount++;
//         else
//             cCount++;
//         //increase the pointer, to point next character
//         p++;
//     }

//     printf("Number of Vowels in String: %d\n",vCount);
//     printf("Number of Consonants in String: %d",cCount);
//     return 0;
// }

// q6
// #include <stdio.h>
// int main()
// {
//     int x, y, *a, *b, temp;
//     printf("Enter the value of x and y\n");
//     scanf("%d%d", &x, &y);
 
//     printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
//     a = &x;
//     b = &y;
 
//     temp = *b;
//     *b = *a;
//     *a = temp;
 
//     printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
//    return 0;
// }



// q7
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

// q8
// #include <stdio.h>
 
// struct student{
//     char    name[30];
//     int     roll;
//     float   perc;
// };

// int main()
// {
//     struct student  std;        //structure variable
//     struct student  *ptr;       //pointer to student structure
     
//     ptr= &std;                  //assigning value of structure variable
     
//     printf("Enter details of student: ");
//     printf("\nName ?:");        gets(ptr->name);
//     printf("Roll No ?:");       scanf("%d",&ptr->roll);
//     printf("Percentage ?:");    scanf("%f",&ptr->perc);
     
//     printf("\nEntered details: ");
//     printf("\nName:%s \nRollNo: %d \nPercentage: %.02f\n",ptr->name,ptr->roll,ptr->perc);

//     return 0;
// }

// #include <stdio.h>  
  
// // create a structure Subject using the struct keyword  
// struct Subject  
// {  
//     // declare the member of the Course structure  
//     char sub_name[30];  
//     int sub_id;  
//     char sub_duration[50];  
//     char sub_type[50];  
// };  
  
// int main()  
// {  
//     struct Subject sub; // declare the Subject variable  
//     struct Subject *ptr; // create a pointer variable (*ptr)   
//     ptr = ⊂ /* ptr variable pointing to the address of the structure variable sub */  
      
//     strcpy (sub.sub_name, " Computer Science");  
//     sub.sub_id = 1201;  
//     strcpy (sub.sub_duration, "6 Months");  
//     strcpy (sub.sub_type, " Multiple Choice Question");  
  
//     // print the details of the Subject;  
//     printf (" Subject Name: %s\t ", (*ptr).sub_name);  
//             printf (" \n Subject Id: %d\t ", (*ptr).sub_id);  
//         printf (" \n Duration of the Subject: %s\t ", (*ptr).sub_duration);  
//            printf (" \n Type of the Subject: %s\t ", (*ptr).sub_type);  
  
//     return 0;  
      
// }  

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//  int a,b,*ptr1=&a,*ptr2=&b;
 
//    printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
//    printf("------------------------------------------------------------\n");   
 
//    printf(" Input the first number : ");
//    scanf("%d", ptr1);
//    printf(" Input the second  number : ");
//    scanf("%d", ptr2); 


//  if(*ptr1>*ptr2)
//  {
//   printf("\n\n %d is the maximum number.\n\n",*ptr1);
//  }
//  else
//  {
//   printf("\n\n %d is the maximum number.\n\n",*ptr2);
//  }
//  return 0;
// }

// #include <stdio.h>
// void main()
// {
//    int *a,i,j,tmp,n;
//  	printf("\n\n Pointer : Sort an array using pointer :\n"); 
// 	printf("--------------------------------------------\n");	   
   
//    printf(" Input the number of elements to store in the array : ");
//    scanf("%d",&n);
   
//    printf(" Input %d number of elements in the array : \n",n);
//    for(i=0;i<n;i++)
//       {
// 	  printf(" element - %d : ",i+1);
// 	  scanf("%d",a+i);
// 	  }   
//    for(i=0;i<n;i++)
//    {
//     for(j=i+1;j<n;j++)
//     {
//        if( *(a+i) > *(a+j))
//        {
//       tmp = *(a+i);
//       *(a+i) = *(a+j);
//       *(a+j) = tmp;
//        }
//     }
//    }
//    printf("\n The elements in the array after sorting : \n");
//    for(i=0;i<n;i++)
//       {
// 	  printf(" element - %d : %d \n",i+1,*(a+i));
// 	  }         
// printf("\n");
// }

// #include<stdio.h>
// void sort(int *x);
// int main()
// {
//   int a[5], i;
//   int *p;
//   p =  &a[0];

//   printf("Enter array elements: ");
//   for(i=0;i<5;i++)
//   {
//     scanf("%d",p+i);
//   }

//   sort(&a[0]);

//   printf("Sorted array is: ");
//   for(i=0;i<5;i++)
//   {
//     printf("%d\t", *(p+i));
//   }

//   return 0;
// }

// void sort(int *x)
// {
//   int i, j, temp;

//   for(i=0;i<5;i++)
//   {
//     for(j=i+1;j<5;j++)
//     {
//       if( *(x+i) > *(x+j) )
//       {
//         temp = *(x+i);
//         *(x+i) = *(x+j);
//         *(x+j) = temp;
//       }
//     }
//   }
// }

// #include<stdio.h>  
  
// void swap(int*, int*);  
  
// int main()  
// {  
//     int a, b;  
  
//     printf("Enter values for a and b\n");  
//     scanf("%d%d", &a, &b);  
  
//     printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
//     swap(&a, &b);  
  
//     printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
  
//     return 0;  
// }  
  
// void swap(int *x, int *y)  
// {  
//     int temp;  
  
//     temp = *x;  
//     *x   = *y;  
//     *y   = temp;  
// } 

// #include <stdio.h>
// void swap(int *a,int *b);
// int main()
// {
//     int a,b;
//     printf("enter values of a and b");
//     scanf("%d%d",&a,&b);
//     printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
//     swap(&a, &b);  
  
//     printf("\nAfter swapping: a = %d and b = %d\n", a, b);  
  
//     return 0; 
// }
// void swap(int *x,int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }


// #include <stdio.h>
// void cyclicSwap(int *a, int *b, int *c);
// int main() {
//     int a, b, c;

//     printf("Enter a, b and c respectively: ");
//     scanf("%d %d %d", &a, &b, &c);

//     printf("Value before swapping:\n");
//     printf("a = %d \nb = %d \nc = %d\n", a, b, c);

//     cyclicSwap(&a, &b, &c);

//     printf("Value after swapping:\n");
//     printf("a = %d \nb = %d \nc = %d", a, b, c);

//     return 0;
// }

// void cyclicSwap(int *n1, int *n2, int *n3) {
//     int temp;
//     // swapping in cyclic order
//     temp = *n2;
//     *n2 = *n1;
//     *n1 = *n3;
//     *n3 = temp;
// }


// #include<stdio.h>
// #include<string.h>
// void main(){
//    //Declaring string and pointers, for loop variable//
//    int i;
//    char *a[5]={"One","Two","Three","Four","Five"};
//    //Printing values within each string location using for loop//
//    printf("The values in every string location are : \n");
//    for(i=0;i<5;i++){
//       printf("%s\n",a[i]);
//    }
//    //Printing addresses within each string location using for loop//
//    printf("The address locations of every string values are : \n");
//    for(i=0;i<5;i++){
//       printf("%d\n",a[i]);
//    }
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     typedef struct Details
//     {
//         char name[50];
//         unsigned long number;
//         unsigned int rank;
//     } student;
//     student s1, *sptr;

//     sptr = &s1;
//     printf("ENTER NAME - ");
//     gets(sptr->name);
//     printf("ENTER NUMBER - ");
//     scanf("%d", &sptr->number);
//     printf("ENTER RANK - ");
//     scanf("%d", &sptr->rank);

//     printf("\n\nPRINTING DETAILS OF STUDENT -> \n");
//     printf("%s  %i  %i\n", s1.name, s1.number, s1.rank);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int number;
//     FILE *filename;
//     filename = fopen("C:\\write.txt","r");
//     if(filename == NULL)
//     {
//     printf("Error!");   
//     exit(1);           
//     }
//     fscanf(filename,"%d",&number);
//     printf("TechVidvan Tutorial: Reading from a file!\n");
//     printf("Value stored in 'write.txt' is: %d",number);
//     fclose(filename);
//     return 0;
// }

// #include <stdio.h>
// int rec(int x);
// int main()
// {
//     int f;
//     int m;
//     printf("enter no");
//     scanf("%d",&m);
//     f=rec(m);
//     printf("%d",f);

// }
// int rec(int x)
// {
//     int f ;
//     if (x==1)
//         return ( 1 ) ;
//     else
//         f = x * rec ( x - 1 ) ;
//         return ( f ) ;
    
// }

// #include <stdio.h>
// int main()
// {
//     int a[]={10,20,30,40,50};
//     int *p[]={a,a+3,a+4,a+1,a+2};
//     int **ptr=p;
//     ptr++;
//     printf("%d %d",ptr-p,**ptr);
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int x;
//         scanf("%d",&x);
//         char str[14];
//         scanf("%s",str);
//         for(int j=0;str[j]!=0;j++)
//         {
//             if(str[j]=='C')
//             {
//                 printf("60*%d",x);
//             }
//             else if(str[j]=='N')
//             {
//                 printf("40*%d",x);
//             }
//             else
//             {
//                 printf("55*%d",x);
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf
//     for(int i=0;i<t;i++)
//     {
//         int x,d,c,n;
//         scanf("%d",&x);
//         char str[14];
//         scanf("%s",str);
//         for(int j=0;str[j]!=0;j++)
//         {
//             if(str[j]=='C')
//             {
//                 c++;
//             }
//             else if(str[j]=='N')
//             {
//                 n++;
//             }
//             else
//             {
//                 d++;
//             }
//         }
//         if(c>d)
//         {
//             printf("%d*%d",60*x);
//         }
//         else if(c<d)
//         {
//             printf("40*%d",x);
//         }
//         else
//         {
//             printf("%d*%d",55*x);
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         int c,m=0;
//         int l;
//         scanf("%d",&n);
//         char str[n];
//         scanf("%s",str);
//         for(int i=0;i<n;i++)
//         {
//             if(str[i]=='0')
//             {
//                 c++;
//             }
//             else
//             {
//                 m++;
//             }
//         }
//         if(n%2==0)
//         {
//             if(c==m)
//             {
//                 printf("yes\n");
//             }
//             else if(m%2==0&&c%2==0)
//             {
//                 printf("yes\n");
//             }
//             else
//             {
//                 printf("no\n");
//             }
//         }
//         else
//         {
//             printf("yes\n");
//         }
//     }
// }

#include <stdio.h>

int main() {
    int regno,maths,chem,bio,pps,cme;
    char name[50];
    FILE* f;
    printf("Enter Name:");
    scanf("%s",&name);
    printf("Enter regno:");
    scanf("%d",&regno);
    printf("Enter maths:");
    scanf("%d",&maths);
    printf("Enter chem:");
    scanf("%d",&chem);
    printf("Enter bio:");
    scanf("%d",&bio);
    printf("Enter pps:");
    scanf("%d",&pps);
    printf("Enter cme:");
    scanf("%d",&cme);
    f= fopen("abc.txt","w");
    fprintf("%s\n%d\n%d\n%d\n%d\n%d\n%d\n",&name,&regno,&maths,&chem,&bio,&pps,&cme);
    f.close(f);
    return 0;
}