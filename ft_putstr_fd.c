/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:06:23 by rubi              #+#    #+#             */
/*   Updated: 2026/06/04 03:37:04 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
int	main(void)
{
	int	fd_archivo;

	// 1. Probar en STDOUT_FILENO (1) - Salida estándar normal
	ft_putstr_fd("Hola Mundo desde STDOUT!\n", 1);

	// 2. Probar en STDERR_FILENO (2) - Salida de error estándar
	ft_putstr_fd("Esto es un mensaje de error en STDERR!\n", 2);

	// 3. Probar creando y escribiendo en un archivo de texto real
	// Creamos "prueba_string.txt". Si ya existe, borra su contenido (O_TRUNC).
	fd_archivo = open("prueba_string.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	// Protección por si el sistema falla al abrir el archivo
	if (fd_archivo < 0)
	{
		ft_putstr_fd("Error al abrir el archivo.\n", 2);
		return (1);
	}

	// Escribimos la cadena dentro del archivo
	ft_putstr_fd("Texto guardado con éxito dentro del archivo.\n", fd_archivo);

	// En 42 es obligatorio cerrar siempre los archivos que abras con open()
	close(fd_archivo);

	ft_putstr_fd("Hecho. Revisa el archivo 'prueba_string.txt'.\n", 1);
	return (0);
}
*/