#include <stdio.h>

int main01() {
	//int val = 2;
	int val = 3;
	/*
	if (1 == val) {

	}
	else if (2 == val) {

	}
	*/

	switch (val) {
	case 1:
		printf("Case 1\n");
	case 2:
		printf("Case 2\n"); 
	default:
		printf("Default\n");
	case 3:
		printf("Case 3\n");
	}

	/* Compiler generated switch-case
			cmp val, 1
			jz Case1
			cmp val, 2
			jz Case2
			cmp val, 3
			jz Case3
			jmp defaultCase

	Case1:	call printf("Case 1\n");			
	Case2:	call printf("Case 2\n");
DefaultCase:call printf("Default\n");
	Case3:	call printf("Case 3\n");
	EOS: 
	*/
	return 0;
}

#if 0
int main02() {
	int val = 10;

	switch (val) {
		int k=100;
	case 10:
		printf("TEN\n"); 
		printf("k= %d\n", k);
		break;
	case 20:
		printf("TWENTY\n"); break;
	default:
		printf("Default: k= %d\n", k);
	}

	/* Compiler generated switch-case
			sub esp, sizeof(int) // k
			cmp val, 1
			jz Case10
			cmp val, 20
			jz Case2
			jmp defaultCase
			mov [k], 100	// never gets executed...
	Case10:	call printf("TEN\n"); 
			call printf("k= %d\n", k);
			jmp EOS
	Case20:	call printf("TWENTY\n");
			jmp EOS
	EOS:
	*/
	return 0;
}

#endif






















