/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:03:13 by rubi              #+#    #+#             */
/*   Updated: 2026/05/30 14:51:16 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	// 1. Probar STDOUT_FILENO (1) - Salida estándar normal
	ft_putchar_fd('A', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);

	// 2. Probar STDERR_FILENO (2) - Salida de error estándar
	ft_putchar_fd('B', STDERR_FILENO);
	ft_putchar_fd('\n', STDERR_FILENO);

	// 3. Probar STDIN_FILENO (0) - Entrada estándar
	// Nota: Escribir en STDIN no es común, pero el sistema operativo lo permite
	// si está apuntando a la misma terminal (TTY) de lectura/escritura.
	ft_putchar_fd('C', STDIN_FILENO);
	ft_putchar_fd('\n', STDIN_FILENO);

	return (0);
}
*/