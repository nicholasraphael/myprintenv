#include <stdio.h>

int main(int argc, char const *argv[], char *envp[])
{
	int i;
	for (i = 0; envp[i] != NULL; i++) {
		printf("%s\n", envp[i]);
	}
	return 0;
}