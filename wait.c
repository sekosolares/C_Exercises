#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
	int pid = fork();
	
	if (pid) {
		printf("Luke soy tu padre! Mi pid es %d y tu pid es %d\n", getpid(), pid);
		
		wait( NULL );
		printf("Soy tu padre... De nuevo\n");
	} else {
		printf("Soy Luke! Mi pid es %d\n", getpid());
		sleep(2);
	}
	
	while(1);
	
	return 0;
}
