#include "types.h"
#include "user.h"
#include "syscall.h"

#include "types.h"
#include "user.h"

int
main(int argc, char *argv[]){


if(argc == 1){
  damageDirInode(1);
}
else{
  if((damageDirInode(atoi(argv[1]))) == -1){
    printf(1,"Invalid input\n");
  }
}
exit();
}
