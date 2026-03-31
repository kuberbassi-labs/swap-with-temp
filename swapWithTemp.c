#include <stdio.h>

int main(){
    int a = 5 , b = 9 , temp;
    printf("Number Before Swap: %d%d\n",a,b);
    temp = a ;
    a = b ;
    b = temp ;
    printf("Number After Swap: %d%d\n",a,b);
    return 0;
}




