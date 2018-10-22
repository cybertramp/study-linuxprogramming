/* SIG Alaram을 부른 프로세스에게 보내짐 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<signal.h>

void clock_tick(int signo){
	printf("\r%ld", time(NULL));
	alarm(1);
}

int main(void){
	setvbuf(stdout, NULL,_IONBF,BUFSIZ);	// screen fast viewing
	printf("\e[2J\e[H");					// screen clean

	if(signal(SIGALRM, clock_tick) == SIG_ERR)
		perror("can't catch SIGALRM");
	clock_tick(-1);
	alarm(1);
	for(;;)
		pause();
	exit(EXIT_SUCCESS);
}
