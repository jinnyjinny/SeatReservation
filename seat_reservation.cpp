
#include <stdio.h> //printf,for, while, if, scanf_s등 함수를 사용하기 위해 헤더 파일을 불러옴
#include <stdlib.h> //난수 함수를 사용하기 위해 헤더파일을 불러옴
#include <time.h> //time(NULL)을 사용하기 위해 헤더파일 을 불러옴
#include <Windows.h>  //Sleep()와 gotoxy, set_color등 함수를 사용하기 위해 헤더파일을 불러옴 

void gotoxy(int x, int y) //커서이동함수: 원하는 위치에 창을 띄울 수 있음
{
	COORD CurPos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CurPos);
}
void set_color(unsigned short color) //콘솔 글자 색을 바꾸는 함수
{//1.파랑 2.녹색 3.청록 4.빨강 5.핑크 6.황토 7.아이보리 8.회색 9. 밝은파랑 10.녹색 11.청록 12.빨강 13.핑크 14.노랑 15.흰색 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void title(void) //첫 화면
{
	set_color(13);
	gotoxy(13, 7);
	printf("◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎");
	gotoxy(13, 8);
	printf("◎                                                    ◎");
	gotoxy(13, 9);
	printf("◎        ☆☆☆        ☆☆☆    ☆        ☆        ◎");
	gotoxy(13, 10);
	printf("◎      ☆            ☆           ☆      ☆         ◎");
	gotoxy(13, 11);
	printf("◎     ☆            ☆     ☆☆    ☆    ☆          ◎");
	gotoxy(13, 12);
	printf("◎      ☆      ☆    ☆     ☆      ☆  ☆           ◎");
	gotoxy(13, 13);
	printf("◎        ☆☆☆         ☆☆☆        ☆    -석우점  ◎");
	gotoxy(13, 14);
	printf("◎                                                    ◎");
	gotoxy(13, 15);
	printf("◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎");
	Sleep(3000); //3초 동안 화면에 표시
	system("cls"); //화면 클리어
	set_color(14);
	gotoxy(13, 7);
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	gotoxy(13, 8);
	printf("▒                                                  ▒ ");
	gotoxy(13, 9);
	printf("▒                                                  ▒ ");
	gotoxy(13, 10);
	printf("▒                 1.  걸캅스                       ▒");
	gotoxy(13, 11);
	printf("▒                                                  ▒ ");
	gotoxy(13, 12);
	printf("▒                2.  캡틴 마블                     ▒");
	gotoxy(13, 13);
	printf("▒                                                  ▒ ");
	gotoxy(13, 14);
	printf("▒                3. 미스 슬로운                    ▒");
	gotoxy(13, 15);
	printf("▒                                                  ▒ ");
	gotoxy(13, 16);
	printf("▒                4. 서프러제트                     ▒");
	gotoxy(13, 17);
	printf("▒                                                  ▒ ");
	gotoxy(13, 18);
	printf("▒                                                  ▒ ");
	gotoxy(13, 19);
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
	Sleep(3000);
	system("cls");
	set_color(15);
}

char YorN()    //함수 정의
{
	char a;    //a값(실행 여부)를 입력 받음
	scanf_s("%c", &a); //값을 입력
	return a;   //a값을 반환
}

/*int pnum, price; //영화 인원, 가격
int people(void) //영화선택 함수에서 호출받는 인원선택 함수
{
printf("****************************************************************\n");
gotoxy(5,32);
printf("예매 인원을 입력해 주세요  :   ");
int pnum;
scanf_s("%d", &pnum);
price = pnum * 11000;
gotoxy(5,34);
printf("금액은 총 %d원 입니다.\n",price);
Sleep(3000);
system("cls");
return 0; //예매인원이 선택되고 나서 좌석선택 함수 실행
}*/

int mtitle; //영화제목
int movie(void) //영화 선택 함수
{
	gotoxy(3, 2);
	printf("**********  영화를 선택해 주세요  ***********\n");
	int mnum, ans;
	gotoxy(5, 4);
	printf("○○○○○○");
	gotoxy(5, 5);
	printf("○○●●○○");
	gotoxy(5, 6);
	printf("○●○○◐○");
	gotoxy(5, 7);
	printf("○●○○○○");
	gotoxy(5, 8);
	printf("○●○●●○");
	gotoxy(5, 9);
	printf("○○●●○○");
	gotoxy(5, 10);
	printf("○○○○○○");
	gotoxy(5, 12);
	printf("1. 걸캅스");

	gotoxy(21, 4);
	printf("○○○○○○");
	gotoxy(21, 5);
	printf("○○●●○○");
	gotoxy(21, 6);
	printf("○●○○◐○");
	gotoxy(21, 7);
	printf("○●○○○○");
	gotoxy(21, 8);
	printf("○●○○◐○");
	gotoxy(21, 9);
	printf("○○●●○○");
	gotoxy(21, 10);
	printf("○○○○○○");
	gotoxy(21, 12);
	printf("2. 캡틴마블");

	gotoxy(5, 15);
	printf("○○○○○○");
	gotoxy(5, 16);
	printf("○●○○●○");
	gotoxy(5, 17);
	printf("○●◑◐●○");
	gotoxy(5, 18);
	printf("○●○○●○");
	gotoxy(5, 19);
	printf("○●○○●○");
	gotoxy(5, 20);
	printf("○●○○●○");
	gotoxy(5, 21);
	printf("○○○○○○");
	gotoxy(5, 23);
	printf("3. 미스 슬로운");

	gotoxy(21, 15);
	printf("○○○○○○");
	gotoxy(21, 16);
	printf("○○●●○○");
	gotoxy(21, 17);
	printf("○●○○◐○");
	gotoxy(21, 18);
	printf("○○●○○○");
	gotoxy(21, 19);
	printf("○○○●○○");
	gotoxy(21, 20);
	printf("○●○○◐○");
	gotoxy(21, 21);
	printf("○○●●○○");
	gotoxy(21, 23);
	printf("4. 서프러제트");
	gotoxy(5, 25);
	printf("번호를 입력해 주세요  :  ");
	scanf_s("%d", &mnum);
	printf("\n****************************************************************\n");
	switch (mnum)
	{
	case 1:
		gotoxy(5, 28);
		printf("걸캅스를 예매하시겠습니까?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 1;
			// people(); //예매인원선택 함수 호출
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);//종료
		break;
	case 2:
		gotoxy(5, 28);
		printf("캡틴마블을 예매하시겠습니까?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 2;
			// people(); //예매인원선택 함수 호출
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	case 3:
		gotoxy(5, 28);
		printf("미스 슬로운을 예매하시겠습니까?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 3;
			// people(); //예매인원선택 함수 호출
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	case 4:
		gotoxy(5, 28);
		printf("서프러제트를 예매하시겠습니까?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 4;
			// people(); //예매인원선택 함수 호출
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	default:
		gotoxy(5, 28);
		printf("1~4 사이의 수를 입력해주세요.\n");
		exit(0); //종료
	}
	return 0;

}

int last();
int i, j; //i는 줄, j는 칸
int p = 1; //영화 예매 인원
int s[15][2];

int seat(void)  //난수 함수와 이차원 배열을 사용한 예약프로그램
{
	int y[5][5];    //예약좌석을 표시하기 위한 2차원 배열
	int add = 0;   // add는 빈자리수 계산
	char c;      //c는 y와n 변수
	srand(time(NULL));   //난수함수의 무작위성 확대

	for (i = 0; i < 5; i++)   //무작위로 입력
	{
		for (j = 0; j < 5; j++)  //무작위로 입력
		{
			y[i][j] = rand() % 2; //난수입력
		}
	}
	while (1)     //무한반복
	{
		printf("총 25 석\n\n");
		printf("　 1 2 3 4 5\n"); //칸번호
		for (i = 0; i < 5; i++)   //줄 만들기
		{
			printf(" %d", i + 1);  //줄번호
			for (j = 0; j < 5; j++)  //칸 만들기
			{
				if (y[i][j] == 1)
					printf("■"); //예약된 좌석 표시
				else
				{
					printf("□"); //예약 가능한 좌석 표시
					add++;   //빈 자리 계산
				}
			}
			printf("\n");   //줄바꿈
		}
		printf("빈자리 수 : %d\n\n", add); //빈 자리수 표시
		add = 0;        //add변수 초기화
	ONE:
		printf("줄을 선택하세요 : ");
		scanf_s("%d", &i);     //줄 번호 입력
		if (i <= 0)       //0 이하인 수를 입력할때 
			return 0;      //프로그램 종료
		if (i > 5)       //5보다 큰수를 입력할때
		{
			printf("*주의! 5줄이 넘는 경우는 없습니다. 다시 입력하세요.\n\n");
			goto ONE;      //ONE으로 돌아간다.
		}
	TWO:
		printf("칸을 선택하세요 : ");
		scanf_s("%d", &j);     //칸 번호 입력
		if (j <= 0)       //0 이하인 수를 입력할때
			return 0;      //프로그램 종료
		if (j > 5)       //5보다 큰수를 입력할때
		{
			printf("*주의! 5칸이 넘는 경우는 없습니다. 다시 입력하세요.\n\n");
			goto TWO;      //TWO으로 돌아간다.
		}
		if (y[i - 1][j - 1] == 1)     //예약된 자리가 있을 경우
		{
			printf("이미 예약된 자리입니다. 다른 자리를 선택하세요\n");
			goto ONE;      //ONE으로 돌아간다.
		}
		else
		{
			y[i - 1][j - 1] = 1;    //예약한다.
			printf("%d줄 %d칸 예약이 완료되었습니다.\n\n", i, j);
			s[p - 1][0] = { i };
			s[p - 1][1] = { j };
		}
	THREE:
		printf("계속 하시려면 'y', 끝내시려면 'n'를 누르시오.\n");
		YorN();        //함수호출
		c = YorN();       //함수값을 c에다 입력
		if (c == 121)       //y를 입력했을 경우
		{
			p++;
			system("cls");     //화면 지우기
		}
		else if (c == 110)    //n을 입력했을 경우
		{
			system("cls");
			last();
		}
		else
		{
			printf("\n'y'또는'n'을 입력하세요\n\n");
			goto THREE;
		}
	}
}

int last() //마지막화면 함수
{
	gotoxy(13, 7);
	printf("─────────   영   수   증   ──────────");
	gotoxy(17, 10);
	switch (mtitle)
	{
	case 1:
		printf("영화 제목  :   걸캅스");
		break;
	case 2:
		printf("영화 제목  :   캡틴마블");
		break;
	case 3:
		printf("영화 제목  :   미스 슬로운");
		break;
	case 4:
		printf("영화 제목  :   서프러제트");
		break;
	}
	gotoxy(17, 12);
	printf("예매 인원  :  %d", p);
	gotoxy(17, 14);
	printf("총 액  :  %d", p * 11000);
	gotoxy(17, 16);
	printf("예약 좌석  :  ");
	for (; p > 0; p--)
		printf("%d - %d    ", s[p - 1][0], s[p - 1][1]);

	Sleep(3000); //3초 동안 화면에 표시
	system("cls"); //화면 클리어
	set_color(15);
	exit(0);
}

int main()
{
	title(); //시작화면 함수 호출
	movie(); //영화 화면 함수 호출
	seat(); // 좌석선택 함수 실행 -> 마지막화면 함수 실행
	exit(0);
}