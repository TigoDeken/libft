/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:10:01 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/19 15:53:24 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	first_part;
	size_t	last_part;

	first_part = 0;
	last_part = ft_strlen(s1);
	while (s1[first_part] && ft_set(s1[first_part], set))
		first_part++;
	while (last_part > first_part && ft_set(s1[last_part - 1], set))
		last_part--;
	str = malloc(sizeof(char) * (last_part - first_part + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (first_part < last_part)
		str[i++] = s1[first_part++];
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	const char	str1[] = "cdcbbbbbdcd";
// 	const char	str2[] = "c";

// 	printf("%s", ft_strtrim(str1, str2));
// 	return (0);
// }