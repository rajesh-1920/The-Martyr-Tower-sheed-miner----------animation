//Author	: Rajesh Biswas
//Codeforces 	: rajesh19
//Date 		: 21/02/2024

#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

int i,j,n,delay_time,x,y,tempx,tempy,row_end,column_end,gap,middle=300;

void Red_circle()
{
    setcolor(RED);
    delay_time=1;
    i=middle+5;
    for(j=600; j>=150; j--)
    {
        circle(i,j+1,65);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(i,j+1,BLACK);

        circle(i,j,65);
        setfillstyle(SOLID_FILL,RED);
        floodfill(i,j,RED);
        delay(delay_time);
    }
}

void Middle_Minar()
{
    setcolor(YELLOW);
    tempx=i=x=middle-45;
    tempy=j=y=10;
    row_end=x+90;
    column_end=y+290;
    n=3;
    while(n--)
    {
        for(; i>=x; i--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; j>=y; j--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(i=x; i<=row_end; i++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(j=y; j<=column_end; j++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }

        x+=5;
        y+=5;
        row_end+=5;
        column_end+=5;
    }
}

void Left_Minar()
{
    x=middle-150;
    y=100;
    setcolor(YELLOW);
    for(; i>=x; i--)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
    for(; j>=y; j--)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
    i=x;
    j=y;
    row_end=x+55;
    column_end=y+200;
    n=3;
    while(n--)
    {
        for(; i>=x; i--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; j>=y; j--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(i=x; i<=row_end; i++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(j=y; j<=column_end; j++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }

        x+=5;
        y+=5;
        row_end+=5;
        column_end+=5;
    }
}

void Right_Minar()
{
    x=middle+95;
    y=100;
    setcolor(YELLOW);
    for(; i<=x-3; i++)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
    for(; j>=y; j--)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
    for(; i<=x; i++)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
    i=x;
    j=y;
    row_end=x+55;
    column_end=y+200;
    n=3;
    while(n--)
    {
        for(; i>=x; i--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; j>=y; j--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(i=x; i<=row_end; i++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(j=y; j<=column_end; j++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }

        x+=5;
        y+=5;
        row_end+=5;
        column_end+=5;
    }
    for(; i>=tempx; i--)
    {
        line(i,j,i-1,j);
        if(i>middle+45)
            delay(delay_time);
    }
    for(; j>=tempy; j--)
    {
        line(i,j,i-1,j);
        delay(delay_time);
    }
}

void Base()
{
    setcolor(YELLOW);
    i=x=110;
    j=y=column_end-30;
    j--;
    row_end=500;
    column_end=y+100;
    n=4;
    gap=15;
    bool fl=true;
    while(n--)
    {
        for(; i<=row_end; i++)
        {
            line(i,j,i-1,j);
            if(fl)
                delay(delay_time);

        }
        fl=false;
        for(; j<=column_end; j++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; i>=x; i--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; j>=y; j--)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        for(; i<=x+gap+1; i++)
        {
            line(i,j,i-1,j);
            delay(delay_time);
        }
        x-=gap;
        row_end+=gap;
        column_end+=gap;
    }
}

void Draw_Line()
{
    setcolor(YELLOW);
    for(j=305; j>=15; j--)
    {
        if(j>=105)
        {
            line(tempx-65,j,tempx-65,j-1);
            line(tempx-80,j,tempx-80,j-1);

            line(tempx+165,j,tempx+165,j-1);
            line(tempx+180,j,tempx+180,j-1);
        }
        line(tempx+25,j,tempx+25,j-1);
        line(tempx+24,j,tempx+24,j-1);
        line(tempx+50,j,tempx+50,j-1);
        line(tempx+75,j,tempx+75,j-1);
        line(tempx+76,j,tempx+76,j-1);
        delay(delay_time);
    }
}

int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    {
        Red_circle();
        Middle_Minar();
        Left_Minar();
        Right_Minar();
        Base();
        Draw_Line();
    }

    getch();
    return 0;
}
