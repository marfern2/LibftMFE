/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 21:05:49 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 21:31:15 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 0;
	while (lst != NULL)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}

/*
int	main(void)
{
	t_list	*mi_tren = NULL;
	int		tamano;

	// Caso 1: El tren está vacío
	tamano = ft_lstsize(mi_tren);
	printf("1. Tamaño con el tren vacío: %d vagones\n", tamano);

	// Creamos 3 vagones
	t_list	*vagon1 = ft_lstnew("Contenido A");
	t_list	*vagon2 = ft_lstnew("Contenido B");
	t_list	*vagon3 = ft_lstnew("Contenido C");

	// Caso 2: Metemos un vagón
	ft_lstadd_front(&mi_tren, vagon1);
	printf("2. Tamaño con 1 vagón añadido: %d vagón\n", ft_lstsize(mi_tren));

	// Caso 3: Metemos los otros dos vagones
	ft_lstadd_front(&mi_tren, vagon2);
	ft_lstadd_front(&mi_tren, vagon3);
	printf("3. Tamaño 3 vagones añadidos: %d vagones\n", ft_lstsize(mi_tren));

	// Limpieza de memoria (Obligatorio en 42)
	free(vagon1);
	free(vagon2);
	free(vagon3);

	return (0);
}
*/
