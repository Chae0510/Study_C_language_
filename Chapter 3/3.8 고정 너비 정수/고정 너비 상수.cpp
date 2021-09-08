#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> // <- �̰� include �ϸ� stdint.h include �� �ʿ� x

int main() {
	int i;
	int32_t i32; // 32 bit integer 
	// -> ���� �ʺ� ���� ; �� Data ���� ����ϴ� �޸��� ũ�⸦ 32��� ���ڸ� �־� ������Ŵ => �׻� 32 bit 
	int_least8_t i8; // smallest 8 bit
	// -> ��� 8 bit�� ���� type
	int_fast8_t f8; // fastest minimum
	// -> 8 bit �߿��� ���� ���� ��
	intmax_t imax; // biggest signed integers
	// -> signed integer �߿��� ���� �޸𸮸� ���� ����ϴ� ��
	uintmax_t uimax; // biggerst unsigned integers
	// -> unsigned integer �߿� �޸𸮸� ���� ���� ����ϴ� ��

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}