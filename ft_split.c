/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varibeir <varibeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:25:39 by varibeir          #+#    #+#             */
/*   Updated: 2024/04/29 15:22:25 by varibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

char	*word_aloc(const char *str, char c)
{
	char	*dest;
	int		word_len;
	int		i;

	i = -1;
	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	dest = (char *)malloc(word_len + 1);
	if (!dest)
		return (NULL);
	while (++i < word_len)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

void	*free_str(char **dest, int i)
{
	while (i >= 0)
		free(dest[i--]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	i = 0;
	dest = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			dest[i] = word_aloc(s, c);
			if (!dest[i])
				return (free_str(dest, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	dest[i] = 0;
	return (dest);
}
/* int main()
{
    const char *str = "hello  world";
    char delimiter = ' ';

    // Chama a função ft_split para dividir a string
    char **tokens = ft_split(str, delimiter);

    if (tokens)
	{
        printf("Tokens:\n");
        // Imprime os tokens resultantes
        for (int i = 0; tokens[i] != NULL; i++)
            printf("%s\n", tokens[i]);

        // Libera a memória alocada dinamicamente
        free_str(tokens, count_word(str, delimiter));
    }
	else
        printf("Falha ao dividir a string.\n");
}

se prox for separador ou null +1
	words++
i++; */