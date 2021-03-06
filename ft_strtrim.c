/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:42:29 by mide-sou          #+#    #+#             */
/*   Updated: 2022/03/11 15:48:43 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/* int   main(void)
{
    char    *str1 = "56abc1deabcdeb1b874"; //27
    char    *str2 = "123456789"; //18
    char    *dest;
    dest = ft_strtrim(str1, str2);
    printf("%s", dest);
} */