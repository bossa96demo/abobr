#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

void wcenter(WINDOW *win, int row, char *title);// to center text in given window 
void open_start();				// to open start window
void open_prompt();				// to open prompt
void open_website();				//
void set_url(char *str);			// set url to given string
char *get_url();				// get url

WINDOW *start, *prompt, *website;		// create start and prompt windows
char *url;