/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:19:48 by zvakil            #+#    #+#             */
/*   Updated: 2023/07/29 19:19:49 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(1, '\n', 1);
}