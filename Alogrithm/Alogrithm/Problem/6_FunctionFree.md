```c++
#include <stdio.h>
#include <malloc.h>
typedef struct
{
	int data1;
	int data2;
}Data;
int main()
{
	Data* p = (Data*)malloc(sizeof(Data));
	func1(&p);
	//func1 함수를 만들어서 func1 안에서 data1 에 100 을 넣으세요.
	func2(p);
	//func2 함수를 만들어서 func2 안에서 data2 에 200 을 넣으세요.
	//data1 과 data2 를 출력하세요.
	// 동적해제 코드를 추가하세요.
	return 0;
}
```

