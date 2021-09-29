/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:08:51 by rfkaier           #+#    #+#             */
/*   Updated: 2021/09/29 18:08:57 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	print_err(int argc, char *argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_putstr_fd("The program needs 2 args : PID & string\n", 1);
		return (0);
	}
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
		{
			ft_putstr_fd("1st arg [PID] must be a number.\n", 1);
			return (0);
		}
		i++;
	}
	return (1);
}

void	send_chars(pid_t pid, char ch)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((ch >> i) & 1)
		{
			usleep(100);
			kill(pid, SIGUSR1);
		}
		else
		{
			usleep(100);
			kill(pid, SIGUSR2);
		}
		usleep(50);
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	if (print_err(argc, argv[1]) == 0)
		return (0);
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		send_chars(pid, argv[2][i]);
		i++;
	}
	return (0);
}
