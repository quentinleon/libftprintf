/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:29:02 by qleon             #+#    #+#             */
/*   Updated: 2019/08/20 21:00:58 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRBUILDER_H
# define FT_STRBUILDER_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_str {
	char		*str;
	size_t		size;
	size_t		len;
}				t_str;

t_str			*new_string(void);
void			append(t_str *str, char *addition);
void			append_len(t_str *str, char *addition, int len);

#endif
