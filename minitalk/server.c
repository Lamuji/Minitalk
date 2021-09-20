/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:52:26 by rfkaier           #+#    #+#             */
/*   Updated: 2021/09/20 18:00:04 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"


int main()
{
	int pid;
	//signal(SIGUSR1,)
	//signal(SIGUSR2,)
	pid = getpid(); // on recup le pid du process en cours 
	while(1)
	{
		ft_putnbr_fd(pid, 1); // on affiche le pid pour le recup en arguments chez le client
		pause(); // le processus attend
	}
}