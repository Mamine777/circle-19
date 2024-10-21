#include "../so_long.h"
int	ft_action(int keycode, t_data *data);

int	main()
{
	t_data data;

	data.init = mlx_init();
	if (!data.init)
		return (1);
	printf("Running program...\n");
	data.win = mlx_new_window(data.init, 800, 600, "so_long test");
	if (!data.win)
		return (1);
	data.img = mlx_xpm_file_to_image(data.init, "img/npc.xpm", &data.widt_img, &data.heit_img);
	if (!data.img)
		return (1);
	data.player_x = 100;
	data.player_y = 100;
	mlx_put_image_to_window(data.init, data.win, data.img, data.player_x, data.player_y);
	mlx_key_hook(data.win, ft_action, &data);
	mlx_loop(data.init);
	return (0);

}
