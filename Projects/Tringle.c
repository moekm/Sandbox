#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){


    char sympol[] = "*";
    int Tsize;

    printf("Please Enter the size of the triangle: ");
    scanf("%d", &Tsize);

    while (Tsize < 3)
    {
      printf("Invalid value \"%d\" please enter a number btween 3-100...: ", Tsize);
     scanf("%d", &Tsize);
        }


    // Draw a tringel of that sympol 
    /*
       *
      * *
     * * *
    * * * *
    */


   for (int i = 1; Tsize >= i; i++){

    // Add Padding
    for (int j = Tsize - 1; j >= i; j--){
        printf(" ");
    }

    // Add The Stars
     for (int j = 1; j <= i; j++){
        printf("* ");
    }

    printf("\n");
   }

   

return 0;
}




// stoped at 1:45:00
// practice string spesfier