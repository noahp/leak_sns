
//
// console.h
// Header file for console.
//

#if !defined(CONSOLE_H)
#define CONSOLE_H

#include <stdint.h>

//
//  getstr_fxn_ptr - read a string from console input, null termininated
typedef int (*getstr_fxn_ptr)(char *);

//
// putstr_fxn_ptr - put a string to console output, null terminated, max length
//  set by second arg. int returns qty of characters put to output.
typedef int (*putstr_fxn_ptr)(const char *, int);

void console_set_inout(getstr_fxn_ptr getstr, putstr_fxn_ptr putstr);
void console(void);

#endif // CONSOLE_H
