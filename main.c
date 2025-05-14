#include <stdio.h>
#include <unistd.h>     // for getpid()
#include <sys/utsname.h> // for uname()

int main() {
    // Get and print current process ID
    pid_t pid = getpid();
    printf("Current Process ID: %d\n", pid);

    // Get system information
    struct utsname sys_info;
    if (uname(&sys_info) == 0) {
        printf("System Name: %s\n", sys_info.sysname);
        printf("Node Name  : %s\n", sys_info.nodename);
        printf("Release    : %s\n", sys_info.release);
        printf("Version    : %s\n", sys_info.version);
        printf("Machine    : %s\n", sys_info.machine);
    } else {
        perror("uname");
        return 1;
    }

    return 0;
}
