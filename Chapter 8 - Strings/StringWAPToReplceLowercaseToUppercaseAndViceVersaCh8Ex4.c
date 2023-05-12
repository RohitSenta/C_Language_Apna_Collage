// Write a program to replace lowercase letters with uppercase & vice versa in a string.

// We can do this program with Two Ways Both are as Bolow - one is Commented.

#include<stdio.h>
#include<string.h>

void convertCase (char arr[]);
//void convertCase (char arr[], char upper[], char lower[], int lenght);

int main(){
    char arr[100];
    printf("Enter String : ");
    fgets(arr, 100, stdin);
    // char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // char lower[] = "abcdefghijklmnopqrstuvwxyz";
    // int length = sizeof(upper)/sizeof(upper[0]);

    // convertCase(arr, upper, lower, length);
    // printf("Converted Case As Bolow : \n");
    // for (int i=0; arr[i] != '\0'; i++){
    //     printf("%c", arr[i]);
    // }

    convertCase(arr);
    printf("Converted Case As Bolow : \n");
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }

    return 0;
}

void convertCase(char arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            arr[i] = arr[i]+32;
        } else if (arr[i] >= 97 && arr[i] <= 122){
            arr[i] = arr[i]-32;
        }    
    }
}

// void convertCase(char arr[], char upper[], char lower[], int length){
//     for (int i=0; arr[i] != '\0'; i++){
//         for(int j=0; j<length; j++){

//             if(arr[i] == upper[j]){
//                 arr[i] = lower[j];
//             } 
//             else if (arr[i] == lower[j]){
//                 arr[i] = upper[j];
//             }
//         }
//     }
// }