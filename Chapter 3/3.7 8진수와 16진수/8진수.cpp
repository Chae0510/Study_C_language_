#include <stdio.h>

int main() {
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777; // 8������ �տ� 0�� ����
	unsigned int hex = 0xffffffff; // 16������ x ����

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n\n", hex);

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal);
	// %o 8������ ���, %x :16 ������ ��� 
	// ����� �� ��Ȯ�ϰ� 8���� 16���� ���� ǥ���ϰ� ������ # ��ȣ ��� %#o :�տ� 0�� �پ ���, %#x or %#X : 16���� �� X, x �� �ٿ��� ���
	return 0;
}