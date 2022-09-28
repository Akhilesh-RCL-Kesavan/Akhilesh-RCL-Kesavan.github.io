#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void PLAYER(char p[][5], int, int);
void COMPUTER(char c[][5], int, int);
main()
{
	int PL_r, PL_c, COM_r, COM_c, i = 0, Wp = 0, Wc = 0;
	char PL[5][5], COM[5][5];
	time_t t, n;
	n = 100;
	srand((unsigned)time(&t));
	for (PL_c = 0; PL_c < 5; PL_c++)
	{
		for (PL_r = 0; PL_r < 5; PL_r++)
			PL[PL_r][PL_c] = '~';
	}
	for (COM_c = 0;COM_c < 5; COM_c++)
	{
		for (COM_r = 0; COM_r < 5; COM_r++)
			COM[COM_r][COM_c] = '~';
	}
	printf("Place your battle ships,Row and Column\n");
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d %d", &PL_r, &PL_c);
		while (PL_r>5 || PL_c > 5)
		{
			printf("Position not valid, enter a valid position\n");
			scanf_s("%d %d", &PL_r, &PL_c);
		}
		while (PL[PL_r - 1][PL_c - 1] == 'O')
		{
			printf("Ship already placed, chose another place\n");
			scanf_s("%d %d", &PL_r, &PL_c);
		}
		PL[PL_r-1][PL_c-1] = 'O';
	}
	printf("The computer's field is");
	for (COM_r = 0; COM_r < 5; COM_r++)
	{
		printf("\n");
		for (COM_c = 0; COM_c < 5; COM_c++)
			printf("%c ", COM[COM_r][COM_c]);
	}
	for (i = 0; i < 4; i++)
	{
		COM_r = rand() % 5;
		COM_c = rand() % 5;
		while (COM[COM_r][COM_c] == 'O')
		{
			COM_r = rand() % 5;
			COM_c = rand() % 5;
		}
		COM[COM_r][COM_c] = 'O';
	}
	printf("\n\nThe player's field is");
	for (PL_r = 0; PL_r < 5; PL_r++)
	{
		printf("\n");
		for (PL_c = 0; PL_c < 5; PL_c++)
			printf("%c ", PL[PL_r][PL_c]);
	}
	for (i = 1; i <= 25; i++)
	{
		PLAYER(COM,5,5);
		Wp = 0;
		for (COM_r = 0; COM_r < 5; COM_r++)
		{
			for (COM_c = 0; COM_c < 5; COM_c++)
			{
				if (COM[COM_r][COM_c] == 'B')
					Wp++;
			}
		}
		printf("\nPlayer Score is %d", Wp);
		if (Wp == 4)
		{
			printf("\nPlayer wins");
			fflush(stdin);
			getchar();
			exit(0);
		}
		printf("\n\nThe player's field is ");
		COMPUTER(PL, 5, 5);
		Wc = 0;
		for (PL_r = 0; PL_r < 5; PL_r++)
		{
			for (PL_c = 0; PL_c < 5; PL_c++)
			{
				if (PL[PL_r][PL_c] == 'B')
					Wc++;
			}
		}
		printf("\nComputer Score is %d", Wc);
		if (Wc == 4)
		{
			printf("Jetfire wins");
			fflush(stdin);
			getchar();
			exit(0);
		}
	}
}
	void PLAYER(char p[][5], int PC_r, int PC_c)
{
	int rp = 0, cp = 0;
	printf("\nWhere to fire\n");
	scanf_s("%d %d", &rp, &cp);
	while (rp>PC_r || cp > PC_r)
	{
		printf("Position not valid, enter a valid position");
		scanf_s("%d %d", &rp, &cp);
	}
	while (p[rp-1][cp-1] == 'B' || p[(rp-1)%10][(cp-1)%10] == 'X')
	{
		printf("Already fired, choose another target\n");
		scanf_s("%d %d", &rp, &cp);
	}
	if (p[rp-1][cp-1] == 'O')
		p[rp-1][(cp-1)] = 'B';
	else
		p[rp-1][cp-1] = 'X';
	printf("\n\nThe computer's field is ");
	for (rp = 0; rp < PC_r; rp++)
	{
		printf("\n");
		for (cp = 0; cp < PC_c; cp++)
			if (p[rp][cp] == 'O')
				printf("~ ");
			else
				printf("%c ", p[rp][cp]);
	}
}
void COMPUTER(char c[][5], int CP_r, int CP_c)
{
	int rc = 0, cc = 0;
	rc = rand() % CP_r;
	cc = rand() % CP_c;
	while (c[rc][cc] == 'B' || c[rc][cc] == 'X')
	{
		rc = rand() % CP_r;
		cc = rand() % CP_c;
	}
	if (c[rc][cc] == 'O')
		c[rc][cc] = 'B';
	else
		c[rc][cc] = 'X';
	for (rc = 0; rc < CP_r; rc++)
	{
		printf("\n");
		for (cc = 0; cc < CP_c; cc++)
			printf("%c ", c[rc][cc]);
	}
}
