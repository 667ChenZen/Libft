/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 07:26:20 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/08 07:26:20 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_memset(char *tableau, int value, size_t size)
{
        int i;

        i = 0;
        while (i < size)
        {
                tableau[i] = value;
                i++;
        }
}