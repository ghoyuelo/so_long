/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:48:07 by ghoyuelo          #+#    #+#             */
/*   Updated: 2022/04/20 19:31:56 by ghoyuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_extension(char *str)
{
	int	len;

	if (!ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])))
	{
		printf("Error.\nThe file extension is no correct.\n");
		printf("Put: ./so_long [MAP].ber\n", 1);
		exit (1);
	}
	if (argv[1] == 0)
	{
		printf("Error.\nThe file doesn´t exist.\n");
		printf("Put: ./so_long [MAP].ber\n", 1);
		exit (1);
	}	
	return (0);
}

void	ft_check_arguments(int argc)
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			printf("Error.\n");
			printf("Insufficient arguments!\n");
			exit (1);
		}
		if (argc > 2)
		{
			printf("Error.\n");
			printf("Too many  arguments!\n");
			exit (1);
		}
	}
	printf("Put: ./so_long [MAP].ber\n", 1);
	return (0)
	}
}
