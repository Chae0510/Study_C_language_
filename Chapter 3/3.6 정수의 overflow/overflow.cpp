#include<stdio.h> 
#include <limits.h> 
// ������ �ڷ����� ���� �� �ִ� ���� ū ���� ���� ���� ��(signed�� unsigned�� ���� ���� ���� 0�̶� X )�� �˷��ش�
#include <stdlib.h>

int main()
{

	unsigned int u_max = UINT_MAX; // ��ũ��
	// ���� ū ���� UINT_MAX �� 1�� ���� -> 0 ���

	char buffer[33];
	_itoa_s(u_max, buffer, 2);
	// u_max ������ ��� �ִ� ���ڸ� 2���� ���·� �ٲپ���

	printf("decimal : %u\n", u_max);
	printf("binary : %s\n", buffer); // 2���� ���·� ���
	

}