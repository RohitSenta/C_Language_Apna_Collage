#include <stdio.h>
#include <string.h>

void salting (char password[]);

int main () {
    char password[100];
    printf("Enter password : ");
    scanf("%s", password);
    salting(password);
    return 0;
} 
void salting (char password[]){
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password); // copy password "test" to newPassword
    strcat(newPassword, salt); // add salt to newPassword = "test" + "123";
    printf("Your new password is : ");
    puts(newPassword);
}