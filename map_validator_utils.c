/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validator_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:29:09 by ghoyuelo          #+#    #+#             */
/*   Updated: 2022/04/20 19:31:46 by ghoyuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "so_long.h"

int	check_rectangle(char **file)
{
	int		i;
	size_t	max_len;

	max_len = ft_strlen(file[1]);
	i = 1;
	while (file[i])
	{
		if (max_len != ft_strlen(file[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_extension(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (str[len] == 'r' && str[len - 1] == 'e'
		&& str[len - 2] == 'b' && str[len - 3] == '.')
		return (1);
	return (0);
}

int	check_chars(char **map)
{
	int	i;
	int	j;

	j = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (!(map[j][i] == '0' || map[j][i] == '1' || map[j][i] == '\n'
				|| map[j][i] == 'C' || map[j][i] == 'E' || map[j][i] == 'P'))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

void	free_string_array(char **lines)
{
	int	i;

	i = 0;
	while (lines[i] != NULL)
	{
		free(lines[i]);
		i++;
	}
	free(lines);
}

int	closed_map(char **lines)
{
	int	i;
	int	j;

	i = 0;
	while (lines[i])
	{
		if (i == 0 || lines[i + 1] == NULL)
		{
			j = 0;
			while (lines[i][j])
			{
				if (lines[i][j] != '1')
					return (0);
				j++;
			}
		}
		else
		{
			if (lines[i][0] != '1' || lines[i][ft_strlen(lines[i]) - 1] != '1')
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_extension_validator(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (str[len] == 'r' && str[len - 1] == 'e'
		&& str[len - 2] == 'b' && str[len - 3] == '.')
		return (1);
	return (0);
}
