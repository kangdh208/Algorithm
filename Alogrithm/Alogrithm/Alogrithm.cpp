#include <stdio.h>

int solution(int MAP[11][11], char route[])
{
	int x = 5, y = 5, len = 0, i, j;
	for (i = 0; i < 10; i++)
	{
		if (route[i] == 'U')
			y -= 1;
		else if (route[i] == 'D')
			y += 1;
		else if (route[i] == 'R')
			x += 1;
		else if (route[i] == 'L')
			x -= 1;
		if (x < 0)
			x = 0;
		if (y < 0)
			y = 0;
		if (x > 11)
			x = 10;
		if (y > 11)
			y = 10;
		MAP[y][x] = 1;
	}
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (MAP[i][j] == 1)
				len++;
			printf("%d ", MAP[i][j]);
		}
		printf("\n");
	}
	return len;
}
int main()
{
	int MAP[11][11] =
	{
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,2,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
	};
	//char route[10] = "ULURRDLLU"; //len == 6
	//char route[10] = "LLLLLLLLL"; //len ==5
	char route[10] = "LULLLLLLU"; //len == 7
	int len = solution(MAP, route);
	printf("len : %d\n", len);
	return 0;
}