#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> // <- 이거 include 하면 stdint.h include 할 필요 x

int main() {
	int i;
	int32_t i32; // 32 bit integer 
	// -> 고정 너비 정수 ; 이 Data 형이 사용하는 메모리의 크기를 32라는 숫자를 넣어 고정시킴 => 항상 32 bit 
	int_least8_t i8; // smallest 8 bit
	// -> 적어도 8 bit를 갖는 type
	int_fast8_t f8; // fastest minimum
	// -> 8 bit 중에서 가장 빠른 것
	intmax_t imax; // biggest signed integers
	// -> signed integer 중에서 가장 메모리를 많이 사용하는 것
	uintmax_t uimax; // biggerst unsigned integers
	// -> unsigned integer 중에 메모리를 가장 많이 사용하는 것

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);

	return 0;
}