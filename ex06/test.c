#include <stdio.h>
int firstNumber = 15;
void changeNumberOrigin(int *number){
    *number = 50;
}

int main(){
    changeNumberOrigin(&firstNumber);
    printf("%d", firstNumber);
    return 0;
}