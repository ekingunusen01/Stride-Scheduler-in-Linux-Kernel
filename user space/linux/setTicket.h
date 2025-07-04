#ifndef __LINUX_SETTICKET_H
#define __LINUX_SETTICKET_H
#include <linux/linkage.h>
#include <linux/types.h>
#include <linux/unistd.h>
#include <errno.h>
#endif

extern int errno;
_syscall1(int, setTicket, int, ticket);
