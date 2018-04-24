int
main(int argc, char *argv[]){
	printf(1,"BEFORE CALLING BOTH WALKERS\n");
	if(compareWalker() == -1){
		printf(1,"Nothing allocated\n\n");
	}
	printf(1,"CALLING DIR WALKER ON ROOT DIR\n");
	directoryWalker(".");
	printf(1,"CALLING INODE TB WALKER ON ROOT DIR\n");
	inodeTBWalker();
	printf(1,"\n\nCOMPARING 2 WALKERS:\n");
	compareWalker();
	exit();
}