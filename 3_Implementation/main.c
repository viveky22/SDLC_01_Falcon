#include "rubiks_cube.h"
#include "solve_cube.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    if(argc == 2){
        if(strcmp("dev",argv[1]) == 0){
            setRubixCubeAtOnce("GREEN RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
        }
        else{
            printf("Invalid arguments. Use dev for development.");
            return 0;
        }
        
    }
    else if(argc > 2){
        printf("Invalid arguments. Use dev for development.");
        return 0;
    }
    else{
        setRubixCube();
    }
    solveAll();  
    return 0;
}
