/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:52:26 by rfkaier           #+#    #+#             */
/*   Updated: 2021/09/29 18:15:04 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signum)
{
	static char	c = 0;
	static int	i = 0;

	if (signum == SIGUSR1)
		c |= (1 << i);
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	act;
	pid_t				pid;

	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask, pid);
	act.sa_flags = 0;
	act.sa_handler = handler;
	pid = getpid();
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	ft_putnbr_fd(pid, 1);
	write(1, " ", 1);
	while (1)
		pause();
	return (0);
}
