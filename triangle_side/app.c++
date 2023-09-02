#include <stdio.h>
#include <stdlib.h>


// Calculate the sides of an imaginary triangle
int main(){
 
 
    int sideA, sideB,sideC;
    printf("Enter the 3 values:");
    scanf("%d %d %d", &sideA, &sideB, &sideC);
 
    //Analyze if it is equilateral
    if( (sideA == sideB) && (sideB == sideC) ){
        printf("\nO Triangle is equilateral");
    }else{
        //Checks if there are at least two equal sides
        if( (sideA == sideB) || (sideB == sideC) || (sideC == sideA)){
            printf("\nO Triangle is isosceles!");
        }else{
            printf("\nO Triangle is scalene!");
        }
    }
 
}
