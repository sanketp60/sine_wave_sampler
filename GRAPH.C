#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
int main()
{
	int gd = DETECT, gm;
	int A=50, i=640, n, f, fs;
	float x[640];
	printf("Enter frequency: ");
	scanf("%d", &f);
	printf("\nEnter sampling frequency: ");
	scanf("%d", &fs);
	getch();
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(0,getmaxy()*1/4,0,getmaxy()*3/4);
	for(n=0;n<i;n++)
	{
		delay(25);
		putpixel(n,(A*sin(2*3.142*f*n/fs))+getmaxy()/2,15);
	}
	getch();
	closegraph();
}