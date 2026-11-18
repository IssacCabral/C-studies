#ifndef LINE_H
#define LINE_H

#define MAXLINE 1000 /* maximum input line size */

extern int max;               /* maximum length seen so far */
extern char line[MAXLINE];    /* current input line */
extern char longest[MAXLINE]; /* longest line saved here */

int get_line();
void copy();

#endif
