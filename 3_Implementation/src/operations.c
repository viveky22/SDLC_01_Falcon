#include <stdio.h>
#include <string.h>
#include "rubiks_cube.h"

void rotateFaceColors(int i, boolean direction)
{
    char front_color[9][10];

    if (direction == true)
    { //if(direction==true)  (clkwise rotation)

        //copying the rotated face colors into front_color[]
        strcpy(front_color[0], getColorAt(i,2,0,FRONT));
        strcpy(front_color[1], getColorAt(i,1,0,FRONT));
        strcpy(front_color[2], getColorAt(i,0,0,FRONT));
        strcpy(front_color[3], getColorAt(i,2,1,FRONT));
        strcpy(front_color[4], getColorAt(i,1,1,FRONT));
        strcpy(front_color[5], getColorAt(i,0,1,FRONT));
        strcpy(front_color[6], getColorAt(i,2,2,FRONT));
        strcpy(front_color[7], getColorAt(i,1,2,FRONT));
        strcpy(front_color[8], getColorAt(i,0,2,FRONT));

    } //if(direction==true)
    else if (direction == false)
    { //else if(direction==false) (anti-clock wise rotation)

        //copying the rotated face colors into front_color[]
        strcpy(front_color[0], getColorAt(i,0,2,FRONT));
        strcpy(front_color[1], getColorAt(i,1,2,FRONT));
        strcpy(front_color[2], getColorAt(i,2,2,FRONT));
        strcpy(front_color[3], getColorAt(i,0,1,FRONT));
        strcpy(front_color[4], getColorAt(i,1,1,FRONT));
        strcpy(front_color[5], getColorAt(i,2,1,FRONT));
        strcpy(front_color[6], getColorAt(i,0,0,FRONT));
        strcpy(front_color[7], getColorAt(i,1,0,FRONT));
        strcpy(front_color[8], getColorAt(i,2,0,FRONT));

    } //else if(direction==false)

    //setting the face colors after copying it from the front_color[]
    setColorAt(i, 0, 0, FRONT, front_color[0]);
    setColorAt(i, 0, 1, FRONT, front_color[1]);
    setColorAt(i, 0, 2, FRONT, front_color[2]);
    setColorAt(i, 1, 0, FRONT, front_color[3]);
    setColorAt(i, 1, 1, FRONT, front_color[4]);
    setColorAt(i, 1, 2, FRONT, front_color[5]);
    setColorAt(i, 2, 0, FRONT, front_color[6]);
    setColorAt(i, 2, 1, FRONT, front_color[7]);
    setColorAt(i, 2, 2, FRONT, front_color[8]);

}

void rotateSideColors(int i, boolean direction)
{

    char side_color[12][10];
    
    if (direction == true)
    { //if(direction==true) (clkwise direction)
        strcpy(side_color[0], getColorAt(i, 2, 0, LEFT));
        strcpy(side_color[1], getColorAt(i, 1, 0, LEFT));
        strcpy(side_color[2], getColorAt(i, 0, 0, LEFT));
        strcpy(side_color[3], getColorAt(i, 0, 0, UP));
        strcpy(side_color[4], getColorAt(i, 0, 1, UP));
        strcpy(side_color[5], getColorAt(i, 0, 2, UP));
        strcpy(side_color[6], getColorAt(i, 0, 2, RIGHT));
        strcpy(side_color[7], getColorAt(i, 1, 2, RIGHT));
        strcpy(side_color[8], getColorAt(i, 2, 2, RIGHT));
        strcpy(side_color[9], getColorAt(i, 2, 2, DOWN));
        strcpy(side_color[10], getColorAt(i, 2, 1, DOWN));
        strcpy(side_color[11], getColorAt(i, 2, 0, DOWN));

    } //if(direction==true)
    else if (direction == false)
    { //else if(direction==false) (anti-clkwise direction)
        strcpy(side_color[0], getColorAt(i, 0, 2, RIGHT));
        strcpy(side_color[1], getColorAt(i, 1, 2, RIGHT));
        strcpy(side_color[2], getColorAt(i, 2, 2, RIGHT));
        strcpy(side_color[3], getColorAt(i, 2, 2, DOWN));
        strcpy(side_color[4], getColorAt(i, 2, 1, DOWN));
        strcpy(side_color[5], getColorAt(i, 2, 0, DOWN));
        strcpy(side_color[6], getColorAt(i, 2, 0, LEFT));
        strcpy(side_color[7], getColorAt(i, 1, 0, LEFT));
        strcpy(side_color[8], getColorAt(i, 0, 0, LEFT));
        strcpy(side_color[9], getColorAt(i, 0, 0, UP));
        strcpy(side_color[10], getColorAt(i, 0, 1, UP));
        strcpy(side_color[11], getColorAt(i, 0, 2, UP));
    } //else if(direction==false)

    //setting the side colors after copying it from the side_color[]
    setColorAt(i, 0, 0, UP, side_color[0]);
    setColorAt(i, 0, 1, UP, side_color[1]);
    setColorAt(i, 0, 2, UP, side_color[2]);
    setColorAt(i, 0, 2, RIGHT, side_color[3]);
    setColorAt(i, 1, 2, RIGHT, side_color[4]);
    setColorAt(i, 2, 2, RIGHT, side_color[5]);
    setColorAt(i, 2, 2, DOWN, side_color[6]);
    setColorAt(i, 2, 1, DOWN, side_color[7]);
    setColorAt(i, 2, 0, DOWN, side_color[8]);
    setColorAt(i, 2, 0, LEFT, side_color[9]);
    setColorAt(i, 1, 0, LEFT, side_color[10]);
    setColorAt(i, 0, 0, LEFT, side_color[11]);
}

