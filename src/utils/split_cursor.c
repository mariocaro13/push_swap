/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_cursor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:32:16 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/02/10 19:43:44 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	is_empty(char *str)
{
	bool	is_all_empty;
	int		index;

	index = 0;
	is_all_empty = true;
	while (str && str[index] && str[index] != '\0')
	{
		if (ft_isdigit(str[index]))
			is_all_empty = false;
		index++;
	}
	if (is_all_empty)
		ft_free_errors(NULL, NULL, NULL);
}

static int	ft_count_words(char *str, char c)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == c && *str)
			str++;
		while (*str != c && *str && *str)
		{
			if (!inside_word)
			{
				inside_word = true;
				count++;
			}
			str++;
		}
	}
	return (count);
}

static char	*ft_get_next_word(char *str, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			index;

	len = 0;
	index = 0;
	while (str[cursor] == c)
		cursor++;
	while ((str[cursor + len] != c) && str[cursor + len])
		len++;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((str[cursor] != c) && str[cursor])
		next_word[index++] = str[cursor++];
	next_word[index] = '\0';
	return (next_word);
}

char	**ft_split_cursor(char *str, char c)
{
	char		**result;
	int			words_count;
	int			index;

	is_empty(str);
	index = 0;
	words_count = ft_count_words(str, c);
	if (words_count <= 0)
		return (NULL);
	result = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result)
		return (NULL);
	result[index] = malloc(sizeof(char));
	if (!result[index])
		return (NULL);
	result[index++][0] = '\0';
	while (words_count-- > 0)
	{
		result[index] = ft_get_next_word(str, c);
		if (!result[index])
			return (NULL);
		index++;
	}
	result[index] = NULL;
	return (result);
}
