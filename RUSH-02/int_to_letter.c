#include "ft.h"

// 1202 ==> 1000
// 12022 ==> 10000
unsigned int    nbr_base(unsigned int   n)
{
    int i = 0;
    while (n)
    {
        i++;
        n /= 10;
    }
    return ft_recursive_power(10, i - 1);
}

void int_to_letter(unsigned int  num)
{
    char *l;
	if (num <= 20 && num >= 0)
	{
		l = map(num, dict);
        if (l)
        {
            ft_putstr(l);
        }
	}
    else if (num >= 21 && num <= 100)
    {
        l = map((num / 10) * 10, dict);
        if (l)
        {
            ft_putstr(l);
        }
        if (num % 10 != 0)
        {
            ft_putstr("-");
            l = map(num % 10, dict);
            if (l)
            {
                ft_putstr(l);
            }
        }
    }
    else if (num >= 101)
    {
        
        l = map((num / nbr_base(num)), dict);
        if (l)
        {
            ft_putstr(l);
        }
        ft_putstr("-");
        l = map(nbr_base(num), dict);
        if (l)
        {
            ft_putstr(l);
        }
        if (num % nbr_base(num) != 0)
        {
            ft_putstr("-");
            int_to_letter(num % nbr_base(num));
        }
    }
}