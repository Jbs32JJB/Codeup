#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#pragma warning(disable:4996) //scanf사용을 권장하지 않는 경고문구 안뜨게하기

//구조체선언
struct Dim2point
{
	double x;
	double y;
};

struct Dim2line
{
	struct Dim2point p1;
	struct Dim2point p2;
};

struct Dim3point
{
	double x;
	double y;
	double z;
};

struct Dim3line
{
	struct Dim3point p1;
	struct Dim3point p2;
};

//키보드 입력받는 함수//
int keyboard_input(int n)
{
	switch (n)
	{
	case 105:
		return 0;
	case 106:
		return 1;
	case 107:
		return 2;
	case 108:
		return 3;
	case 117:
		return 4;
	case 111:
		return 5;
	}
}
//그래픽 초기화 함수//
void cleargraphic(char** visual)
{
	int i, j;
	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 120; j++)
		{
			visual[i][j] = ' ';
		}
	}
	return;
}

// 그래픽 보여주는 함수( 출력함수 )
void makegraphic(char** visual)
{
	for (int i = 0; i < 60; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			printf("%c", visual[i][j]);
		}
		printf("\n");

	}
	return;
}
// 좌표를 행렬로 바꾸어주는 함수
void dot_to_rowcol(double x, double y, int* rowcol)
{
	rowcol[0] = (int)(59 - floor(y)); // 좌표평면은 왼쪽 아래 (0,0)을 기준이므로 n-1에서 좌표를 빼준다 //
	rowcol[1] = (int)(floor(2*x)); // 열 120이므로 2를 곱해줌 ) //
}
// 직선 입력받고 기울기 리턴해주는 함수 //
double gradient(struct Dim2line* ptr)
{
	return ((ptr->p1.y) - (ptr->p2.y)) / ((ptr->p1.x) - (ptr->p2.x));
}
// 직선 입력받으면 별찍는 함수
void writeline(char** visual, struct Dim2line* line, int* rowcol)
{
	double startval;
	double finalval;
	double i;
	double grad = gradient(line);
	if (grad <2 && grad >-2) //기울기가 낮은 경우 : x값을 키우며 접근
	{
		startval = (line->p1.x > line->p2.x) ? line->p2.x : line->p1.x;
		finalval = line->p1.x + line->p2.x - startval;
		startval = round(startval * 2) / 2;
		finalval = round(finalval * 2) / 2;
		grad = gradient(line);
		for (i = startval; !(i>finalval); i+=0.5)
		{
			dot_to_rowcol(i, grad *(i - line->p1.x) + line->p1.y, rowcol);
				visual[rowcol[0]][rowcol[1]] = '*';
		}
	}
	else //그게 아니면 y값을 키우며 별을찍자
	{
		startval = (line->p1.y > line->p2.y) ? line->p2.y : line->p1.y;
		finalval = line->p1.y + line->p2.y - startval;
		startval = round(startval * 2) / 2;
		finalval = round(finalval * 2) / 2;
		grad = gradient(line);
		for (i = startval; !( i> finalval); i++)
		{
			dot_to_rowcol((i-line->p1.y) / grad + line->p1.x, i, rowcol);
			visual[rowcol[0]][rowcol[1]] = '*';
		}
	}
	return;
}
// 3차원 평행이동 함수
void parallel_translation(struct Dim3line* ptr, int n)
{
	if (n > 0)
	{
		ptr->p1.x += 28;
		ptr->p1.y += 28;
		ptr->p1.z += 28;
		ptr->p2.x += 28;
		ptr->p2.x += 28;
		ptr->p2.x += 28;
	}
	else if (n < 0)
	{
		ptr->p1.x -= 28;
		ptr->p1.y -= 28;
		ptr->p1.z -= 28;
		ptr->p2.x -= 28;
		ptr->p2.x -= 28;
		ptr->p2.x -= 28;
	}
}
// 3차원 회전함수
void spin(struct Dim3line* ptr, int axis, double angle) //axis : 1->x | 2->y | 3->z //
{
	double ini_x, ini_y, ini_z; // initial ( 초기의 ) 
	if (axis == 1)
	{
		ini_x = ptr->p1.x;
		ini_y = ptr->p1.y;
		ini_z = ptr->p1.z;
		ptr->p1.x = ini_x;
		ptr->p1.y = ini_y * cos(angle) - ini_z * sin(angle);
		ptr->p1.z = ini_y * sin(angle) + ini_z * cos(angle);
		ini_x = ptr->p2.x;
		ini_y = ptr->p2.y;
		ini_z = ptr->p2.z;
		ptr->p2.x = ini_x;
		ptr->p2.y = ini_y * cos(angle) - ini_z * sin(angle);
		ptr->p2.z = ini_y * sin(angle) + ini_z * cos(angle);
	}
	else if (axis == 2)
	{
		ini_x = ptr->p1.x;
		ini_y = ptr->p1.y;
		ini_z = ptr->p1.z;
		ptr->p1.x = ini_z * sin(angle) + ini_x * cos(angle);
		ptr->p1.y = ini_y;
		ptr->p1.z = ini_z * cos(angle) - ini_x * sin(angle);
		ini_x = ptr->p2.x;
		ini_y = ptr->p2.y;
		ini_z = ptr->p2.z;
		ptr->p2.x = ini_z * sin(angle) + ini_x * cos(angle);
		ptr->p2.y = ini_y;
		ptr->p2.z = ini_z * cos(angle) - ini_x * sin(angle);
	}
	else
	{
		ini_x = ptr->p1.x;
		ini_y = ptr->p1.y;
		ini_z = ptr->p1.z;
		ptr->p1.x = ini_x * cos(angle) - ini_y * sin(angle);
		ptr->p1.y = ini_x * sin(angle) + ini_y * cos(angle);
		ptr->p1.z = ini_z;
		ini_x = ptr->p2.x;
		ini_y = ptr->p2.y;
		ini_z = ptr->p2.z;
		ptr->p2.x = ini_x * cos(angle) - ini_y * sin(angle);
		ptr->p2.y = ini_x * sin(angle) + ini_y * cos(angle);
		ptr->p2.z = ini_z;
	}
}
// 3차원 직선 2차원으로 표현하는 함수 ( 정사영 )
void orthographic(struct Dim3line* d3ptr, struct Dim2line* d2ptr)
{
	d2ptr->p1.x = d3ptr->p1.x;
	d2ptr->p1.y = d3ptr->p1.z;
	d2ptr->p2.x = d3ptr->p2.x;
	d2ptr->p2.y = d3ptr->p2.z;
	return;
}


