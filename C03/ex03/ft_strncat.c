/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarasqu <dmarasqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:19:11 by dmarasqu          #+#    #+#             */
/*   Updated: 2021/04/12 15:12:17 by dmarasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				str_len;
	unsigned int	j;

	str_len = 0;
	j = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[str_len] = src[j];
		str_len++;
		j++;
	}
	dest[str_len] = '\0';
	return (dest);
}
