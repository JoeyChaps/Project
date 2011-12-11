#include "cma.h"
#include <stdlib.h>

int main(int argc, char * argv[]) {
        int i;
	int size = atoi(argv[1]);
        void *p = malloc(size);
        class_memory(p,size); // give it memory allocator
	int n = 1;
	
	do
	{
		p = class_malloc(n);
		n <<= 1;

	}while (p);

        class_stats();

	return 0;
}

