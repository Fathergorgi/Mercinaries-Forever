/*
My attempt at slowly reverse enginering the game binary by hand
*/
	// A quick example below on inline assembly (For future refrence)
    /*	asm ("add %1,%1,%0"
             : "=r" (a_plus_a)
             : "r" (a) 
             );
    */

//GLOBALS
int global_0;
int some_ptr; //int?
int DAT_0094a8d4; //int?

// Known Syscalls
void FlushCache(){
	asm ("li $v1,0x64");
	asm ("syscall");
}
void RFU091(){
	asm ("li $v1,0x5b");
	asm ("syscall");
}
void initSomeCalls(){
	
}
int main(){
	int some_addr;
	int *some_addr2;
	global_0 = 0;
	// sync 0x10
	some_addr = &some_ptr;
	while (some_addr2 < &DAT_0094a8d4){
		some_addr2 = some_addr;
		*some_addr2 = 0;
		some_addr2[1] = 0;
		some_addr2[2] = 0;
		some_addr2[3] = 0;
		some_addr = some_addr2 + 4;
	}
	/* Cut out because invalid syscall
	asm ("li $v1,0x3c");
	asm ("syscall");*/
	asm ("li $v1,0x3d");
	asm ("syscall");
	initSomeCalls();
	FlushCache();
	return 0;
}
