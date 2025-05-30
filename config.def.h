/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static const char black[]       = "#1e1d2d"; // Matches your original black
static const char base[]        = "#eff1f5"; // Latte Base
static const char textCol[]        = "#4c4f69"; // Latte Text
static const char gray2[]       = "#6c6f85"; // Using Latte Subtext0 for a lighter gray
static const char gray3[]       = "#8c8fa1"; // Using Latte Overlay1 for a medium gray
static const char gray4[]       = "#acb0be"; // Using Latte Surface2 for a lighter gray
static const char blue[]        = "#1e66f5"; // Latte Blue
static const char green[]       = "#40a02b"; // Latte Green
static const char red[]         = "#d20f39"; // Latte Red
static const char orange[]      = "#fe640b"; // Latte Peach (closest match)
static const char yellow[]      = "#df8e1d"; // Latte Yellow
static const char pink[]        = "#ea76cb"; // Latte Pink
static const char peach[]       = "#fe640b"; // Latte Peach
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"ComicShannsMono Nerd Font Mono:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { textCol, base },
	[SchemeSel] = { base, peach },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
