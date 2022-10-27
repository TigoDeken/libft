/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:43:17 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/19 11:07:33 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "teste";

// 	printf("%s, %s", ft_strchr(s, 1024), strchr(s, 1024));
// 	return (0);
// }