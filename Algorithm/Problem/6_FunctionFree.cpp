#include <stdio.h>
#include <malloc.h>
typedef struct
{
	int data1;
	int data2;
}Data;
void func1(Data** p1)
{
	(**p1).data1 = 100;
	//(*p1)->data1 = 100;
}
void func2(Data* p2)
{
	//(*p2).data2 = 200;
	p2->data2 = 200;
}
int main()
{
	Data* p = (Data*)malloc(sizeof(Data));
	func1(&p);
	func2(p);
	printf("data1 : %d\ndata2 : %d\n", (*p).data1, p->data2);
	free(p);
	return 0;
}