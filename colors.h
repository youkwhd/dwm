static const char norm_fg[] = "#a7bed8";
static const char norm_bg[] = "#020207";
static const char norm_border[] = "#748597";

static const char sel_fg[] = "#a7bed8";
static const char sel_bg[] = "#3b4959";
static const char sel_border[] = "#a7bed8";

static const char urg_fg[] = "#a7bed8";
static const char urg_bg[] = "#583a54";
static const char urg_border[] = "#583a54";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
