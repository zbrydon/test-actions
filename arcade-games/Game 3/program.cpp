#include "splashkit.h"

int main()
{
	open_window("Example Game",600,400);
	while(!quit_requested() && !key_typed(ESCAPE_KEY))
	{
		clear_screen(COLOR_DEEP_PINK);
		refresh_screen(60);
		process_events();
        // Update
	}

    return 1;
}
