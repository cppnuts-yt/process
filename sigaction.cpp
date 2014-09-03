#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

using namespace std;

#define MAXLINE 128
void sig_alarm(int signo);

int main (){
	int n;
	char line [MAXLINE];
	struct sigaction act;
	memset (&act, 0, sizeof(act));
	act.sa_handler = &sig_alarm;
	act.sa_flags = SA_RESTART;
	if ((sigaction(SIGINT, &act, NULL)) < 0)	{
		cout <<"The sigact function returned an error" << endl;	exit (1);
	}
	//alarm (1);
	for (;;)	{
		cout << "cin returned an error" << endl;
	}
	//alarm(1);
	cout << line << endl;
	//sleep(2);
	exit(0);
}

void sig_alarm(int signo)  {
	cout << " ### We got the alarm signal!! ###" << signo << endl;
}
