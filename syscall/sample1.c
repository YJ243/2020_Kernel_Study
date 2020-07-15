/* Example from Professional Linux Kernel Architecture 
 * SystemCall , pg 820
 * 13.1.1 Tracing System call, Example 1.
 *
 * ****************************************************************
 * *** a very simple version of the standard Unix head command ****
 * ****************************************************************
 *
 * Std Name : Inhoinno
 * Email : mearrong123@gmail.com
 * */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <malloc.h>

int main(int argc, char* argv[]){
	int handle=-1, bytes;
	void *ptr=NULL;
	handle = open("test.txt", O_RDONLY);
	if(handle<0){
		write(STDERR_FILENO, "No Such File!\n", 64);
		exit(-1);
	}
	ptr = (void*)malloc(150);
	bytes= read(handle,ptr,150);
	
	printf("%s", ptr);
	close(handle);
	return 0;	
}
