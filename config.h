/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int horizpadbar = 6;                 /* horizontal padding */
static int vertpadbar = 6;                  /* vertical padding */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCodeNerdFont:pixelsize=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#f0f6fc", "#151b23" },
	[SchemeSel]  = { "#f0f6fc", "#1f6feb" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
