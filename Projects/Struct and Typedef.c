#include <stdio.h>

typedef struct 
{
    char name[100];
    char location[50];
    char grade;
    int number;
} Factory;

struct Model
{
    char name[100];
    int vin[14];
    float year;
};

void printVIN(int *vin, int size);

int main() {
    

    Factory f1 = {"Germany North East", "Berlin Strasse 2234", 'A', 19938463};
    printf("\nFactory Name: %s", f1.name);
    printf("\nFactory Location: %s", f1.location);
    printf("\nFactory Grade: %c", f1.grade);
    printf("\nFactory Number: %d", f1.number);

    struct Model c1 = {"Stupid Name", {2,9,3,8,4,6,6,5,8,4,9,1,9,0}, 0.000024}; // DD/MM/YYYY
    int vinSize = sizeof(c1.vin)/sizeof(c1.vin[0]);
    printf("\nModel Name: %s", c1.name);
    printVIN(c1.vin, vinSize);
    printf("\nModel Year: %lf", c1.year);

    return 0;
}

void printVIN(int *vin, int size){

    printf("\n Factory Vin: ");
  for (int i = 0; i < size; i++) {
        printf("%d", vin[i]);
    }

}
