// #include<stdio.h>
// void modify (int n)
// {
//     n=n+10;
//     printf("Value of ‘n’ inside function=%d \n", n);
// }
// int main()
// {
//     int x=15;
//     modify(x);//passing value in function
//     printf("Modified value of x=%d \n", x);
//     return 0;
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
// #include <math.h>

// long decimalToBinary(int decimalnum)
// {
//     long binarynum = 0;
//     int rem, temp = 1;

//     while (decimalnum!=0)
//     {
//         rem = decimalnum%2;
//         decimalnum = decimalnum / 2;
//         binarynum = binarynum + rem*temp;
//         temp = temp * 10;
//     }
//     return binarynum;
// }

// int main()
// {
//     int decimalnum;
//     printf("Enter a Decimal Number: ");
//     scanf("%d", &decimalnum);
//     printf("Equivalent Binary Number is: %ld", decimalToBinary(decimalnum));
//     return 0;
// }

// #include <stdio.h>
// int perfect(int);
// int main()
// {
//     int x;
//     int b;
//     printf("enter no to be checked is perfect or not");
//     scanf("%d",&x);
//     b=perfect(x);
//     return 0;
// }

// int perfect(int n)
// {
//     int s=0;
//     for(int i=1;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             s=s+i;
//         }
//     }
//     if(s==n)
//     {
//         printf("perfect no");
//     }
//     else
//         printf("not a perfect no");
// }


// #include <stdio.h>
// int armstrong(int);
// int main()
// {
//     int x;
//     int b;
//     printf("enter no to be checked is armstrong or not");
//     scanf("%d",&x);
//     b=armstrong(x);
//     return 0;
// }

// int armstrong(int n)
// {
//     int r,sum=0,temp;    
//     temp=n;   
//     while(n>0)    
//     {    
//     r=n%10;    
//     sum=sum+(r*r*r);    
//     n=n/10;    
//     }    
//     if(temp==sum)    
//     printf("armstrong  number ");    
//     else    
//     printf("not armstrong number");    
//     return 0;  
// } 



// #include <stdio.h>
// void swap(int, int);
// int main()
// {
//    int x, y;
//    printf("Enter the value of x and y\n");
//    scanf("%d%d",&x,&y);
//    printf("Before Swapping\nx = %d\ny = %d\n", x, y);
//    swap(x, y); 
//    printf("After Swapping\nx = %d\ny = %d\n", x, y);
//    return 0;
// }
 
// void swap(int a, int b)
// {
//    int temp;
//    temp = b;
//    b = a;
//    a = temp;
//     printf("Values of a and b is %d  %d\n",a,b);
// }
 
// #include <stdio.h>
// int hairpins(int);
// int main()
// {
//     int x=50;
//     int b;
//     b=hairpins(x);
//     return 0;
// }

// int hairpins(int N)
// {
//     if(N <= 1)
//     {
//         return 1;
//     }
//     else
//     return N * hairpins(N - 1);
// }

// #include <stdio.h>
// int addNumbers(int n);
// int main() {
//     int num=50;
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n) {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char p[] = "Examsquiz";
//     char t;
//     int i, j;
//     for (i = 0, j=strlen(p); i <j; i++)
//     {
//         t = p[i];
//         p[i] = p[j - i];
//         p[j - i] = t;
//     }
//     for (int k = 0; k <= 9; k++)
//     {
//         printf("%c \n",p[k]);
//     }
//     printf("%s", p);
// }

// # include <stdio.h>
// int main( )
// {
//     char s[ ] = "Get organised! learn C!!" ;
//     printf ( "%s\n", &s[ 2 ] ) ;
//     printf ( "%s\n", s ) ;
//     printf ( "%s\n", &s ) ;
//     printf ( "%c\n", s[ 2 ] ) ;
//     return 0 ;
// }

// # include <stdio.h>
// int main( )
// {
//     printf ("%d %d %d\n",sizeof(’3’),sizeof("3"),sizeof( 3) ) ;
//     return 0 ;
// }

// # include <stdio.h>
// int main()
// {
//     int arr[ ] = {'A','B','C','D'} ;
//     int i ;
//     for ( i = 0 ; i <= 3 ; i++ )
//     printf ( "%u \n", arr[ i ] ) ;
//     printf ( "\n" ) ;
//     return 0 ;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[42]="B64544";
//     int l=strlen(a);
//     for(int i=0;i<l;i++)
//     {
//         a[i]=a[i-1];
//     }
//     printf("%s\n",a);

    // int i,j,m;
    // i=++a[1];
    // j=a[1]++;
    // m=a[i++];
    // printf("%d %d %d",i,j,m);

//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char straw[100];
		scanf("%s",straw);
		printf("%c",straw[-1]);
		return 0;
	}
}
