#include <stdio.h>
#include <string.h>

int main(){
char a[100], b[100];
printf("Enter First String:");
gets(a);
printf("Enter Second String:");
gets(b);
int i;
for(i=0;a[i] !='\0';++i);
printf("The Length of first string is: %d",i);
for(i=0;b[i] !='\0';++i);
printf("\nThe Length of second string is: %d",i);
}
