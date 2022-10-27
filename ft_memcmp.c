/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:58:35 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/12 12:27:09 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;
	size_t			i;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_temp[i] == s2_temp[i])
			i++;
		else
			return (s1_temp[i] - s2_temp[i]);
	}
	return (0);
}

// int main(void)
// {
// 	char *s1 = "tzzzzzzzzzvededsfdfre";
//     char *s2 = "zhere";
// 	printf("%i, %i", ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
// 	return (0);
// }