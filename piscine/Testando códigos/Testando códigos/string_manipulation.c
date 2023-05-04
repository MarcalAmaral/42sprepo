#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int index;
    
    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

void swap_first_char_for_x(char *str)
{
    str[0] = 'x';
}

void permute_first_characters(char *src, char *dest)
{
    char p;

    p = src[0];
    src[0] = dest[0];
    dest[0] = p;
}

int main(void) 
{
    char str[] = "Hello";
    char str1[] = "Wellow";
    char str2[] = "Yello";
    char str3[] = "Zello";

    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr(str1);
    ft_putchar('\n');
    swap_first_char_for_x(str);
    ft_putstr(str);
    ft_putchar('\n');
    permute_first_characters(str2, str3);
    ft_putstr(str2);
    ft_putchar('\n');
    ft_putstr(str3);
    ft_putchar('\n');

    return (0);
}