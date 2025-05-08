/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykytaivanov <mykytaivanov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:51:43 by mykytaivano       #+#    #+#             */
/*   Updated: 2025/05/07 17:55:17 by mykytaivano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putchar(char c)
{
    unsigned char   c2;

    c2 = (unsigned char)c; 
    write(1, &c2, 1);
    return (1);
}