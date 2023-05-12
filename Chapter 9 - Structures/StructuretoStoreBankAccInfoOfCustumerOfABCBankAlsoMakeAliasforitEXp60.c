#include <stdio.h>

typedef struct BankAccount {
    int AccountNo;
    char name[100]; 
} acc ;

int main () {
    acc acc1 = {123, "Rohit"};
    acc acc2 = {456, "Anil"};
    acc acc3 = {789, "Nilesh"};
    
    printf("Bank Account Information for Person 1 : \n");
    printf("Account No is : %d\n", acc1.AccountNo);
    printf("Name is : %s\n\n", acc1.name);

    printf("Bank Account Information for Person 2 : \n");
    printf("Account No is : %d\n", acc2.AccountNo);
    printf("Name is : %s\n\n", acc2.name);

    printf("Bank Account Information for Person 3 : \n");
    printf("Account No is : %d\n", acc3.AccountNo);
    printf("Name is : %s\n\n", acc3.name);
    return 0;
}