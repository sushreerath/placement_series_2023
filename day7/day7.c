1.a)Rs.50
Price = 30kg × Rs.40/kg
          =Rs 1200
Selling Price for 40% of 30 kg=40/100 × 30kg × Rs 50/kg
                               = Rs.600
Remaining Quantity =Total Quantity - Quantity Sold
Remaining Quantity = 30 kg - (40/100)×30 kg
                    =30 kg - 12 kg
                    =18 kg
Remaining Cost Price =Price - Price of Quantity Sold
                     = 1200 - 600
                      = Rs. 600
Overall Profit =25/100× Rs.1200
               =Rs.300
Selling Price for Remaining Quantity=Remaining Price+Overall Profit
                                      = Rs. 900
Price per kg=Selling Price for Remaining Quantity / Remaining Quantity
Price per kg=Rs.900/18 kg
Price per kg=Rs.50/kg

2.
#include <stdio.h>
#include <string.h>
void reverse(char* str, int start, int end) 
{
    while (start<end) 
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
char* reversewords(char* sent) 
{
    int length=strlen(sent);
    int start=0;
    for (int i = 0; i < length; i++) 
    {
        if (sent[i] == ' ' || sent[i] == '\0') 
        {
            reverse(sent, start, i - 1);
            start = i + 1;
        }
    }
    return sent;
}

int main() 
{
    char inputsentence[1000];
    printf("Enter a sentence: ");
    fgets(inputsentence, sizeof(inputsentence), stdin);

    if (inputsentence[strlen(inputsentence) - 1] == '\n') 
    {
        inputsentence[strlen(inputsentence) - 1] = '\0';
    }
    char* reversedsentence = reversewords(inputsentence);
    printf("Reversed sentence: %s\n", reversedsentence);
    return 0;
}

3.b)Only II follows

4.c)III
  taking part in

5.The ','operator firstcevaluates 7,then 9 and finally 3, but it returns the value of the rightmost operand only, which is 3.

So, the value for a is 5 + 3 = 8
