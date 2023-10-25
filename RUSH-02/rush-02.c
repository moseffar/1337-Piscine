#include <stdio.h>
#include <unistd.h>
#include "ft.h"

char *dict[] = {
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    "twenty",

    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
    "hundred",

    "thousand",
    "million",
    "billion"
};

int main(int argc, char **argv)
{
    (void) argc;
    unsigned int    nb;
    int ret = ft_atoi(argv[1], &nb);
    if (ret == 0)
    {
        write (1, "Error\n", 6);
        return (1);
    }

    ret = 0;
    int_to_letter(nb);
    // if (ret == 0)
    // {
    //     write(1, "Dict Error!\n", 12);
    // }
    // return 0;
}