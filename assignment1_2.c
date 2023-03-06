#include <stdio.h>
int main()
{
    
    int chars = 0, digits = 0, spaces = 0, others = 0; //first we decalre all things with zero 
    //declaring the character to get string from user
    char ch;

    // while loop will test each character of string untill we get a new word in the string
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) // if the character ch is alphabet then we increment the chars
        {
            chars = chars + 1;
        }
        // If the character is a digit 0 to 9 then we add 1 in digits
        else if (ch >= '0' && ch <= '9')
        {
        digits = digits + 1;
        }
        // If the character is a space or blank then we add 1 in a spaces
        else if (ch == ' ')
        {
            spaces = spaces +1;
        }
        // If the character is other than mentioned above such as comma, semicolon then we add 1 in others.
        else
        {
            others = others + 1;
        }
    }

    // this will print the values of these variables.
    printf("%d %d %d %d\n", chars, digits, spaces, others);

    return 0;
}
