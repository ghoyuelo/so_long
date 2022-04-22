/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:51:27 by ghoyuelo          #+#    #+#             */
/*   Updated: 2022/04/20 19:28:51 by ghoyuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_arguments(int argc)
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
	if (argv[1] == 0)
	{
		printf("Error.\nThe file doesn´t exist.\n");
		exit (1);
	}
	return (0);
}


int	main(int argc, char **argv)
{
	t_game	g;

	init struct(&map)
	ft_check_arguments(argc);
	ft_check_extension(argv);
	ft_read_map(argv, &map);
	g.map = ft_map_validator(argv[1]);
	if (!g.map)
		return (0);
	g = init_game(g);

