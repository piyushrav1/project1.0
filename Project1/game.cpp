#define is_down(b) input->buttons[b].is_down
#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)

float player_pos = 0.f;

internal void
simulate_game(Input* input) {
	clear_screen(0xff55010);
	if (pressed(BUTTON_UP)) player_pos += 1.f;

		draw_rect(0, player_pos, 1, 1, 0x00ff22);
}