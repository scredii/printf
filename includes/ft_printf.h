/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:05:18 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/08 17:09:16 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

# define OCTAL "01234567"
# define HEXA "0123456789abcdef"
# define HEXAM "0123456789ABCDEF"
# define CONV g_sarg.convers
# define OPT "-+ #0"
# define CONVERS "sSpdDioOuUxXcC"
# define LENGTH "hhhllljz"

int					ft_printf(const char *str, ...);

typedef struct		s_args
{
	size_t		prec;
	size_t		width;
	char		*length;
	char		*option;
	char		convers;
	int			ret;
	int			len_form;
	int			val_ret;

	long long	decimal;
	char		*s;
	char		*print;
}					t_args;

t_args				g_sarg;

void				ft_clean(void);
void				ft_end_percent(char *str);
void 				ft_O(va_list args);
void 				ft_convert_p(va_list args);
int					ft_put_printf(void);
void				ft_resolve_zero(char *tmp);
void				ft_resolve_dec2(char *tmp);
int					convert_format_2(va_list args);
void				ft_convert_o(va_list args);
void				ft_parsing(char *str, int i);
int					ft_get_option(char *str, int i);
void				ft_convert_c(char *tmp, va_list args);
void				ft_job_for_x(va_list args, char *tmp);
void				ft_resolve_width_x(char *tmp);
void				ft_convert_length_x(va_list args);
void				ft_resolve_oneperc(void);
void				ft_ret_value();
void				ft_delete_neg();
void				ft_resolve_width_octal(char *tmp);
void				ft_resolve_width(void);
void				ft_convert_char(va_list args);
void				ft_convert_format_x(va_list args);
void				ft_resolve_dec(void);
int					ft_parse_params(char *str, va_list args);
int					ft_parse_prec(char *str, int i);
int					ft_parse_length(char *str, int i);
int					ft_parse_convers(char *str, int i);
void				ft_resolve_option(va_list args);
int					ft_parse_printf(char *str);
void				ft_resolve_str(void);
void				ft_check_convers(va_list args);
void				ft_len_form(char *str, int i);
void				ft_double_percent(char *str, int i);
void				ft_convert_hexa(void);
void				ft_convert_d(va_list args);
int					ft_convert_format(va_list args);
void				ft_convert_u(va_list args);

void				ft_format_o(va_list args);
char				*ft_uitoa(uintmax_t n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t len);
char				*ft_imtoa_base(uintmax_t value, uintmax_t base);
int					ft_isdigit(int c);
char				*ft_itoa_base(uintmax_t n, char *s, int base);
char				*ft_itoa(intmax_t n);
char				*ft_lltoa_base(long long value, int base);
char				*ft_ltoa(long n);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_strdel(char **as);
char				*ft_strjoinfree(char *s1, char *s2, int free1, int free2);
size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
char				*ft_strchr(const char *s, int c);
void				ft_putchar(char c);
char				*ft_strjoin(char const *s1, char const *s2);
void				*ft_memset(void *s, int c, size_t len);
char				*ft_strdup(const char *s1);
void				*ft_memalloc(size_t size);
char				*ft_lltoa(long long n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
char				*ft_ltoa_base(long int value, int base);
int					ft_toupper(int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *s1, const char *s2);
int					ft_strcmp(const char *s1, const char *s2);
#endif
