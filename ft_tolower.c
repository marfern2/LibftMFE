/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 01:13:19 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 01:15:00 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32 ;
	}
	return (c);
}

/*
int	main(void)
{
	int num = tolower('A');
	printf("%c\n", num);
	int num2 = ft_tolower('A');
	printf("%c", num2);
}
*/