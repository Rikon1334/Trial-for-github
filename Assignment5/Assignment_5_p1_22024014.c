/*Write a function find in C which takes two parameters: one string and one character
and returns the location of the first appearance of a character in a string. The function returns
-1 if the character is not found.*/

#include <stdio.h>

int find(char str[], char c)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == c)
            return i;
    }
    return -1;
}

int main()
{
    char str[20], c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find: ");
    scanf(" %c", &c);
    int index = find(str, c);
    if(index == -1)
        printf("Character not found!\n");
    else
        printf("Character found at index %d\n", index);

    return 0;
}
