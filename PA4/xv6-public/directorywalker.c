#include "types.h"
#include "user.h"

int
main(int argc, char *argv[]){
	if(argc == 1){
		directoryWalker(".");
	}
	/*else{
		if((directoryWalker(argv[0])) == -1){
			cprintf("Invalid path");
		}
	}*/
	else{
		if((directoryWalker(argv[1])) == -1){
			printf(1,"Invalid path\n");
		}
	}
	exit();
}