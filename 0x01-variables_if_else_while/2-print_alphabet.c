#include <stdio.h>
/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: Always (Success)
  */
int main(void)
{
char ch = 'a';

    putchar("Lowercase English Alphabets:\n");
    while(ch <= 'z')
        putchar("%c ", ch);
        ch++;
return (0);
}
