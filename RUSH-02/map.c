#include <stdlib.h>

char *map(unsigned int  nb, char **dict)
{
    if (nb >= 0 && nb <= 20)
    {
        return (dict[nb]);
    }
    else if (nb >= 30 && nb <= 100 && nb % 10 == 0)
    {
        return (dict[21 + (nb / 10) - 3]);
    }
    else if (nb == 1000)
    {
        return (dict[29]);
    }
    else if (nb == 1000000)
    {
        return (dict[30]);
    }
    else if (nb == 1000000000)
    {
        return (dict[31]);
    }
    else
    {
        return (NULL);
    }
}