#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {

    // Print initial syscall count
    printf("i am zuha aqib\n");
    printf("Initial syscall count: %d\n", count());
    sleep(1);

    // Make some system calls
    if (fork() == 0) {
        printf("child, pid = %d. \n", getpid());
	exit(0);
    } else {
	wait(0);
	printf("parent, pid = %d. \n", getpid());
    }

    // Print final syscall count
    printf("hello world\n");\
    printf("Final syscall count: %d\n", count());
    sleep(1);
    exit(0);
}

