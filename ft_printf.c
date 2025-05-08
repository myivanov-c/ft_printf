/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykytaivanov <mykytaivanov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:54:18 by mykytaivano       #+#    #+#             */
/*   Updated: 2025/05/08 20:36:40 by mykytaivano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    int     i;
    int     count;
    va_list ap;
    
    if (!format)
        return (-1);
    i = 0;
    count = 0;
    va_start (ap, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            i++;
            count += ft_handle_conversion(format, i, &ap);
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }
    va_end(ap);
    return (count);
}

/*int main(void)
{
    int ret1, ret2;

    ret1 = ft_printf("ft_printf: NULL char -> %cEND\n", '\0');
    ret2 = printf("printf:    NULL char -> %cEND\n", '\0');
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);
    
    // Teste 1: string normal
    ret1 = ft_printf("ft_printf: Hello %s!\n", "world");
    ret2 = printf("printf:    Hello %s!\n", "world");
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 2: string NULL
    //ret1 = ft_printf("ft_printf: NULL string -> %s\n", NULL);
    //ret2 = printf("printf:    NULL string -> %s\n", (char *)NULL);
    //printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 3: número decimal
    ret1 = ft_printf("ft_printf: Number: %d\n", 42);
    ret2 = printf("printf:    Number: %d\n", 42);
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 4: hexadecimal
    ret1 = ft_printf("ft_printf: Hex: %x\n", 255);
    ret2 = printf("printf:    Hex: %x\n", 255);
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 5: ponteiro NULL
    ret1 = ft_printf("ft_printf: NULL pointer: %p\n", NULL);
    ret2 = printf("printf:    NULL pointer: %p\n", NULL);
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 6: ponteiro real
    int a = 42;
    ret1 = ft_printf("ft_printf: Pointer: %p\n", &a);
    ret2 = printf("printf:    Pointer: %p\n", &a);
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    // Teste 7: Percent literal
    ret1 = ft_printf("ft_printf: 100%% complete\n");
    ret2 = printf("printf:    100%% complete\n");
    printf("Return ft_printf: %d | printf: %d\n\n", ret1, ret2);

    return 0;
}*/