const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0f0f", /* black   */
  [1] = "#f05365", /* red     */
  [2] = "#4a7c59", /* green   */
  [3] = "#edd9a3", /* yellow  */
  [4] = "#1d70a2", /* blue    */
  [5] = "#fcf6bd", /* magenta */
  [6] = "#52d1dc", /* cyan    */
  [7] = "#f9ebe0", /* white   */

  /* 8 bright colors */
  [8]  = "#282828",  /* black   */
  [9]  = "#ff5673",  /* red     */
  [10] = "#53ae6e", /* green   */
  [11] = "#ffffb6", /* yellow  */
  [12] = "#1994df", /* blue    */
  [13] = "#ffffc1", /* magenta */
  [14] = "#56ffff", /* cyan    */
  [15] = "#fffdf1", /* white   */

  /* special colors */
  [256] = "#0f0f0f", /* background */
  [257] = "#fffdf1", /* foreground */
  [258] = "#fffdf1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
