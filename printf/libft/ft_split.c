/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:02:18 by mokariou          #+#    #+#             */
/*   Updated: 2024/10/18 11:01:59 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_tab(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	count_da(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*dup_it(char *word, char const *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		word[j] = s[i - len];
		j++;
		len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**split2(char const *s, char c, char **s2, int words)
{
	int	i;
	int	word;
	int	len;

	i = 0;
	word = 0;
	len = 0;
	while (word < words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (len + 1));
		if (!s2[word])
			return (free_tab(s2, word));
		dup_it(s2[word], s, i, len);
		len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	words;

	if (!s)
		return (0);
	words = count_da(s, c);
	s2 = (char **)malloc(sizeof(char *) * (words + 1));
	if (!s2)
		return (0);
	s2 = split2(s, c, s2, words);
	return (s2);
}

// #include "libft.h"
// #include <stdio.h>
//
// void run_test(const char *input, char sep) {
//     char **result = ft_split(input, sep);
//     if (!result) {
//         printf("ft_split(%s, %c) returned NULL 
//				(expected for invalid input).\n", input, sep);
//         return;
//     }
//     for (int i = 0; result[i]; i++) {
//         printf("Result[%d]: %s\n", i, result[i]);
//         free(result[i]); // Free each allocated string
//     }
//     free(result); // Free the array of strings
// }
//
// int main() {
//     // Test cases that can cause segmentation faults or errors

//     // 1. NULL string
//     run_test(NULL, ' '); // Expect NULL
//
// //     // 2. Empty string
// //     run_test("", ' '); // Expect an empty array
//
// //     // 3. String with only separators
// //     run_test("~~~~~", '~'); // Expect an empty array
//
//     // 4. String with multiple separators at the beginning
//     run_test("~~~~hello~~~~world~~~~", '~'); // Expect ["hello", "world"]
//
//     // 5. String with multiple separators at the end
//     run_test("hello~~~world~~~~", '~'); // Expect ["hello", "world"]
//
//     // 6. String with single character
//     run_test("A", 'A'); // Expect [""]
//
//     // 7. Separator character is empty
//     run_test("abc", '\0'); // Undefined behavior
//
//     // 8. Very long string
//     char long_string[1000];
//     ft_memset(long_string, 'a', 999);
//     long_string[999] = '\0';
//     run_test(long_string, 'a'); // Expect []
//
//     // 9. Separator that does not exist in the string
//     run_test("hello world", ','); // Expect ["hello world"]
//
//     // 10. String with only one word
//     run_test("singleword", ' '); // Expect ["singleword"]
//
//     // 11. String with separators only
//     run_test(" ", ' '); // Expect []
//
//     // 12. Large number of separators
//     run_test(",,,,,,,,,,,,,,,,,,,,", ','); // Expect []
//
// //     // 13. String with leading spaces
// //     run_test("   leading spaces", ' '); // Expect ["leading", "spaces"]
//
// //     // 14. String with trailing spaces
// //     run_test("trailing spaces   ", ' ');
// }