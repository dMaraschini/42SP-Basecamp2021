/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:56:28 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/12 00:31:50 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int str_len;
	int j;

	str_len = 0;
	j = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	while (src[j] != '\0')
	{
		dest[str_len] = src[j];
		str_len++;
		j++;
	}
	dest[str_len] = '\0';
	return (dest);
}
