// print Hello World 5 times Using Recursion

void printHW(int count);

int main() {
    printHW(5);
    return 0;
}

//Recursive Function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World!!\n");
    printHW(count-1);
}