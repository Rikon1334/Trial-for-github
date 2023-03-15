
/*Write a function checkIfAllVowels in C which takes a string and checks if the word
contains all five vowels. It returns 1 if all vowels a. You have to use find function (from
problem 1) and you are not allowed to use any array/string other than the parameter itself.*/






#include <stdio.h>

// Function to check if a given character is a vowel
int isVowel(char c)
{
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int checkIfAllVowels(char *s)
{
    int count = 0;
    while (*s != '\0')
    {
        if (isVowel(*s))
        {
            count++;
            if (count == 5)
                return 1;
        }
        s++;
    }
    return 0;
}

// Driver program to test above function
int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    if (checkIfAllVowels(s))
        printf("Yes");
    else
        printf("No");
        return 0;
}
