
//
// console.c
// Simple command console.
//

#include "console.h"

// console control structure
typedef struct console_s {
    getstr_fxn_ptr getstr;
    putstr_fxn_ptr putstr;
}console_t console_ctx;

void console_set_inout(getstr_fxn_ptr getstr, putstr_fxn_ptr putstr)
{
    console_ctx.getstr = getstr;
    console_ctx.putstr = putstr;
}

void console(void)
{
}
