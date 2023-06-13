#include<stdio.h>
#include<string.h>

int main(){
    char str1[10];
    char str2[10];
    char full_name[20];

    printf("Enter your first name: ");
    scanf("%s", str1);

    printf("Enter your last name: ");
    scanf("%s", str2);

    strcpy(full_name, str1);
    strcat(full_name, " ");
    strcat(full_name, str2);

    printf("%s", full_name);

    return 0;
}

