/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:38:36 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/12 18:42:19 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"
// t_dict parse_line

char	*ft_str_trim(char *str)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*trim;

	start = 0;
	i = 0;
	end = ft_strlen(str);
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	len = end - start;
	trim = malloc(sizeof(char) * len);
	if (!trim)
		return (NULL);
	while (i < len)
		trim[i] = str[start + i];
	trim[len] = '\0';
	return (trim);
}

char	**ft_split_lines(char *str)
{
	int	i;
	int	j;
	int line;
	
}