/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:25:25 by tdeken            #+#    #+#             */
/*   Updated: 2022/10/25 16:34:06 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (*str)
	{
		if (*str != c && check == 0)
		{
			check = 1;
			i++;
		}
		else if (*str == c)
			check = 0;
		str++;
	}
	return (i);
}

static void	*free_split(char **split, int count)
{
	while (count--)
	{
		free(split[count]);
	}
	free(split);
	return (NULL);
}

size_t	sub_str_len(const char *s, size_t i, char c)
{
	size_t	count;

	count = 0;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	split[count_words(s, c)] = NULL;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			split[j++] = ft_substr(s, i, sub_str_len(s, i, c));
			if (!split[j - 1])
				return (free_split(split, j - 1));
			i += sub_str_len(s, i, c);
		}
	}
	return (split);
}

// int	main(void)
// {
// 	char str[] = "  Heyyy   hey";
// 	printf("%p", ft_split(str, ' '));
// 	return (0);
// }