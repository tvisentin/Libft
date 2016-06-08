/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 17:44:32 by tvisenti          #+#    #+#             */
/*   Updated: 2016/06/08 08:15:04 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void		pf_ft_putwstr(wchar_t *ws)
{
	size_t	len;

	len = ft_wstrlen(ws);
	while (len > 0)
	{
		ft_putwchar(*ws, f);
		ws++;
		len--;
	}
}
