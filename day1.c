#include <stdio.h>
int main() {
    float pH;

    printf("Enter the pH vale: ");
    scanf("%f", &pH);

    if (pH<7) 
    {
        printf("Acidic",&pH);
    }
else if(pH>7){
    printf("Alkaline",&pH);
}
else{
    printf("neutral",&pH);
}
    return 0;
}