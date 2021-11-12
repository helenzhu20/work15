#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int find_index_of_char(char c, char * s) {
	int index;
	char * substring = strchr(s, c);
	index = (int)(substring - s);
	return index;
}

char ** parse_args( char * line ) {
	char ** argv;
	int count = 0
	while(strlen(line) > 0) {
		count++;
		char * a;
		strncpy(a, line, find_index_of_char(' ', line));
		argv[count] = a;
		line = line[findex:]
	}
	return argv;
}

int main(int argc, char *argv[]) {
	printf("argc: %d\nargv: %s, %s, %s, %s\n", argc, argv[0], argv[1], argv[2], argv[3]);
	char * line = strlcat(argv[0] + argv[1]);
	//char ** args = parse_args( line );
	//execvp(args[0], args);
	return 0;
}
