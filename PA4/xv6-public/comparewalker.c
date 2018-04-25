#include "types.h"
#include "user.h"
#include "syscall.h"

#include "types.h"
#include "user.h"

int
main(int argc, char *argv[]){
	if(compareWalker() == -1){
		printf(1,"Nothing allocated\n\n");
	}
	exit();
}
