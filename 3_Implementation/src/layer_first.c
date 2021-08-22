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
        //
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