#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char * const fecha[] = {"date", "-u", NULL};
	execvp(fecha[0], fecha);
	printf("Llega hasta aca?\n");
	return 0;
}
