
#include <stdio.h> //printf,for, while, if, scanf_s�� �Լ��� ����ϱ� ���� ��� ������ �ҷ���
#include <stdlib.h> //���� �Լ��� ����ϱ� ���� ��������� �ҷ���
#include <time.h> //time(NULL)�� ����ϱ� ���� ������� �� �ҷ���
#include <Windows.h>  //Sleep()�� gotoxy, set_color�� �Լ��� ����ϱ� ���� ��������� �ҷ��� 

void gotoxy(int x, int y) //Ŀ���̵��Լ�: ���ϴ� ��ġ�� â�� ��� �� ����
{
	COORD CurPos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CurPos);
}
void set_color(unsigned short color) //�ܼ� ���� ���� �ٲٴ� �Լ�
{//1.�Ķ� 2.��� 3.û�� 4.���� 5.��ũ 6.Ȳ�� 7.���̺��� 8.ȸ�� 9. �����Ķ� 10.��� 11.û�� 12.���� 13.��ũ 14.��� 15.��� 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void title(void) //ù ȭ��
{
	set_color(13);
	gotoxy(13, 7);
	printf("�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�");
	gotoxy(13, 8);
	printf("��                                                    ��");
	gotoxy(13, 9);
	printf("��        �١١�        �١١�    ��        ��        ��");
	gotoxy(13, 10);
	printf("��      ��            ��           ��      ��         ��");
	gotoxy(13, 11);
	printf("��     ��            ��     �١�    ��    ��          ��");
	gotoxy(13, 12);
	printf("��      ��      ��    ��     ��      ��  ��           ��");
	gotoxy(13, 13);
	printf("��        �١١�         �١١�        ��    -������  ��");
	gotoxy(13, 14);
	printf("��                                                    ��");
	gotoxy(13, 15);
	printf("�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�");
	Sleep(3000); //3�� ���� ȭ�鿡 ǥ��
	system("cls"); //ȭ�� Ŭ����
	set_color(14);
	gotoxy(13, 7);
	printf("�ƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢ�");
	gotoxy(13, 8);
	printf("��                                                  �� ");
	gotoxy(13, 9);
	printf("��                                                  �� ");
	gotoxy(13, 10);
	printf("��                 1.  ��İ��                       ��");
	gotoxy(13, 11);
	printf("��                                                  �� ");
	gotoxy(13, 12);
	printf("��                2.  ĸƾ ����                     ��");
	gotoxy(13, 13);
	printf("��                                                  �� ");
	gotoxy(13, 14);
	printf("��                3. �̽� ���ο�                    ��");
	gotoxy(13, 15);
	printf("��                                                  �� ");
	gotoxy(13, 16);
	printf("��                4. ��������Ʈ                     ��");
	gotoxy(13, 17);
	printf("��                                                  �� ");
	gotoxy(13, 18);
	printf("��                                                  �� ");
	gotoxy(13, 19);
	printf("�ƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢƢ�");
	Sleep(3000);
	system("cls");
	set_color(15);
}

char YorN()    //�Լ� ����
{
	char a;    //a��(���� ����)�� �Է� ����
	scanf_s("%c", &a); //���� �Է�
	return a;   //a���� ��ȯ
}

/*int pnum, price; //��ȭ �ο�, ����
int people(void) //��ȭ���� �Լ����� ȣ��޴� �ο����� �Լ�
{
printf("****************************************************************\n");
gotoxy(5,32);
printf("���� �ο��� �Է��� �ּ���  :   ");
int pnum;
scanf_s("%d", &pnum);
price = pnum * 11000;
gotoxy(5,34);
printf("�ݾ��� �� %d�� �Դϴ�.\n",price);
Sleep(3000);
system("cls");
return 0; //�����ο��� ���õǰ� ���� �¼����� �Լ� ����
}*/

int mtitle; //��ȭ����
int movie(void) //��ȭ ���� �Լ�
{
	gotoxy(3, 2);
	printf("**********  ��ȭ�� ������ �ּ���  ***********\n");
	int mnum, ans;
	gotoxy(5, 4);
	printf("�ۡۡۡۡۡ�");
	gotoxy(5, 5);
	printf("�ۡۡܡܡۡ�");
	gotoxy(5, 6);
	printf("�ۡܡۡۢġ�");
	gotoxy(5, 7);
	printf("�ۡܡۡۡۡ�");
	gotoxy(5, 8);
	printf("�ۡܡۡܡܡ�");
	gotoxy(5, 9);
	printf("�ۡۡܡܡۡ�");
	gotoxy(5, 10);
	printf("�ۡۡۡۡۡ�");
	gotoxy(5, 12);
	printf("1. ��İ��");

	gotoxy(21, 4);
	printf("�ۡۡۡۡۡ�");
	gotoxy(21, 5);
	printf("�ۡۡܡܡۡ�");
	gotoxy(21, 6);
	printf("�ۡܡۡۢġ�");
	gotoxy(21, 7);
	printf("�ۡܡۡۡۡ�");
	gotoxy(21, 8);
	printf("�ۡܡۡۢġ�");
	gotoxy(21, 9);
	printf("�ۡۡܡܡۡ�");
	gotoxy(21, 10);
	printf("�ۡۡۡۡۡ�");
	gotoxy(21, 12);
	printf("2. ĸƾ����");

	gotoxy(5, 15);
	printf("�ۡۡۡۡۡ�");
	gotoxy(5, 16);
	printf("�ۡܡۡۡܡ�");
	gotoxy(5, 17);
	printf("�ۡܢŢġܡ�");
	gotoxy(5, 18);
	printf("�ۡܡۡۡܡ�");
	gotoxy(5, 19);
	printf("�ۡܡۡۡܡ�");
	gotoxy(5, 20);
	printf("�ۡܡۡۡܡ�");
	gotoxy(5, 21);
	printf("�ۡۡۡۡۡ�");
	gotoxy(5, 23);
	printf("3. �̽� ���ο�");

	gotoxy(21, 15);
	printf("�ۡۡۡۡۡ�");
	gotoxy(21, 16);
	printf("�ۡۡܡܡۡ�");
	gotoxy(21, 17);
	printf("�ۡܡۡۢġ�");
	gotoxy(21, 18);
	printf("�ۡۡܡۡۡ�");
	gotoxy(21, 19);
	printf("�ۡۡۡܡۡ�");
	gotoxy(21, 20);
	printf("�ۡܡۡۢġ�");
	gotoxy(21, 21);
	printf("�ۡۡܡܡۡ�");
	gotoxy(21, 23);
	printf("4. ��������Ʈ");
	gotoxy(5, 25);
	printf("��ȣ�� �Է��� �ּ���  :  ");
	scanf_s("%d", &mnum);
	printf("\n****************************************************************\n");
	switch (mnum)
	{
	case 1:
		gotoxy(5, 28);
		printf("��İ���� �����Ͻðڽ��ϱ�?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 1;
			// people(); //�����ο����� �Լ� ȣ��
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);//����
		break;
	case 2:
		gotoxy(5, 28);
		printf("ĸƾ������ �����Ͻðڽ��ϱ�?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 2;
			// people(); //�����ο����� �Լ� ȣ��
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	case 3:
		gotoxy(5, 28);
		printf("�̽� ���ο��� �����Ͻðڽ��ϱ�?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 3;
			// people(); //�����ο����� �Լ� ȣ��
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	case 4:
		gotoxy(5, 28);
		printf("��������Ʈ�� �����Ͻðڽ��ϱ�?");
		gotoxy(5, 29);
		printf("1. YES    2. NO     ");
		scanf_s("%d", &ans);
		printf("\n");
		if (ans == 1)
		{
			mtitle = 4;
			// people(); //�����ο����� �Լ� ȣ��
			system("cls");
			return 0;
		}
		else if (ans == 2)
			exit(0);
		break;
	default:
		gotoxy(5, 28);
		printf("1~4 ������ ���� �Է����ּ���.\n");
		exit(0); //����
	}
	return 0;

}

int last();
int i, j; //i�� ��, j�� ĭ
int p = 1; //��ȭ ���� �ο�
int s[15][2];

int seat(void)  //���� �Լ��� ������ �迭�� ����� �������α׷�
{
	int y[5][5];    //�����¼��� ǥ���ϱ� ���� 2���� �迭
	int add = 0;   // add�� ���ڸ��� ���
	char c;      //c�� y��n ����
	srand(time(NULL));   //�����Լ��� �������� Ȯ��

	for (i = 0; i < 5; i++)   //�������� �Է�
	{
		for (j = 0; j < 5; j++)  //�������� �Է�
		{
			y[i][j] = rand() % 2; //�����Է�
		}
	}
	while (1)     //���ѹݺ�
	{
		printf("�� 25 ��\n\n");
		printf("�� 1 2 3 4 5\n"); //ĭ��ȣ
		for (i = 0; i < 5; i++)   //�� �����
		{
			printf(" %d", i + 1);  //�ٹ�ȣ
			for (j = 0; j < 5; j++)  //ĭ �����
			{
				if (y[i][j] == 1)
					printf("��"); //����� �¼� ǥ��
				else
				{
					printf("��"); //���� ������ �¼� ǥ��
					add++;   //�� �ڸ� ���
				}
			}
			printf("\n");   //�ٹٲ�
		}
		printf("���ڸ� �� : %d\n\n", add); //�� �ڸ��� ǥ��
		add = 0;        //add���� �ʱ�ȭ
	ONE:
		printf("���� �����ϼ��� : ");
		scanf_s("%d", &i);     //�� ��ȣ �Է�
		if (i <= 0)       //0 ������ ���� �Է��Ҷ� 
			return 0;      //���α׷� ����
		if (i > 5)       //5���� ū���� �Է��Ҷ�
		{
			printf("*����! 5���� �Ѵ� ���� �����ϴ�. �ٽ� �Է��ϼ���.\n\n");
			goto ONE;      //ONE���� ���ư���.
		}
	TWO:
		printf("ĭ�� �����ϼ��� : ");
		scanf_s("%d", &j);     //ĭ ��ȣ �Է�
		if (j <= 0)       //0 ������ ���� �Է��Ҷ�
			return 0;      //���α׷� ����
		if (j > 5)       //5���� ū���� �Է��Ҷ�
		{
			printf("*����! 5ĭ�� �Ѵ� ���� �����ϴ�. �ٽ� �Է��ϼ���.\n\n");
			goto TWO;      //TWO���� ���ư���.
		}
		if (y[i - 1][j - 1] == 1)     //����� �ڸ��� ���� ���
		{
			printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �ڸ��� �����ϼ���\n");
			goto ONE;      //ONE���� ���ư���.
		}
		else
		{
			y[i - 1][j - 1] = 1;    //�����Ѵ�.
			printf("%d�� %dĭ ������ �Ϸ�Ǿ����ϴ�.\n\n", i, j);
			s[p - 1][0] = { i };
			s[p - 1][1] = { j };
		}
	THREE:
		printf("��� �Ͻ÷��� 'y', �����÷��� 'n'�� �����ÿ�.\n");
		YorN();        //�Լ�ȣ��
		c = YorN();       //�Լ����� c���� �Է�
		if (c == 121)       //y�� �Է����� ���
		{
			p++;
			system("cls");     //ȭ�� �����
		}
		else if (c == 110)    //n�� �Է����� ���
		{
			system("cls");
			last();
		}
		else
		{
			printf("\n'y'�Ǵ�'n'�� �Է��ϼ���\n\n");
			goto THREE;
		}
	}
}

int last() //������ȭ�� �Լ�
{
	gotoxy(13, 7);
	printf("������������������   ��   ��   ��   ��������������������");
	gotoxy(17, 10);
	switch (mtitle)
	{
	case 1:
		printf("��ȭ ����  :   ��İ��");
		break;
	case 2:
		printf("��ȭ ����  :   ĸƾ����");
		break;
	case 3:
		printf("��ȭ ����  :   �̽� ���ο�");
		break;
	case 4:
		printf("��ȭ ����  :   ��������Ʈ");
		break;
	}
	gotoxy(17, 12);
	printf("���� �ο�  :  %d", p);
	gotoxy(17, 14);
	printf("�� ��  :  %d", p * 11000);
	gotoxy(17, 16);
	printf("���� �¼�  :  ");
	for (; p > 0; p--)
		printf("%d - %d    ", s[p - 1][0], s[p - 1][1]);

	Sleep(3000); //3�� ���� ȭ�鿡 ǥ��
	system("cls"); //ȭ�� Ŭ����
	set_color(15);
	exit(0);
}

int main()
{
	title(); //����ȭ�� �Լ� ȣ��
	movie(); //��ȭ ȭ�� �Լ� ȣ��
	seat(); // �¼����� �Լ� ���� -> ������ȭ�� �Լ� ����
	exit(0);
}