/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 21:41:43 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 22:39:20 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	borrar_texto(void *contenido)
{
	printf("[del] Libera el content de la memoria: \"%s\"\n", (char *)contenido);
	free(contenido); // Como se crea con malloc/strdup, hay que hacerle free
}

int	main(void)
{
	// 1. Creamos un texto dinámico en el heap usando strdup (necesita free)
	char *texto = strdup("Mercancía valiosa de 42");

	// 2. Creamos el nodo metiendo ese texto dentro
	t_list *nodo = ft_lstnew(texto);
	
	if (!nodo)
		return (1);

	printf("--- ANTES DE BORRAR ---\n");
	printf("Dirección del nodo en la RAM: %p\n", nodo);
	printf("Contenido del nodo:           %s\n\n", (char *)nodo->content);

	printf("--- EJECUTANDO FT_LSTDELONE ---\n");
	// Pasamos nodo y el nombre de nuestra función 'borrar_texto' SIN paréntesis.
	// Pasamos la dirección de la función y ft_lstdelone la ejecute por dentro.
	ft_lstdelone(nodo, borrar_texto);

	printf("\n--- DESPUÉS DE BORRAR ---\n");
	printf("Nodo y contenido del borrados de la RAM de forma segura.\n");

	return (0);
}
*/