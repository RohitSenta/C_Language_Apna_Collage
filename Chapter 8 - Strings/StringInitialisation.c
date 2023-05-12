#include <stdio.h>


int main (){
    
    char name[] = {'R','O','H','I','T',' ','S','E','N','T','A','\0'};
    char name1[] = "ROHIT SENTA";

    for (int i=0; i<sizeof(name); i++){
            printf("%c", name[i]);
    }
    
    printf("\n%s\n", name1);
    return 0;
}