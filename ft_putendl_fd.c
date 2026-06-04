/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:56:32 by rubi              #+#    #+#             */
/*   Updated: 2026/06/04 03:34:24 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	salto;

	i = 0;
	salto = '\n';
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd(salto, fd);
}

/*
int	main(void)
{
	int	fd_file;

	// 1. Prueba en la salida estándar (Consola)
	// Debe imprimir la cadena seguida de un salto de línea
	ft_putendl_fd("1. Hola Mundo en STDOUT", 1);

	// 2. Prueba en la salida de error estándar
	// Se debe consola, pero redirigido a la salida de error
	ft_putendl_fd("2. Mensaje de error en STDERR", 2);

	// 3. Prueba escribiendo dentro de un archivo real
	// Crea o abre un archivo llamado "test_putendl.txt" permisos escritura
	fd_file = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_file == -1)
	{
		ft_putendl_fd("Error al abrir el archivo", 2);
		return (1);
	}

	// Escribe dos líneas en archivo y comprueba '\n' saltos de línea funcionan
	ft_putendl_fd("Línea 1 dentro del archivo", fd_file);
	ft_putendl_fd("Línea 2 dentro del archivo", fd_file);

	// Cierra el descriptor de archivo
	close(fd_file);

	ft_putendl_fd("3. Prueba de archivo hecha. Revisa 'test_putendl.txt'", 1);
	return (0);
}
*/