static const char norm_fg[] = "#fffdf1";
static const char norm_bg[] = "#0f0f0f";
static const char norm_border[] = "#282828";

static const char sel_fg[] = "#fffdf1";
static const char sel_bg[] = "#4a7c59";
static const char sel_border[] = "#fffdf1";

static const char urg_fg[] = "#fffdf1";
static const char urg_bg[] = "#f05365";
static const char urg_border[] = "#f05365";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
