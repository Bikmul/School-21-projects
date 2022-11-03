/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_drow_fl_ceil.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtwanda <dtwanda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:37:28 by dtwanda           #+#    #+#             */
/*   Updated: 2022/11/01 16:12:23 by dtwanda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	drow_back(t_img_data *img_data, t_textures *color)
{
	int		pixels_num;
	int		pixel;

	pixels_num = HEIGHT * WIDTH;
	pixel = 0;
	while (pixel < pixels_num / 2)
	{
		put_pixel(pixel % WIDTH, pixel / WIDTH,
			img_data, color->ceilling_color);
		pixel++;
	}
	while (pixel < pixels_num)
	{
		put_pixel(pixel % WIDTH, pixel / WIDTH, img_data, color->floor_color);
		pixel++;
	}
}
