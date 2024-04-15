#include <stdio.h>

/**
 * Simple Pointers Exercise
 * byte = 8 bits
*/

// prototype
void changeNum(int *num);

int main() {

    // changing the value of a int using a function "by-reference"
    int num = 4;
    int *pNum = &num;

    changeNum(pNum);
    printf("num variable after \"changeNum()\": %d", num);

    // ====== For better understanding run each block of code separately (: ====== 

    int n;
    int *pn;
    int **ppn;
    int ***pppn;
    int ****ppppn;

    n = 5;
    pn = &n;
    ppn = &pn;
    pppn = &ppn;
    ppppn = &pppn;

    
    printf("%p\n", *ppppn); // destructure for addrs of ppn
    printf("%p\n", pppn);  //  the address of ppn stored with in pppn

    printf("%p\n", **ppppn); // destructuring 2 times for addrs of pn
    printf("%p\n", ppn);       // the address of pn stored with in ppn

    printf("value of n: %d", ****ppppn); // for ****ppppn destructuring we get an int number

    return 0;
}

void changeNum(int *num){
    *num = 10;
}