/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:08:00 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/13 15:22:04 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

t_dict	fill_dict_struct(char *file)
{
	int		fd;
	char	*buff;

	fd = open(file, 0, O_RDONLY);
	if (fd < 0)
		return ();
	
}

int	main(int ac, char **av)
{
	char	*dict_file;
	char	*number_str;

	if (ac == 2)
	{
		number_str = av[1];
		dict_file = "./number.dict";
	}
	else if (ac == 3)
	{
		dict_file = av[1];
		number_str = av[2];
	}
	else
	{
		wr_error(2);
		return (1);
	}
	if ()
	}
	