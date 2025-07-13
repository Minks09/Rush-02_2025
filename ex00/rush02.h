/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:03:00 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/12 14:12:22 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H


# include <unistd.h>// write
# include <stdlib.h> // malloc free
# include <fcntl.h> //open read close

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;


/********ERROR.c*********/
int		valid_number(char *str);
void	wr_error(int i);
void	wr_dict_error(void);
#endif