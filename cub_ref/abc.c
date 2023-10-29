#include "mlx_linux/mlx.h"
// #include <X11/Xlib.h>
#include <stdio.h>

// typedef struct wtf {
// 	int a;
// }	t_wtf;

// int main_loop(t_wtf *ptr) {
// 	(void)ptr;
// 	return (0);
// }

// int key_press(int keysym, t_wtf *ptr)	{
// 	(void)ptr;

// 	printf("%d\n", keysym);
// }

// int main()	{
// 	void	*mlx;
// 	void	*win;
// 	t_wtf	addr;

// 	mlx = mlx_init();
// 	win = mlx_new_window(mlx, 1000, 750, "mlx");

// 	mlx_loop_hook(mlx, &main_loop, &addr);
// 	mlx_hook(win, 02, 0, &key_press, &addr);

// 	mlx_loop(mlx);
// }

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	printf("%d\n", keycode);
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 640, 480, "Hello world!");
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}