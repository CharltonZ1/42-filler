/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:21:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/23 17:58:14 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	ft_take_map(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	j = env->map.y;
	if (!(env->map.map))
		env->map.map = ft_strnew_two(env->map.x, env->map.y);
	get_next_line(0, &env->line);
	while (j--)
	{
		get_next_line(0, &env->line);
		if (ft_isdigit(*env->line))
			env->map.map[i++] = ft_strdup(env->line + 4);
	}
	return (0);
}