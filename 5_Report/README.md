##                                                                      PROJECT REPORT

# ***Rubik's Cube Solver***

![2021-08-22 (2)](https://user-images.githubusercontent.com/65846052/130355822-6a93f313-8170-448d-8e05-b02ebd44aa49.png)

## PROJECT MEMBERS
|PS No.|Name|
|:-------|:------------|
|99005677 |Nikhil Nevin Vas |
|99005655 |Vinay B C |
|99005642 |N Namratha Reddy |
|99005698 |Sampanna T |
|99005639 |Harshitha M S |
|99005686 |Hamsa G |
|99005675 |Shruthi Suresh |
|99005696 |Dibyanshu Gupta |
|99005697 |Chandippa Sai Ram |
|99005692 |Kausikaa B |
|99005643 |Uttam R |

## ABSTRACT
The Rubik's Cube is a 3-D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture ***Ernő Rubik***. Originally called the Magic Cube, the puzzle was licensed by Rubik to be sold by Ideal Toy Corp. in 1980 via businessman Tibor Laczi and Seven Towns founder Tom Kremer. Rubik's Cube won the 1980 German Game of the Year special award for Best Puzzle. As of January 2009, 350 million cubes had been sold worldwide, making it the world's bestselling puzzle game and bestselling toy.
In this project, the user is able to provide colors present in the rubik's cube as input. Based on the color information (input) provided by the user, a small check is done on whether the colors provided is valid or invalid. If all the colors provided by the user is valid then the steps to solve the rubik's cube will be displayed using which the rubik's cube can be solved.

## FOLDER STRUCTURE
|Folder|Description|
|:-----|:----------|
|1_Requirements|Documents detailing and research|
|2_Architecture|Documents regarding design details|
|3_Implementation|Complete code and documentation|
|4_TestPlanAndOutput|Documents with test plan and procedure|
|5_Report|Project Report|
|6_ImagesAndVideos|Project output and videos|

## INTRODUCTION
In this project the user is able to provide colors present in the rubik's cube as input. Based on the color information provided by the user a small check is done, on whether the colors provided is valid or not. If all the colors provided by the user is valid then the number of steps required to solve the rubik's cube will be displayed using which the rubik's cube can be solved.

![image](https://user-images.githubusercontent.com/65846052/130062337-a520132d-b01b-4328-a85b-b0d02f9085d2.png)


## OBJECTIVE 
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
|ID|FUNCTIONS|DESCRIPTION|STATUS|
|:-------|:-------|:-------|:-------|
|LR01|isNodeValid|checks if all the Nodes entered by the user is valid or not|Technical|
|LR02|isRubiksCubeValid|checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit|Technical|

### BASIC OPERATIONS
|ID|FUNCTIONS|DESCRIPTION|STATUS|
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
|ID|FUNCTIONS|DESCRIPTION|STATUS|
|:-------|:-------|:-------|:-------|
|LR12|L|This algorithm is used to solve a corner piece while solving layer1 and also used to solve corner piece at the end|Technical|
|LR13|layer2|This algorithm is used to solve the second layer of rubik's cube |Technical|
|LR14|twistFront|This algorithm is used to create a plus mark at the top|Technical|
|LR15|upTwist|This algorithm is used to align the edge pieces of the top layer|Technical|
|LR16|corner|algorithm is used to solve the corner pieces of the top layer|Technical|

### SOLUTION
|ID|FUNCTIONS|DESCRIPTION|STATUS|
|:-------|:-------|:-------|:-------|
|LR17|plusBottom|creates a plus mark at the bottom|Technical|
|LR18|layerFirst|completes the first layer|Technical|
|LR19|layerSecond|completes the second layer if first layer is complete|Technical|
|LR20|plusTop|cretes a plus mark at the top after solving first and second layer|Technical|
|LR21|alignCenter|aligns all the centers of the top layer|Technical|
|LR20|cornerAlign|positions the corner pieces(at the top) at the right location|Technical|
|LR22|layerThird|solves the corner pieces|Technical|
|LR23|solveAll|uses all the above functions to solve the rubik's cube|Technical|

### Steps for Execution
* Clone the repository.

### BADGES

|Build    |Static Code Analysis |Dynamic Code Analysis|Code Quality     |Unity   |Git Inspector|
|:--------|:--------|:--------|:----------------|:--------|:-----------|
|[![C/C++ CI](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml)    |    [![cppcheck-action](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml)   |    [![Dynamic Code Check](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml)    |  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/8a6f16c953994a68a5c039fa6f2a0c17)](https://www.codacy.com/gh/GEN-AUG/SDLC_01_Falcon/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=GEN-AUG/SDLC_01_Falcon&amp;utm_campaign=Badge_Grade) |[![Unit testing](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml)|[![Contribution Check - Git Inspector](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml)|



