//  Print even numbers in 1-20 numbers 

#include<stdio.h>
int main () {
    int i;

    for ( i = 2; i <= 20; i++) {
        if(i % 2 == 0) {

        printf("%d\n", i);

        }
    }

    return 0;
}
