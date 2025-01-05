internal void
simulate_game(Input* input) {
	clear_screen(0xff55010);

	if (input->buttons[BUTTON_UP].is_down)
		draw_rect(0, 0, 0.2, 0.2, 0x00ff22);
}