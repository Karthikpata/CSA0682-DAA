#include<stdio.h>
#include<string.h>
 
int main()
{
    char st[1000];
    int i;
    printf("Enter the String: ");
    scanf("%s", st);
    printf("Length of String is %ld", strlen(st));
    return 0;
}
