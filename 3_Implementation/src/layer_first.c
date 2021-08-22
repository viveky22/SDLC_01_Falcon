#include <stdio.h>
#include <string.h>
#include "solve_cube.h"

//checks whether the piece is at position 0,0,2 or not
boolean topFlag = false;
  
//checks whether corner piece is valid or not
boolean isCornerValid(int i, int j, int k){
    char* frontColor = getFrontMidColor();
    char* upColor = getUpMidColor();
    char* rightColor = getRightMidColor();
  
    boolean isValid=false;
    char colors[3][10];
    
    for(int index = 0; index < getSize(i,j,k); index++){
        strcpy(colors[index],getColor(i,j,k,index));
    }
    
    for(int index = 0; index < 3; index++){
        if(((strcmp(colors[index],frontColor)==0)?true:false) || ((strcmp(colors[index],rightColor)==0)?true:false) || ((strcmp(colors[index],upColor)==0)?true:false)){
            isValid=true;
        }
        else{
            isValid=false;
            break;
        }
    }
    return isValid;
}

/*
if topFlag=true implies corner piece is at 0,0,2
else if topFlag=false implies corner piece is at 0,2,2
*/
void placeThePiece(){

    if(isCornerValid(0,0,2)||isCornerValid(0,2,2)){  
        if(isCornerValid(0,0,2)) 
            topFlag=true;       //Only case where piece ends up at position 0,0,2
    }
    else if(isCornerValid(0,0,0)){ 
        leftVertical(false,true,++count,' ');
        downHorizontal(true,true,++count,' ');
        leftVertical(true,true,++count,' ');
    }
    else if(isCornerValid(0,2,0)){
        downHorizontal(true,true,++count,' ');
    }
    else if(isCornerValid(2,0,0)){
        rotateBack(false,true,++count,' ');
        downHorizontal(true,true,++count,' ');
        downHorizontal(true,true,++count,' ');
        rotateBack(true,true,++count,' ');
    }
    else if(isCornerValid(2,2,0)){
        downHorizontal(true,true,++count,' ');
        downHorizontal(true,true,++count,' ');
    }
    else if(isCornerValid(2,0,2)){
        rotateBack(true,true,++count,' ');
        downHorizontal(false,true,++count,' ');
        rotateBack(false,true,++count,' ');
    }
    else if(isCornerValid(2,2,2)){
        downHorizontal(false,true,++count,' ');
    }
}