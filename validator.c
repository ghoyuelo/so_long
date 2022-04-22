/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyuelo <ghoyuelo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:04:21 by ghoyuelo          #+#    #+#             */
/*   Updated: 2022/04/20 19:31:49 by ghoyuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "so_long.h"

static int	count_char(char c, char comp)
{
	if (c == comp)
		return (1);
	if (c == comp)
		return (1);
	if (c == comp)
		return (1);
	return (0);
}

static int	check_min_pos(char **map)
{
	int	e;
	int	c;
	int	p;
	int	i;
	int	j;

	i = 0;
	e = 0;
	c = 0;
	p = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			e += count_char(map[i][j], 'E');
			p += count_char(map[i][j], 'P');
			c += count_char(map[i][j], 'C');
			j++;
		}
		i++;
	}
	if (e > 0 && c > 0 && p > 0)
		return (1);
	return (0);
}

static int	map_validator_aux(char **lines)
{
	if (!check_rectangle(lines))
	{
		printf("Error\n");
		printf("Map is not rectangle\n");
		return (0);
	}
	if (!check_chars(lines))
	{
		printf("Error\n");
		printf("Map has invalid chraracters\n");
		return (0);
	}
	if (!closed_map(lines))
	{
		printf("Error\n",);
		printf("Map is not closed\n");
		return (0);
	}
	if (!check_min_pos(lines))
	{
		printf("Error\n",);
		printf("Map needs at least an 'C', 'P' and 'E'\n");
		return (0);
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

char	**ft_map_validator(char *argv)
{
	char	*file;
	char	**lines;

	if (!ft_extension_validator(argv))
		return (NULL);
	file = ft_read_file(argv, 0);
	lines = ft_split(file, '\n');
	free(file);
	if (map_validator_aux(lines) == 0)
		return (NULL);
	printf("Map correct\n");
	return (lines);
}
