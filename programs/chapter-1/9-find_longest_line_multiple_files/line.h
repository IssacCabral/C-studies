#ifndef LINE_H
#define LINE_H

#define MAXLINE 1000 /* maximum input line size */

/* External variable declarations */
extern int max;               /* maximum length seen so far */
extern char line[MAXLINE];    /* current input line */
extern char longest[MAXLINE]; /* longest line saved here */

/* Function prototypes */
int get_line(void);
void copy(void);

#endif
