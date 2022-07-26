#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]){
	char name[] = "조은영";
	char mobile[] = "0776";
	printf("[bob11]add-nbo[%s%s]\n", name, mobile);
	
	FILE *fp1, *fp2;
	fp1 = fopen(argv[1], "rb");
	fp2 = fopen(argv[2], "rb");
	
	uint32_t a, b;
	fread(&a ,sizeof(uint32_t), 1 ,fp1);
	fread(&b, sizeof(uint32_t), 1 ,fp2);
	
	printf("%d(0x%x) + %d(0x%x) + %d(0x%x)\n", ntohl(a), ntohl(a), ntohl(b), ntohl(b),ntohl(a)+ntohl(b),ntohl(a)+ntohl(b) );

	return 0;
}
