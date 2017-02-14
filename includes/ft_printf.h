/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:05:18 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/08 17:11:42 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define OPT "-+ #0"
# define CONVERS "sSpdDioOuUxXcC"
# define LENGTH "hhhllljz"

int					ft_printf(const char *str, ...);

typedef struct		s_args
{
	size_t		prec;
	size_t		width;
	char		length[1000];
	char		option[50];
	char		convers;
	int			ret;
	int			len_form;
	int			val_ret;

	long long	decimal;
	char		*s;
	char		*print;
}					t_args;

t_args				g_sarg;

void 				ft_convert_p(va_list args);
int					ft_put_printf(void);
void				ft_resolve_zero(char *tmp);
void				ft_resolve_dec2(char *tmp);
int					convert_format_2(va_list args);
void				ft_convert_o(va_list args);
void				ft_parsing(char *str, int i);
int					ft_get_option(char *str, int i);
void				ft_convert_c(char *tmp, va_list args, char *str);
void				ft_job_for_x(va_list args, char *tmp);
void				ft_resolve_width_x(char *tmp);
void				ft_convert_length_x(va_list args);
void				ft_resolve_oneperc(char *str);
void				ft_ret_value();
void				ft_delete_neg();
void				ft_resolve_width_octal(char *tmp);
void				ft_resolve_width(void);
void				ft_convert_char(va_list args);
void				ft_convert_format_x(va_list args);
void				ft_resolve_dec(void);
int					ft_parse_params(char *str, va_list args);
int					ft_parse_width(char *str, int i);
int					ft_parse_prec(char *str, int i);
int					ft_parse_length(char *str, int i);
int					ft_parse_convers(char *str, int i);
void				ft_resolve_option(va_list args);
int					ft_parse_printf(char *str);
void				ft_resolve_str(char *str);
void				ft_check_convers(va_list args, char *str);
void				ft_len_form(char *str, int i);
void				ft_double_percent(char *str, int i);
void				ft_convert_hexa(void);
void				ft_convert_d(va_list args);
int					ft_convert_format(va_list args);
void				ft_convert_u(va_list args);

#endif
