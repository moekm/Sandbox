#include <stdio.h>
#include <string.h>

void printSort(int array[], int arrSize);

int main() {
    
    int array[] = {9,9,6,7,44,2,1,34,6,3,45,3,1,2,5,8};
    int arrSize = sizeof(array)/sizeof(array[0]);

    printSort(array, arrSize);
    return 0;
}


void printSort(int array[], int arrSize){

 int tempMov;


    printf("Before Sort:\t");
    for (int i=0; i < arrSize; i++){
        printf("%d ", array[i]);
    }
     printf("\n");


    // sorting an array of integers
    for (int i = 0; i < arrSize; i++){

        for (int j=0; j < arrSize; j++){

            if (array[j] > array[j + 1] && array[j + 1] != 0){
                tempMov = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tempMov;
            }

        }

    }

    printf("After Sort:\t");
    for (int i=0; i < arrSize; i++){
        printf("%d ", array[i]);
    }

}

// stoped at 2:09:00 -- OLD NO LONGER IN USE