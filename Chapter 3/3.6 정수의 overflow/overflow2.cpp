#include<stdio.h> 
#include <limits.h> 
// 각각의 자료형이 가질 수 있는 가장 큰 값과 가장 작은 값(signed만 unsigned는 가장 작은 값이 0이라서 X )을 알려준다
#include <stdlib.h>

int main()
{

	unsigned int u_max = UINT_MAX + 1; // 매크로
	// 가장 큰 값인 UINT_MAX 에 1을 더함 -> 0 출력
	// 1111+1 = 10000 자료형이 4 bit라서 4개만 저장 가능, 1은 날아감
	// (가장 작은 값) 0000 - 1 하면 1111 나옴 10000이라고 가정한 상태에서 -1

	char buffer[33];
	_itoa_s(u_max, buffer, 2);
	// u_max 변수가 담고 있는 숫자를 2진수 형태로 바꾸어줌

	printf("decimal : %u\n", u_max);
	printf("binary : %s\n", buffer); // 2진수 형태로 출력


}