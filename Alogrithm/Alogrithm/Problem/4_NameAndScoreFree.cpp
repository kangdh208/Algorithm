﻿#include <stdio.h>
#include <malloc.h>
typedef struct
{
	char name[20];
	int score;
}Element;
typedef struct
{
	int data1;
	int data2;
	Element* p;
}Data;
int main()
{
	Data* p = (Data*)malloc(sizeof(Data));
	(*p).p = (Element*)malloc(sizeof(Element));
	printf("이름을 입력하세요 : ");
	scanf_s("%s", (*(*p).p).name, sizeof(p->p->name));
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &(*(*p).p).score);
	printf("이름 : %s\n 점수 : %d\n", p->p->name, p->p->score);
	free(p->p);
	free(p);
	return 0;
}