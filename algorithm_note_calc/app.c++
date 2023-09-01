#include <stdio.h>
#include <stdlib.h>


// Algorithm that reads 3 notes and calculates the average between them.
int main(){
 
    float note1, note2, note3, average;
    printf("Enter note 1:");
    scanf("%f", &note1);
 
    printf("\n Enter note 2:");
    scanf("%f", &note2);
 
    printf("\n Enter note 3:");
    scanf("%f", &note3);
 
    average = (note1+note2+note3)/3;
    printf("\nA The student average was: %.2f", average);
 
    if(average > 6 ){
        printf("\n\nO Student passed!");
    }else{
        printf("\n\nO Student failed!");
    }
 
}
