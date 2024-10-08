/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarton <mcarton@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:13:27 by mcarton           #+#    #+#             */
/*   Updated: 2024/10/08 08:13:27 by mcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(char *tableau, size_t size)
{
    int i;

    i = 0;
    while(i < size)
    {
        tableau[i] = 0;
        i++;
    }
}