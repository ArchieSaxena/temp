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
    f.close();
    return 0;
}