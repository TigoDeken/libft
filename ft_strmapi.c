/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:38:26 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/17 15:49:06 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	*f(unsigned int i, char c)
// {
// 	c = c - 32;
// 	return (c);
// }

// int	main(void)
// {
// 	char	s1[] = "asd";
// 	char	s2[] = "bsd";

// 	printf("%s", ft_strmapi(s1, &f));
// 	return (0);
// }