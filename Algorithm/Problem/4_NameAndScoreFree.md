```c++
#include <stdio.h>
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
	printf("이름을 입력하세요 : ");
	// scanf_s 를 써서 name 에 이름을 입력 받으세요.
	printf("점수를 입력하세요 : ");
	// scanf_s 를 써서 score 에 점수를 입력 받으세요.
	// 입력받은 값을 출력하세요.
	// 동적 해제 코드를 추가하세요.
	return 0;
}
```

