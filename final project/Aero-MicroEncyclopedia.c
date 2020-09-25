#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void search();
void fact();
void login();
void admin();
void add();
void edit();
void delet();
void complain();
void creators();
void help();
void leave();


struct air
{
	char model[100],name[100],launch[100];
	int fuel,seats;
	float length,mach;
};

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main()
{
  abc:
	system("cls");
    gotoxy(100,2);
    printf("Login");
	gotoxy(20,6);
	printf("***************************************AERO-ENCYCLOPEDIA***************************************");
	gotoxy(20,9);
	printf("==========================================MAIN MENU==========================================");
	gotoxy(20,11);
	printf("1. Search for information");
	gotoxy(20,13);
	printf("2. Random Fact");
	gotoxy(20,15);
	printf("3. Login");
	gotoxy(20,17);
	printf("4. Help and Support");
	gotoxy(20,19);
	printf("5. Complaints and Suggestions");
	gotoxy(20,21);
	printf("6. Exit");
	gotoxy(20,22);
	printf("=============================================================================================");
	gotoxy(20,24);
	printf("Enter your choice: ");
	switch(getch())
    {
       case '1':
        search();
        break;
        case '2':
        fact();
        break;
        case '3':
        login();
        break;
        case '4':
        help();
        break;
        case '5':
        complain();
        break;
        case '6':
        leave();
        break;
        default:
        {

            gotoxy(20,26);
            printf("Wrong Entry!!Please re-enter correct option");
            if(getch())
            goto abc;
        }
    }
	return 0;
}
void search()
{ char mod[50];struct air a;
  int i;
  re:
  system("cls");
      gotoxy(100,2);
    printf("Login");
	gotoxy(20,6);
	printf("***************************************AERO-ENCYCLOPEDIA***************************************");
    FILE *fp;
    fp=fopen("aircraft.txt","r");
    printf("\n\t\t\tEnter the model number of the aircraft you want to view ?");
    scanf("%s",mod);
    while(!feof(fp))
    {
        fscanf(fp,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,&a.length,&a.fuel,&a.mach,&a.seats);
        if(strcmp(a.model,mod)==0)
             {	gotoxy(20,10);
            printf("DETAILS OF AIRCRAFT\n");
            	gotoxy(20,11);;
            printf("===================================");
            gotoxy(20,13);
            printf("MODEL NUMBER :: ");
            printf("%s",a.model);
            gotoxy(20,15);
            printf("NAME OF AIRCRAFT :: ");
            printf("%s",a.name);
            gotoxy(20,17);
            printf("LAUNCH DATE :: ");
            printf("%s",a.launch);
            gotoxy(20,19);
            printf("LENGTH(in meter):: ");
            printf("%.2f",a.length);
            gotoxy(20,21);
            printf("FUEL CAPACITY (in Liters) :: ");
            printf("%d",a.fuel);
            gotoxy(20,23);
            printf("MACH NUMBER :: ");
            printf("%.2f",a.mach);
            gotoxy(20,25);
            printf("NUMBER OF SEATS :: ");
            printf("%d",a.seats);
            gotoxy(20,26);
            getch();
            goto X;
			 }

        }
        gotoxy(45,15);
        printf("DATA NOT FOUND !!");
        X:
        fclose(fp);
        getch();
        main();
}
 void fact()
 { FILE *fp;
  int n; char fac[500];
   fp= fopen("facts.txt","r");
   int num ;
   num=(rand() % 30)+1; /*(rand() % (upper - lower + 1)) + lower; */
   while(!feof(fp))
   {
       fscanf(fp,"%d %[^\n]s",&n,&fac);
       if(n==num)
       {
           system("cls");
           gotoxy(40,5);
           printf("RANDOM FACT");
           gotoxy(20,6);
           printf("================================================================");
           gotoxy(20,10);
           printf("%s",fac);
           getch();
           goto x;
           }
    }
    x:
    fclose(fp);
    main();
 }

