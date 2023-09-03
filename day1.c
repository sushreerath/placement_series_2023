#include <stdio.h>
int main() {
    float pH;

    printf("Enter the pH value: ");
    scanf("%f", &pH);

    if (pH<7) 
    {
        printf("Acidic",&pH);
    }
else if(pH>7){
    printf("Alkaline",&pH);
}
else{
    printf("Neutral",&pH);
}
    return 0;
}