void rotateFront(boolean direction, boolean print, int count, int subcount)
{

    rotateFaceColors(0, direction);
    rotateSideColors(0, direction);
    
    if(print == true){//if(print == true)
        if(direction == true){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"clkwise");
        }
        else if(direction == false){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"anti-clkwise");
        }
    }//if(print == true)
}

void rotateMiddle(boolean direction, boolean print, int count, int subcount)
{

    rotateSideColors(1, direction);

    if(print == true){//if(print == true)
        if(direction == true){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"clkwise");
        }
        else if(direction == false){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"anti-clkwise");
        }
    }//if(print == true)

}

void rotateBack(boolean direction, boolean print, int count, int subcount)
{

    rotateFaceColors(2, direction);
    rotateSideColors(2, direction);

    if(print == true){//if(print == true)
        if(direction == true){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"clkwise");
        }
        else if(direction == false){
            printf("%d%c]%s(%s)\n",count,subcount,__func__,"anti-clkwise");
        }
    }//if(print == true)

}

/**************************************************************************************************************/

void rotateHorizontalFaceColors(int j, boolean direction)
{
    char front_color[9][10];

    if (direction == true)
    { //if(direction==true)  (clkwise rotation)

        //copying the rotated face colors into front_color[]
        strcpy(front_color[0], getColorAt(2,j,0,UP));
        strcpy(front_color[1], getColorAt(1,j,0,UP));
        strcpy(front_color[2], getColorAt(0,j,0,UP));
        strcpy(front_color[3], getColorAt(2,j,1,UP));
        strcpy(front_color[4], getColorAt(1,j,1,UP));
        strcpy(front_color[5], getColorAt(0,j,1,UP));
        strcpy(front_color[6], getColorAt(2,j,2,UP));
        strcpy(front_color[7], getColorAt(1,j,2,UP));
        strcpy(front_color[8], getColorAt(0,j,2,UP));

    } //if(direction==true)
    else if (direction == false)
    { //else if(direction==false) (anti-clock wise rotation)

        //copying the rotated face colors into front_color[]
        strcpy(front_color[0], getColorAt(0,j,2,UP));
        strcpy(front_color[1], getColorAt(1,j,2,UP));
        strcpy(front_color[2], getColorAt(2,j,2,UP));
        strcpy(front_color[3], getColorAt(0,j,1,UP));
        strcpy(front_color[4], getColorAt(1,j,1,UP));
        strcpy(front_color[5], getColorAt(2,j,1,UP));
        strcpy(front_color[6], getColorAt(0,j,0,UP));
        strcpy(front_color[7], getColorAt(1,j,0,UP));
        strcpy(front_color[8], getColorAt(2,j,0,UP));

    } //else if(direction==false)

    //setting the face colors after copying it from the front_color[]
    setColorAt(0,j,0, UP, front_color[0]);
    setColorAt(0,j,1, UP, front_color[1]);
    setColorAt(0,j,2, UP, front_color[2]);
    setColorAt(1,j,0, UP, front_color[3]);
    setColorAt(1,j,1, UP, front_color[4]);
    setColorAt(1,j,2, UP, front_color[5]);
    setColorAt(2,j,0, UP, front_color[6]);
    setColorAt(2,j,1, UP, front_color[7]);
    setColorAt(2,j,2, UP, front_color[8]);

}