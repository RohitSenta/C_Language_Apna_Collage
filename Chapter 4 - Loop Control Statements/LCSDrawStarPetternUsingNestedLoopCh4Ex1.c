/* Search on what a "nested loop" is & print thispattern using it.
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include<stdio.h>

int main () {
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){ // Nested Loop(Loop inside Loop)
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}