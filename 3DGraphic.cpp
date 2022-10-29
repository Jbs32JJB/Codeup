#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#pragma warning(disable:4996) //scanf사용을 권장하지 않는 경고문구 안뜨게하기

//구조체선언
struct point
{
	double x;
	double y;
};

struct line
{
	struct point p1;
	struct point p2;
};
// 그래픽 보여주는 함수( 출력함수 )
void makegraphic(char** visual)
{
	for (int i = 0; i < 60; i++)
	{
		for (int j = 0; j < 120; j++)
		{
			printf("%C", visual[i][j]);
		}
		printf("\n");
	
	}
	return;
}
// 좌표를 행렬로 바꾸어주는 함수
void dot_to_rowcol(double x,double y, int* rowcol)
{
	rowcol[0] = (int)(59- floor(y)); // 좌표평면은 왼쪽 아래 (0,0)을 기준이므로 n-1에서 좌표를 빼준다 //
	rowcol[1] = (int)(floor(2 * x)); // 열 120이므로 2를 곱해줌 ) //
}
// 직선 입력받고 기울기 리턴해주는 함수 //
double gradient(struct line* ptr)
{
	return ((ptr->p1.y) - (ptr->p2.y)) / ((ptr->p1.x) - (ptr->p2.x));
}
// 직선 입력받으면 별찍는 함수
void writeline(char** visual, struct line* line, int* rowcol)
{
	double startX;
	double finalX;
	double i, grad;
	startX = (line->p1.x > line->p2.x) ? line->p2.x : line->p1.x;
	finalX = line->p1.x + line->p2.x;
	startX = round(startX * 2) / 2;
	finalX = round(finalX * 2) / 2;
	grad = gradient(line);
	for (int i = startX; i < finalX; i++)
	{
		dot_to_rowcol(i, grad * (i - line->p1.x) + line->p1.y, rowcol);
		visual[rowcol[0]][rowcol[1]] = '*';
	}
	return;
}



int main()
{
	int i, j, N;
	struct point p1, p2;
	struct line line1;
	char** visual; 
	//행렬공간 선언//
	int* rowcol;
	rowcol = (int*)malloc(sizeof(int) * 2);
	
	// 그래픽 배열 동적할당  - 행60, 열 120 ( 비율맞추려면 이비율이 정사각형 )//
	visual = (char**)malloc(sizeof(char*) * 60);
	for (i = 0; i < 60; i++)
	{
		visual[i] = (char*) malloc(sizeof(char) * 120);
	}
	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 120; j++)
		{
			visual[i][j] = ' ';
		}
	}
	
	while (1)
	{
		// 좌표입력받기 //
		scanf("%lf %lf", &p1.x, &p1.y);
		scanf("%lf %lf", &p2.x, &p2.y);
		// 직선초기화 //
		line1.p1 = p1;
		line1.p2 = p2;
		//별찍기//
		writeline(visual, &line1, rowcol);
		system("cls");
		//출력하기 //
		makegraphic(visual);
	}
	




	return 0;
}