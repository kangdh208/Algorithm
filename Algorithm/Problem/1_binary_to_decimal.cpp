﻿#include <stdio.h>

int main()
{
	printf("Quiz 8 자리의 2 진수를 입력받아 10 진수 변환 프로그램을 작성하시오.\n");
	printf("제약조건) 전처리기는 #include <math.h>를 구성하지 않음.\n");
	
	char sData[10] = "\0";
	char dec = 0;
	unsigned char unsignedDec = 0;
	int bin, len, i;
	
	printf("2 진수 입력 : ");
	gets_s(sData, sizeof(sData));
	
	for (len = 0; sData[len]; len++); // len = strlen(sData);
		// 0001 1001
	bin = 1;
	for (i = len - 1; i >= 0; i--)
	{
		if (sData[i] == ' ')
			continue;
		else if (sData[i] == '1')
			dec += bin;
		if (sData[i] == '1')
			unsignedDec += bin;
		bin *= 2;
	}
	printf("2 진수[%s] => 10 진수[%d]\n", sData, dec);
	printf("2 진수[%s] => 10 진수[%d]\n", sData, unsignedDec);
	return 0;
}