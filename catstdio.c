#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	int i;
	char buf[65536];	
	for(i = 1; i < argc; i++) {
		FILE *f;
		int c;
	
		f = fopen(argv[i], "r");
		//setvbuf(f, buf, _IOFBF, 65536);
		if (!f) {
			perror(argv[i]);
			exit(1);
		}

		while ((c = fgetc(f)) != EOF){
//			printf("%d\n", c);
			if(putchar(c) < 0) exit(1);
//			printf("\n");
		}
		fclose(f);
	}
	exit(0);
}
