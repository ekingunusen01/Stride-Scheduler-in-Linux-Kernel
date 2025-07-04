#include <linux/setTicket.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <asm/current.h>
#include <asm/uaccess.h>

asmlinkage int sys_setTicket(int ticket){
	
	current->ticket = ticket;

    printk(KERN_INFO "changeSched: Process '%s' (pid=%d) ticket set to %d\n",
           current->comm, current->pid, ticket);

    return 0;
}
