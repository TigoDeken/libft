/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:39:20 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/14 10:57:40 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	len;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	len = 0;
	i = 0;
	if (size > len_dst)
		len = len_src + len_dst;
	else
		len = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char 	dst[] = "Hello ";
// 	char 	src[] = "there!";

// 	printf("%lu, %lu", ft_strlcat(dst, src, 7), strlcat(dst, src, 7));
// 	return (0);
// }