#include "types.h"
#include "user.h"
#include "fcntl.h"
void case1(void);
void case2(void);
void case3(void);

int main(int argc, char *argv[]){
	if(argc == 1){
		printf(1,"No arguments found\n");
	}
	/*else{
		if((directoryWalker(argv[0])) == -1){
			cprintf("Invalid path");
		}
	}*/
	else{
		switch(atoi(argv[1])){
			case 1:
				case1();
				break;
			case 2:
				case2();
				break;
			case 3:
				case3();
				break;
			default:
				printf(1,"Invalid\n");
		}
	}
	exit();
}
void case1(void){
	mkdir("tmp");
	int fd;
	fd = open("./tmp/sample.txt",O_CREATE|O_RDWR);
	write(fd,"hi 1\n",6);
	close(fd);
	fd = open("./tmp/sample1.txt",O_CREATE|O_RDWR);
	write(fd,"hi 2\n",6);
	close(fd);
}

void case2(void){
	case1();
	mkdir("./tmp/tmp_1");
	mkdir("./tmp/tmp_2");
	int fd;
	fd = open("./tmp/tmp_1/sample2.txt",O_CREATE|O_RDWR);
	write(fd,"hi 3\n",6);
	close(fd);
	fd = open("./tmp/tmp_1/sample3.txt",O_CREATE|O_RDWR);
	write(fd,"hi 4\n",6);
	close(fd);
	fd = open("./tmp/tmp_2/sample4.txt",O_CREATE|O_RDWR);
	printf(1,"sample4\n");
	write(fd,"hi 5\n",6);
	close(fd);
	fd = open("./tmp/tmp_2/sample5.txt",O_CREATE|O_RDWR);
	write(fd,"hi 6\n",6);
	close(fd);
}
void case3(void){
	case2();
	mkdir("tmp1");
	mkdir("./tmp1/tmp1_1");
	int fd;
	fd = open("./tmp1/sample6.txt",O_CREATE|O_RDWR);
	write(fd,"hi 7\n",6);
	close(fd);
	fd = open("./tmp1/sample7.txt",O_CREATE|O_RDWR);
	write(fd,"hi 8\n",6);
	close(fd);
	fd = open("./tmp1/tmp1_1/sample8.txt",O_CREATE|O_RDWR);
	write(fd,"hi 9\n",6);
	close(fd);
}
