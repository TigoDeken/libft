/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:07:15 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/18 11:01:06 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;

	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	if (!n || dst_temp == src_temp)
		return (dst);
	while (n-- > 0)
		*dst_temp++ = *src_temp++;
	return (dst);
}

// int	main(void)
// {
// 	char	*dst;
// 	char	*src;

// 	dst = 0;
// 	src = 0;
// 	printf("%s, %s", ft_memcpy(dst, src, 3), memcpy(dst, src, 3));
// 	return (0);
// }
