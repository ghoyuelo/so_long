/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:54:16 by ghoyuelo          #+#    #+#             */
/*   Updated: 2022/04/21 17:16:31 by ghoyuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "./libft/libft.h"
#include <stdio.h>
#include <mlx.h>

typedef struct s_game 
{
	void	*mlx;
	void	*mlx_win;
	int		map_col;
	int		map_row;
	int		map_tot;
	int		map_x;
	int		map_y;
	char	**map;
	char	*file;
	int		pixel;
	int		coins;
	int		exits;
	int		players;
	int		play_x;
	int		play_y;
	int		player_movements;
	char	*player_dir;
}	t_game

void	ft_check_arguments(int argc);
int		ft_check_extension(char *str);

#endif
