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