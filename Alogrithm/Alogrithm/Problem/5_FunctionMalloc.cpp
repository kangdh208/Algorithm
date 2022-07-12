﻿#include <stdio.h>
#include <malloc.h>
typedef struct
{
	int data1;
	int data2;
}Data;
//func1 함수를 만들어서 func1 안에서
//data1 에 100, data2 에 200 을 넣으세요.
void func1(Data* p)
{
	(*p).data1 = 100;
	p->data2 = 200;
}
int main()
{
	Data* p = (Data*)malloc(sizeof(Data));
	func1(p);
	printf("data1 : %d\ndata2 : %d\n", p->data1, (*p).data2);
	free(p);
	return 0;
}