/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:22:36 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/24 15:07:47 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, needle_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *haystack = "Helllo there!";
//     char *needle = "ere!";
//     printf("%s, %s", ft_strnstr(haystack, needle, 10)
//		, ft_strnstr(haystack, needle, 10));
//     return (0);
// }