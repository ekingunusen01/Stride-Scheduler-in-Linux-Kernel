
#include <linux/setTicket.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    int ticket = atoi(argv[1]);

    setTicket(ticket);

    while (1) {

    }

    return 0;
}