#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int update(char file_name[100])
{

	clrscr();
	char file[100]="";
	strcat(file,file_name);
	int serial_no, year, no_of_professors = 0;
	puts("\n\nEnter serial no: ");
	scanf("%d", &serial_no);
	puts("Enter year: ");
	scanf("%d", &year);
	puts("Enter no of professors: ");
	scanf("%d", &no_of_professors);
	fflush(stdin);

	char professors[10][100], research_topic[10][100];
	for (int i = 0; i < no_of_professors; i++)
	{
		printf("Enter %d professor name: ", i + 1);
		gets(professors[i]);
		printf("Enter Reaserch topic for professor %s: ", professors[i]);
		gets(research_topic[i]);
	}

	strcat(file, ".txt");
	FILE *fptr = fopen(file, "a");
	if (fptr != NULL)
	{
		fputs("\n\n______________________________________________________________________________", fptr);
		fprintf(fptr, "\n%d\t%d\t", serial_no, year);
		for (int i = 0; i < no_of_professors; i++)
		{
			fprintf(fptr, "%s\t\t%s\n", professors[i], research_topic[i]);
		}
		fputs("\n\n______________________________________________________________________________", fptr);
	}
	else
	{
		puts("Wrong database name");
		return 0;
	}
	return 1;
}
void select()
{

	char str[100];
	clrscr();
	printf("\n--------------------------------------------------------------------------------");
	delay(100);
	printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
	delay(100);
	printf("\n--------------------------------------------------------------------------------");
	printf("\n");
	puts("Which you want to edit ?");
	printf("\n");
	printf("\n1.DATABASE__(DATABASE)");
	printf("\n2.SOCIAL PLATFORMS__(SOCIAL)");
	printf("\n3.NETWORKING__(NETWORK)");
	printf("\n4.GAMING__(GAME)");
	printf("\n5.INTERNET OF THINGS__(INTERNET)");
	printf("\n6.AI(ARTIFICIAL INTELLIGENCE)__(ai)");
	printf("\n7.SE(SOFTWARE ENGINEERING)__(se)");
	printf("\n8.MEDIA AND COMMUNICATION__(media)");
	printf("\n9.ENVIRONMENTAL SCIENCE__(envri)");
	printf("\n10.SOCIAL DEVELOPMENT__(develop)");
	printf("\n11.ALL OF THEM__(all)");
	printf("\n\nChange:>>>");
	scanf("%s",str);
	update(str);
}
int main()
{

	char op;
	int i, x;
	char welcome[100] = "WELLCOME TO RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU.";
	clrscr();
	x = (80 - strlen(welcome)) / 2;
	for (i = 0; i <= strlen(welcome) - 1; i++)
	{
		gotoxy(x, 12);
		printf("%c", welcome[i]);
		delay(70);
		x++;
	}
	delay(50);
	clrscr();
	int gd = EGA, gm = EGAHI;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	outtextxy(200, 170, "LOADING......");
	rectangle(199, 179, 450, 191);
	for (int a = 0; a < 250; a++)
	{
		setcolor(1);
		rectangle(200, 180, 200 + a, 190);
		delay(10);
	}
	closegraph();
	clrscr();
	delay(100);
	printf("\n--------------------------------------------------------------------------------");
	delay(100);
	printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
	delay(100);
	printf("\n--------------------------------------------------------------------------------");
	delay(100);
	printf("\n");
	delay(100);
	printf("\t    **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-");
	delay(100);
	printf("\n\t       =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	delay(100);
	printf("\n\t       =                 WELCOME                   =");
	delay(100);
	printf("\n\t       =                   TO                      =");
	delay(100);
	printf("\n\t       =              RESEARCH AND		   =");
	delay(100);
	printf("\n\t       =               PUBLICATION		   =");
	delay(100);
	printf("\n\t       =        MANAGEMENT SYSTEM AT SMIU          =");
	delay(100);
	printf("\n\t       =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	delay(100);
	printf("\n\t   **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-");

menu:
	printf("\n\n");
	delay(100);
	printf("\n1.DATABASE\t\t\t\t\t7.SE(SOFTWARE ENGINEERING)");
	delay(100);
	printf("\n2.SOCIAL PLATFORMS\t\t\t\t8.MEDIA AND COMMUNICATION");
	delay(100);
	printf("\n3.NETWORKING\t\t\t\t\t9.ENVIRONMENTAL SCIENCE");
	delay(100);
	printf("\n4.GAMING\t\t\t\t\t10.SOCIAL DEVELOPMENT");
	delay(100);
	printf("\n5.INTERNET OF THINGS\t\t\t\t11.ALL OF THEM");
	delay(100);
	printf("\n6.AI(ARTIFICIAL INTELLIGENCE)\t\t\t12.ADD NEW RESEACH TOPIC");

	char input[30];
	printf("\n\nSEARCH => ");
	scanf("%s", input);
	if ((strcmp(input, "database") == 0) || (strcmp(input, "DATABASE") == 0) || (strcmp(input, "data") == 0) || (strcmp(input, "DATA") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("DATABASE.txt", "r");
		char data[1000];
		while (!feof(fpointer))
		{

			fgets(data, 1000, fpointer);
			puts(data);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}

	else if ((strcmp(input, "socialplatforms") == 0) || (strcmp(input, "SOCIALPLATFORMS") == 0) || (strcmp(input, "social") == 0) || (strcmp(input, "SOCIAL") == 0))
	{
		FILE *fpointer;
		fpointer = fopen("SOCIAL.txt", "r");
		char social[1000];
		clrscr();
		while (!feof(fpointer))
		{

			fgets(social, 1000, fpointer);
			puts(social);
			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N)......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "gaming") == 0) || (strcmp(input, "GAMING") == 0) || (strcmp(input, "game") == 0) || (strcmp(input, "GAME") == 0))
	{
		FILE *fpointer;

		fpointer = fopen("GAME.txt", "r");
		char game[1000];
		clrscr();
		while (!feof(fpointer))
		{

			fgets(game, 1000, fpointer);
			puts(game);
			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).....");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "networking") == 0) || (strcmp(input, "NETWORKING") == 0) || (strcmp(input, "network") == 0) || (strcmp(input, "NETWORK") == 0))
	{
		FILE *fpointer;
		fpointer = fopen("NETWORK.txt", "r");
		char network[1000];
		clrscr();
		while (!feof(fpointer))
		{

			fgets(network, 1000, fpointer);
			puts(network);
			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N)....");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}

	else if ((strcmp(input, "internetofthing") == 0) || (strcmp(input, "INTERNETOFTHING") == 0) || (strcmp(input, "internet") == 0) || (strcmp(input, "INTERNET") == 0) || (strcmp(input, "thing") == 0) || (strcmp(input, "THING") == 0))
	{
		FILE *fpointer;
		fpointer = fopen("internet.txt", "r");
		char internet[1000];
		clrscr();
		while (!feof(fpointer))
		{

			fgets(internet, 1000, fpointer);
			puts(internet);
			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "ai") == 0) || (strcmp(input, "AI") == 0) || (strcmp(input, "ARTIFICIALINTELLIGENCE") == 0) || (strcmp(input, "artificialintelligence") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("ai.txt", "r");
		char ai[1000];
		while (!feof(fpointer))
		{

			fgets(ai, 1000, fpointer);
			puts(ai);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	if ((strcmp(input, "se") == 0) || (strcmp(input, "SE") == 0) || (strcmp(input, "softwareengineering") == 0) || (strcmp(input, "SOFTWAREENGINEERING") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("se.txt", "r");
		char se[1000];
		while (!feof(fpointer))
		{

			fgets(se, 1000, fpointer);
			puts(se);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "media") == 0) || (strcmp(input, "MEDIA") == 0) || (strcmp(input, "mediaandcommunication") == 0) || (strcmp(input, "MEDIAANDCOMMUNICATION") == 0) || (strcmp(input, "communication") == 0) || (strcmp(input, "COMMUNICATION") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("media.txt", "r");
		char media[1000];
		while (!feof(fpointer))
		{

			fgets(media, 1000, fpointer);
			puts(media);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "environmental") == 0) || (strcmp(input, "ENVIRONMENTAL") == 0) || (strcmp(input, "environmentalscience") == 0) || (strcmp(input, "ENVIRONMENTALSCIENCE") == 0) || (strcmp(input, "science") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("envri.txt", "r");
		char envir[1000];
		while (!feof(fpointer))
		{

			fgets(envir, 1000, fpointer);
			puts(envir);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "socialdevelopment") == 0) || (strcmp(input, "SOCIALDEVELOPMENT") == 0) || (strcmp(input, "development") == 0))
	{
		FILE *fpointer;
		clrscr();
		fpointer = fopen("develop.txt", "r");
		char dev[1000];
		while (!feof(fpointer))
		{

			fgets(dev, 1000, fpointer);
			puts(dev);

			delay(300);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
	else if ((strcmp(input, "allofthem") == 0) || (strcmp(input, "ALLOFTHEM") == 0) || (strcmp(input, "all") == 0) || (strcmp(input, "ALL") == 0))
	{
		FILE *fpointer;
		fpointer = fopen("All.txt", "r");
		char all[5000];
		clrscr();
		while (!feof(fpointer))
		{

			fgets(all, 5000, fpointer);
			puts(all);
			delay(200);
		}
		fclose(fpointer);
		delay(100);
		printf("\nTHANK YOU");
		delay(100);
		printf("\nARE YOU SURE");
		delay(100);
		printf("\n\nDo want to continue (Y/N).......");
		scanf("%c", &op);
		op = getche();
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}else if((stricmp(input,"add")==0)||(stricmp(input,"ADD")==0))
	{

		select();

	}
	else
	{
		clrscr();
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		delay(100);
		printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
		delay(100);
		printf("\n--------------------------------------------------------------------------------");
		printf("\n");
		delay(100);
		printf("\n\nOOPS!! PLEASE WRITE CORRECT STRING.......");
		delay(100);
		printf("\n\nDo want to continue (Y/N):");
		scanf("%c", &op);
		op = getche();
		if ((op == 'Y') || (op == 'y'))
		{
			goto menu;
		}
		else
		{
			goto end;
		}
	}
end:
	printf("\n\n\n");
	clrscr();
	delay(100);
	printf("\n--------------------------------------------------------------------------------");
	delay(100);
	printf("               RESEARCH AND PUBLICATION MANAGEMENT SYSTEM AT SMIU  ");
	delay(100);
	printf("\n--------------------------------------------------------------------------------");
	printf("\n");

	gotoxy(33, 12);
	delay(100);
	printf("CREATED BY:");
	delay(100);
	printf("\n\t\t\t 1=> SHAHARYAR ALI.(CSC-21F-116)");
	delay(100);
	printf("\n\t\t\t 2=> SYED SHEHRYAR HASAN.(CSC-21F-124)");
	delay(100);
	printf("\n\t\t\t 3=> YASIR ALI.(CSC-21F-132)");
	getch();
	return (0);
}
