
#include <linux/changeSched.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


main(){

	int sched_choice;
	
	printf("1--Default Scheduler\n2--Stride Scheduler\n");
	scanf("%d", &sched_choice);
	
	changeSched(sched_choice);
}

