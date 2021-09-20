/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:52:28 by rfkaier           #+#    #+#             */
/*   Updated: 2021/09/20 17:52:29 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"


int main(int argc, char **argv)
{
	pid_t pid; // le num identifiant du processus serveur.
	int i; // compteur qui sera utile pour envoyer les char.

	pid = ft_atoi(argv[1]);

	// ici viendra une fonction pour envoyer des chars,
	//	dans laqelle pour se faire il faudra utiliser une 
	//	autre fonciton de decalage de bit, et la fonction kill

	//printf("%d", pid);
	return 0;
}