char passw[10]={"password"};
int flag;
 void login()
 {
 	system("cls");
    char ch,pass[10],d[25]=" Password Protected";
    int i=0,j;
    gotoxy(20,10);
    for(j=0;j<20;j++)
    {
        Sleep(50);
        printf("*");
    }
    for(j=0;j<20;j++)
    {
        Sleep(50);
        printf("%c",d[j]);
    }
    for(j=0;j<20;j++)
    {
       Sleep(50);
        printf("*");
    }
    gotoxy(22,12);
    printf("Enter Password: ");
    while(ch!=13)
    {
        ch=getch();
        if(ch!=13 && ch!=8)
        {
            putch('*');
            pass[i] = ch;
            i++;
        }

        if(ch==8)
        {
            printf(" \b\b");
        }
    }
    pass[i] = '\0';
    if(strcmp(pass,passw)==0)
    {
        gotoxy(22,15);
        printf(" You're in.");
        gotoxy(22,16);
        printf(" Press any key to continue ");
        getch();
        admin();
    }
    else
    {   flag++;
        if(flag==3) creators();
        gotoxy(22,15);
        printf(" Incorrect Password");
        getch();
        login();
    }
 }
 void admin()
 {
 start:
	system("cls");
    gotoxy(100,2);
    printf("Logged in");
	gotoxy(20,6);
	printf("***************************************AERO-ENCYCLOPEDIA***************************************");
	gotoxy(20,9);
	printf("==========================================Enhancements==========================================");
	gotoxy(20,11);
	printf("1. Add data");
	gotoxy(20,13);
	printf("2. Edit data");
	gotoxy(20,15);
	printf("3. Remove data");
	gotoxy(20,17);
	printf("4. Log out");
	gotoxy(20,19);
	printf("=============================================================================================");
	gotoxy(20,21);
	printf("Enter your choice: ");
	switch(getch())
    {
        case '1':
        add();
        break;
        case '2':
        edit();
        break;
        case '3':
        delet();
		break;
        case'4':
         main();
        break;
        default:
        {

            gotoxy(20,22);
            printf("Wrong Entry!!Please re-enter correct option");
            if(getch())
            goto start;
        }
    }
}
void add()
{ struct air a;
int n,i;
FILE *fp;
 system("cls");
 gotoxy(100,2);
 printf("Logged in");
 gotoxy(20,6);
 printf("***************************************AERO-ENCYCLOPEDIA***************************************");
 gotoxy(40,8);
 printf("How many datas do you desire to input? ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {  fp=fopen("Aircraft.txt","a");
    system("cls");
    gotoxy(100,2);
    printf("Logged in");
	gotoxy(20,6);
	printf("***************************************AERO-ENCYCLOPEDIA***************************************");
    gotoxy(40,7);
    printf("FILL UP THE DETAILS");
    gotoxy(20,8);
    printf("================================================================");
            gotoxy(20,10);
            printf("MODEL NUMBER :: ");
            scanf("%s",a.model);
            gotoxy(20,12);
            printf("NAME OF AIRCRAFT :: ");
            scanf("%s",a.name);
            gotoxy(20,14);
            printf("LAUNCH DATE :: ");
            scanf("%s",a.launch);
            gotoxy(20,16);
            printf("LENGTH(in meter):: ");
            scanf("%f",&a.length);
            gotoxy(20,18);
            printf("FUEL CAPACITY (in Liters) :: ");
            scanf("%d",&a.fuel);
            gotoxy(20,20);
            printf("MACH NUMBER :: ");
            scanf("%f",&a.mach);
            gotoxy(20,22);
            printf("NUMBER OF SEATS :: ");
            scanf("%d",&a.seats);
            gotoxy(20,24);
            fprintf(fp,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,a.length,a.fuel,a.mach,a.seats);
            fclose(fp);
    }
    printf("---------------------Your record has been stored-------------------\n");
    getch();
     admin();
}
void edit()
{char ch[50];struct air a;
    int i,n;
    system("cls");
    gotoxy(100,2);
    printf("Logged in");
    gotoxy(20,6);
    printf("***************************************AERO-ENCYCLOPEDIA***************************************");
    gotoxy(40,8);
    FILE *f1, *f2;
    f2=fopen("aircraft.txt","r");
    f1=fopen("air.txt","w");
    printf("Enter the model number of the aircraft you want to edit ?");
    scanf("%s",ch);
    while(!feof(f2))
    {   system("cls");
        gotoxy(100,2);
        printf("Logged in");
        gotoxy(20,6);
        printf("***************************************AERO-ENCYCLOPEDIA***************************************");
        fscanf(f2,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,&a.length,&a.fuel,&a.mach,&a.seats);
        if(strcmp(a.model,ch)==0)
             {n=5;
           gotoxy(40,7);
           printf("FILL UP THE DETAILS");
           gotoxy(20,8);
           printf("================================================================");
            gotoxy(20,10);
            printf("MODEL NUMBER :: ");
            scanf("%s",a.model);
            gotoxy(20,12);
            printf("NAME OF AIRCRAFT :: ");
            scanf("%s",a.name);
            gotoxy(20,14);
            printf("LAUNCH DATE :: ");
            scanf("%s",a.launch);
            gotoxy(20,16);
            printf("LENGTH(in meter) :: ");
            scanf("%f",&a.length);
            gotoxy(20,18);
            printf("FUEL CAPACITY(in Liter) :: ");
            scanf("%d",&a.fuel);
            gotoxy(20,20);
            printf("MACH NUMBER :: ");
            scanf("%f",&a.mach);
            gotoxy(20,22);
            printf("NUMBER OF SEATS :: ");
            scanf("%d",&a.seats);
            fprintf(f1,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,a.length,a.fuel,a.mach,a.seats);
            gotoxy(20,24);
            printf("The Data is Edited!!");
            gotoxy(20,25);
			getch();
        }
        else
        fprintf(f1,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,a.length,a.fuel,a.mach,a.seats);

        }
        fclose(f2);fclose(f1);
        remove("aircraft.txt");
        rename("air.txt", "aircraft.txt");
        if(n!=5) {gotoxy(45,15);
        printf("DATA NOT FOUND !!");}
        getch();
        admin();
}
void delet()
{char ch[50];struct air a;
  int i,n;
  system("cls");
    FILE *f1, *f2;
    f2=fopen("aircraft.txt","r");
    f1=fopen("air.txt","w");
    gotoxy(100,2);
    printf("Logged in");
    gotoxy(20,6);
    printf("***************************************AERO-ENCYCLOPEDIA***************************************");
    gotoxy(40,8);
    printf("Enter the model number of the aircraft you want to delete?");
    scanf("%s",ch);
    while(!feof(f2))
    {   system("cls");
        fscanf(f2,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,&a.length,&a.fuel,&a.mach,&a.seats);
        if(strcmp(a.model,ch)==0)
             { n=5;
            gotoxy(45,15);
            printf("The Data has been removed!!");
            gotoxy(20,24);
            getch();
        }
        else
        fprintf(f1,"%s\t%s\t%s\t%f\t%d\t%f\t%d\n",a.model,a.name,a.launch,a.length,a.fuel,a.mach,a.seats);
    }
        fclose(f2);fclose(f1);
        remove("aircraft.txt");
        rename("air.txt", "aircraft.txt");
        if(n!=5){
        gotoxy(35,15);
		printf("Data Not Found!!");
		getch();}
        admin();
}
 void help()
 	{system("cls");
 	gotoxy(35,10);
 	printf("HELP AND SUPPORT");
 	gotoxy(30,12);
	printf("======================================================");
	gotoxy(30,13);
	printf("This program is a an interactive electronic platform \n");
	gotoxy(30,14);
	printf("to gain knowledge on aerospace industry. It is an interface \n");
	gotoxy(30,15);
	printf("for aerospace enthusiasts to gaining complete knowledge on  \n");
    gotoxy(30,16);
	printf("growing aerospace industry along with recent trends\n\n");
	leave();
}

void complain()
{   system("cls");
	FILE *f;
	f=fopen("suggest.txt","a");
	char com[200];
	gotoxy(35,10);
	printf("ANY SUGGESTIONS AND COMPLAINTS");
	gotoxy(30,12);
	printf("======================================================");
	gotoxy(30,13);
	gets(com);
	fprintf(f,"%s\n",com);
	gotoxy(25,20);
    printf("Your complains have been submitted. We will try our best to resolve the problems.\n\n");
	fclose(f);
	leave();

}
void leave()
{   char decision;
	printf("\n Do you want to exit(y/n)? ");
	decision=getchar();
	if(decision=='n'|| decision=='N')
	 main();
	 else
	 creators();


}

void creators()
{   system("cls");
    gotoxy(40,10);
    printf("Created by");
    gotoxy(40,11);
    printf("==========================");
    gotoxy(40,12);
    printf("Bibek Parajuli");
    gotoxy(40,13);
    printf("Dipesh Kunwar");
    gotoxy(40,14);
    printf("Ganesh Dhungana");
    gotoxy(40,15);
    printf("Mandeep Prasad Shah");
    gotoxy(40,15);
    exit(0);
}
