#include <stdio.h>
#include <stdlib.h>

/*
Fixation Exercise
Calculator with Menu
*/

int main(){
 
    float value1, value2;
    int option;
 
    printf("Enter the first value:");
    scanf("%f", &value1);
    printf("Enter the second value:");
    scanf("%f", &value2);
 
    printf("\nChoose an option:");
    printf("\n1-Add");
    printf("\n2-Sub");
    printf("\n3-Div");
    printf("\n4-Mult");
    scanf("%d", &option);
    switch(option){
        case 1:
            printf("Sum result: %.2f", value1 + value2);
            break;
        case 2:
            printf("Subtraction result: %.2f", value1 - value2);
            break;
        case 3:
            printf("Division result: %.2f", value1 / value2);
            break;
        case 4:
            printf("Multiplication result: %.2f", value1 * value2);
            break;
        default:
            printf("Invalid option!");
            break;
    }
 
}
