# Requirements 

## Introduction 
In this project the user is able to provide colors present in the rubik's cube as input. Based on the color information provided by the user a small check is done, on whether the colors provided is valid or not. If all the colors provided by the user is valid then the number of steps required to solve the rubik's cube will be displayed using which the rubik's cube can be solved.

## Objective 
The main objectives of this project are: 
* To solve a rubik's cube using beginners method.
* To perform operations on rubik's cube and display the results.

## SWOT ANALYSIS
![SWOT](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/1_Requirements/swot.jpg)

## ***4 W's and 1 H***
## Who
Anyone who doesn't know how to solve the Rubik's cube can use this project.
## What
This project is concerned about solving the Rubik's cube by using layer by layer method.
## When 
Whenever there is an unsolved Rubik's cube this project helps in solving it.
## Why
As this project uses beginner's algorithm it can be easy to teach beginners who does not know how to solve it.
## How
Implemented using structure, pointers, enum and other functionalities of C.

Basic requirements that are very essential are:
* A rubik's cube application or a real rubik's cube.
* gcc compiler with a good system.
* Any of the two linux/windows.

## HIGH LEVEL REQUIREMENTS:

|ID|DESCRIPTION|CATEGORY|STATUS|
|:-----|:--------------------------------|:----------------|:----------|
|HR01|User shall be able to provide colors present in the rubik’s cube.|Technical|                       |
|HR02|User shall be able to solve a Rubik’s cube from any starting condition.|Technical|                  |
|HR03|User shall be able to see all the steps needed to solve the rubik's cube along with the colors displayed on the console.|Technical|            |
|HR04|User should be able to solve the cube in minimum number of steps.|Technical|Future|
|HR05|Displaying a message while the program is figuring out the solution would greatly improve the ease of use|Scenario|Future|
|HR06|Adding an option to view general Rubik's cube algorithms which will increase the uses of solving it easily.|Technical|Future|

## LOW LEVEL REQUIREMENTS:

### VALIDATION
|ID|FUNCTIONS|DESCRIPTION|CATEGORY|
|:-------|:-------|:-------|:-------|
|LR01|isNodeValid|checks if all the Nodes entered by the user is valid or not|Technical|
|LR02|isRubiksCubeValid|checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit|Technical|

### BASIC OPERATIONS
|ID|FUNCTIONS|DESCRIPTION|CATEGORY|
|:-------|:-------|:-------|:-------|
|LR03|rotateFront|performs rotate operation on the front layer|Technical|
|LR04|rotateMiddle|performs rotate operation on the middle layer|Technical|
|LR05|rotateBack|performs rotate operation on the back layer|Technical|
|LR06|upHorizontal|performs horizontal motion on upper layer|Technical|
|LR07|middleHorizontal|performs horizontal motion on the middle layer|Technical|
|LR08|downHorizontal|performs horizontal motion on the down layer|Technical|
|LR09|leftVertical|performs vertical motion on the left layer|Technical|
|LR10|middleVertical|performs vertical motion on the middle layer|Technical|
|LR11|rightVertical|performs vertical motion on the right layer|Technical|

### ALGORITHMS
|ID|FUNCTIONS|DESCRIPTION|CATEGORY|
|:-------|:-------|:-------|:-------|
|LR12|L|This algorithm is used to solve a corner piece while solving layer1 and also used to solve corner piece at the end|Technical|
|LR13|layer2|This algorithm is used to solve the second layer of rubik's cube |Technical|
|LR14|twistFront|This algorithm is used to create a plus mark at the top|Technical|
|LR15|upTwist|This algorithm is used to align the edge pieces of the top layer|Technical|
|LR16|corner|algorithm is used to solve the corner pieces of the top layer|Technical|

### SOLUTION
|ID|FUNCTIONS|DESCRIPTION|CATEGORY|
|:-------|:-------|:-------|:-------|
|LR17|plusBottom|creates a plus mark at the bottom|Technical|
|LR18|layerFirst|completes the first layer|Technical|
|LR19|layerSecond|completes the second layer if first layer is complete|Technical|
|LR20|plusTop|cretes a plus mark at the top after solving first and second layer|Technical|
|LR21|alignCenter|aligns all the centers of the top layer|Technical|
|LR20|cornerAlign|positions the corner pieces(at the top) at the right location|Technical|
|LR22|layerThird|solves the corner pieces|Technical|
|LR23|solveAll|uses all the above functions to solve the rubik's cube|Technical|

