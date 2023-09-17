1.a)Rs.50
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

3.b)only II follows

4.c)III

5.The comma operator evaluates 7,then 9 and finally 3 but it returns the value of the rightmost operand 3.
So,the value assigned to a is 5 + 3= 8.
