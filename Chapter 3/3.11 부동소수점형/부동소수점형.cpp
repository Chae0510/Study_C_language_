#include <stdio.h>
#include <stdbool.h>

int main() {

	printf("%u\n", sizeof(_Bool)); // 1 byte

	_Bool b1; // Bool type 은 true 나 false -> 2가지만 가질 수 있음
	b1 = 0; // false
	b1 = 1; // true
	// -> 정수형이기 때문에 false : 0, true : 1

	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;

	printf("%d %d\n", b2, b3);

	return 0;
}