![2021-08-22 (2)](https://user-images.githubusercontent.com/65846052/130355822-6a93f313-8170-448d-8e05-b02ebd44aa49.png)

## Abstract 
The Rubik's Cube is a 3-D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture ***Ernő Rubik***. Originally called the Magic Cube, the puzzle was licensed by Rubik to be sold by Ideal Toy Corp. in 1980 via businessman Tibor Laczi and Seven Towns founder Tom Kremer. Rubik's Cube won the 1980 German Game of the Year special award for Best Puzzle. As of January 2009, 350 million cubes had been sold worldwide, making it the world's bestselling puzzle game and bestselling toy.
In this project, the user is able to provide colors present in the rubik's cube as input. Based on the color information (input) provided by the user, a small check is done on whether the colors provided is valid or invalid. If all the colors provided by the user is valid then the steps to solve the rubik's cube will be displayed using which the rubik's cube can be solved.

## Folder Structure
|Folder|Description|
|:-----|:----------|
|1_Requirements|Documents detailing and research|
|2_Architecture|Documents regarding design details|
|3_Implementation|Complete code and documentation|
|4_TestPlanAndOutput|Documents with test plan and procedure|
|5_Report|Project Report|
|6_ImagesAndVideos|Project output and videos|

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
|ID|FUNCTIONS|DESCRIPTION|STATUS|
|:-------|:-------|:-------|:-------|
|LR01|isNodeValid|checks if all the Nodes entered by the user is valid or not|Technical|
|LR02|isRubiksCubeValid|checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit|Technical|
