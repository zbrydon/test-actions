#include "splashkit.h"

int main()
{
	open_window("TEST Game",600,400);
	while(!quit_requested() && !key_typed(ESCAPE_KEY))
	{
		clear_screen(COLOR_DARK_BLUE);
		refresh_screen(60);
		process_events();
        // Update
	}

    return 1;
}
