/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:35:23 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/08 20:35:23 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_memset(void *tableau, int value, size_t size)
{
        size_t i;
        unsigned char *tmp;

        i = 0;
        tmp = (unsigned char *) tableau;
        while (i < size)
        {
                tmp[i] = (unsigned char) value;
                i++;
        }
}