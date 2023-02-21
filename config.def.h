/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12"
};
static const unsigned int alpha = 0xe0;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                           fg         bg       */
	[SchemeNorm]            = { "#f8f8f2", "#282a36" },
	[SchemeSel]             = { "#f8f8f2", "#6272a4" },
	[SchemeOut]             = { "#000000", "#00ffff" },
	[SchemeNormHighlight]   = { "#bd93f9", "#282a36" },
	[SchemeSelHighlight]    = { "#bd93f9", "#6272a4" },
	[SchemeOutHighlight]    = { "#000000", "#00ffff" },
	[SchemeHp]              = { "#bbbbbb", "#333333" },
};
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm]            = { OPAQUE, alpha },
	[SchemeSel]             = { OPAQUE, alpha },
	[SchemeOut]             = { OPAQUE, alpha },
	[SchemeNormHighlight]   = { OPAQUE, alpha },
	[SchemeSelHighlight]    = { OPAQUE, alpha },
	[SchemeOutHighlight]    = { OPAQUE, alpha },
	[SchemeHp]              = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