int main()
{
	int i, j, N;
	int key;
	int m = 0;
	struct Dim2point p1, p2; //2차원 점//
	struct Dim2line line1; //2차원 직선//
	struct Dim3point dot1, dot2; //3차원 점//
	struct Dim3line line2; //3차원 직선//
	char** visual;
	//행렬공간 선언//
	int* rowcol;	
	rowcol = (int*)malloc(sizeof(int) * 2);

	// 그래픽 배열 동적할당  - 행60, 열 120 ( 비율맞추려면 이비율이 정사각형 )//
	visual = (char**)malloc(sizeof(char*) * 60);
	for (i = 0; i < 60; i++)
	{
		visual[i] = (char*)malloc(sizeof(char) * 120);
	}
	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 120; j++)
		{
			visual[i][j] = ' ';
		}
	}

	
	line2.p1.x = 10;
	line2.p1.y = 10;
	line2.p1.z = 10;
	line2.p2.x = 40;
	line2.p2.y = 40;
	line2.p2.z = 40;
	
	orthographic(&line2, &line1);
	writeline(visual, &line1, rowcol);
	makegraphic(visual);

	
	
	while (m<=40)
	{
		system("cls");
		cleargraphic(visual);
		parallel_translation(&line2, -1);
		spin(&line2, 3, 3.14/90);
		parallel_translation(&line2, 1);
		

		orthographic(&line2, &line1);
		writeline(visual, &line1, rowcol);
		makegraphic(visual);
		m++;
	}
	
		
	free(visual);

	return 0;
	// 윤정쌤께 바칩니다.. 이건 못하겠네요 ^^7 //
}
