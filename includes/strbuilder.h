/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbuilder.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:29:02 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 18:25:40 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRBUILDER_H
# define FT_STRBUILDER_H
# include <stdlib.h>
# include "libft.h"

typedef struct	s_str {
	char		*str;
	size_t		size;
	size_t		len;
}				t_str;

t_str			*new_string(void);
void			check_expand(t_str *str, int len);
void			append_str(t_str *str, const char *addition, int len);
void			prepend_chars(t_str *str, char c, int amt);
void			append_chars(t_str *str, char c, int amt);

#endif
