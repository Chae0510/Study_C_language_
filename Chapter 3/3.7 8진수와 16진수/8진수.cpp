#include <stdio.h>

int main() {
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777; // 8진수는 앞에 0을 붙임
	unsigned int hex = 0xffffffff; // 16진수는 x 붙임

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n\n", hex);

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal);
	// %o 8진수로 출력, %x :16 진수로 출력 
	// 출력할 때 명확하게 8진수 16진수 임을 표현하고 싶으면 # 기호 사용 %#o :앞에 0이 붙어서 출력, %#x or %#X : 16진수 앞 X, x 를 붙여서 출력
	return 0;
}