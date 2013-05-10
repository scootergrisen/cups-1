/*
 * "$Id$"
 *
 *   Debugging macros for the Common UNIX Printing System (CUPS).
 *
 *   Copyright 2007-2008 by Apple Inc.
 *   Copyright 1997-2005 by Easy Software Products.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Apple Inc. and are protected by Federal copyright
 *   law.  Distribution and use rights are outlined in the file "LICENSE.txt"
 *   which should have been included with this file.  If this file is
 *   file is missing or damaged, see the license at "http://www.cups.org/".
 *
 *   This file is subject to the Apple OS-Developed Software exception.
 */

#ifndef _CUPS_DEBUG_H_
#  define _CUPS_DEBUG_H_

/*
 * The debug macros are used if you compile with DEBUG defined.
 *
 * Usage:
 *
 *   DEBUG_puts("string")
 *   DEBUG_printf(("format string", arg, arg, ...));
 *
 * Note the extra parenthesis around the DEBUG_printf macro...
 */

#  ifdef DEBUG
#    define DEBUG_puts(x) _cups_debug_puts(x)
#    define DEBUG_printf(x) _cups_debug_printf x
#  else
#    define DEBUG_puts(x)
#    define DEBUG_printf(x)
#  endif /* DEBUG */


/*
 * Prototypes...
 */

extern int	_cups_debug_fd;
extern void	_cups_debug_printf(const char *format, ...)
#ifdef __GNUC__
__attribute__ ((__format__ (__printf__, 1, 2)))
#endif /* __GNUC__ */
;
extern void	_cups_debug_puts(const char *s);


#endif /* !_CUPS_DEBUG_H_ */

/*
 * End of "$Id$".
 */