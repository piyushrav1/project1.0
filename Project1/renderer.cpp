

internal void 
clear_screen(u32 color) {
	for (int y = 0; y < render_state.height; y++) {
		for (int x = 0; x < render_state.width; x++) {
			u32* pixel = (u32*)render_state.memory + x + y * render_state.width;
			*pixel = color;
		}
	}

}



internal void 
draw_rect_in_pixels(int x, int y, int width, int height, u32 color) {

	x = clamp(0, x, render_state.width);
	y = clamp(0, y, render_state.height);
	width = clamp(0, width, render_state.width - x);
	height = clamp(0, height, render_state.height - y);

	for (int y0 = y; y0 < y + height; y0++) {
		for (int x0 = x; x0 < x + width; x0++) {
			u32* pixel = (u32*)render_state.memory + x0 + y0 * render_state.width;
			*pixel = color;
		}
	}
}

internal void
draw_rect(float x, float y, float half_size_x, float half_size_y,u32 color) {

	//change to pixels
	x *= render_state.height;
	y *= render_state.height;
	half_size_x *= render_state.height;
	half_size_y *= render_state.height;

	x += render_state.width / 2.f;
	y += render_state.height / 2.f;

	int x0 = x - half_size_x;
	int y0 = y - half_size_y;
	int x1 = x + half_size_x;
	int y1 = y + half_size_y;

	draw_rect_in_pixels(x0, y0, x1 - x0, y1 - y0, color);
}
