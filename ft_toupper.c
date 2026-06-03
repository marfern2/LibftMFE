/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 01:02:32 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 01:13:04 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32 ;
	}
	return (c);
}

/*
int	main(void)
{
	int num = toupper('a');
	printf("%c\n", num);
	int num2 = ft_toupper('a');
	printf("%c", num2);
}
*/