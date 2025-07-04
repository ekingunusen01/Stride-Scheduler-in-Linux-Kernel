#include <linux/changeSched.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <asm/current.h>
#include <asm/uaccess.h>

int schedValue = 1;

asmlinkage int sys_changeSched(int flag){
	schedValue = flag;
}
