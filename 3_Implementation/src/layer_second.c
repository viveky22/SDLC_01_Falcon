#include <stdio.h>
#include <string.h>
#include "solve_cube.h"
    
//checks if there is any valid edge piece at the Up layer
boolean isAnyUpEdgePieceValid(){
    int j=0;
    
    char* upColor = getUpMidColor();
    char* frontColor = getFrontColor(0,j,1);
    char* frontUpColor = getUpColor(0,j,1);
    char* leftColor = getLeftColor(1,j,0);
    char* leftUpColor = getUpColor(1,j,0);
    char* backColor = getBackColor(2,j,1);
    char* backUpColor = getUpColor(2,j,1);
    char* rightColor = getRightColor(1,j,2);
    char* rightUpColor = getUpColor(1,j,2);
    
    boolean isFrontPieceValid = !((strcmp(frontColor,(upColor))==0)?true:false) && !((strcmp(frontUpColor,(upColor))==0)?true:false);
    boolean isLeftPieceValid = !((strcmp(leftColor,(upColor))==0)?true:false) && !((strcmp(leftUpColor,(upColor))==0)?true:false);
    boolean isBackPieceValid = !((strcmp(backColor,(upColor))==0)?true:false) && !((strcmp(backUpColor,(upColor))==0)?true:false);
    boolean isRightPieceValid = !((strcmp(rightColor,(upColor))==0)?true:false) && !((strcmp(rightUpColor,(upColor))==0)?true:false);
    
    if(isFrontPieceValid || isLeftPieceValid || isBackPieceValid || isRightPieceValid)
        return true;
    else 
        return false;
}