struct Button_State
{
	bool is_down;
	bool changed;
};

enum
{
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_LEFT,
	BUTTON_RIGHT,
};

struct Input
{
	Button_State buttons[4];
};