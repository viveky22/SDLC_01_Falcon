# LTTS Applied SDLC Project
L&amp;T Technology Services Mini-Project (GENESIS_AUGUST_2021)

# ***Rubik's Cube Solver***
The Rubik's Cube is a 3-D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture ***Ernő Rubik***. Originally called the Magic Cube, the puzzle was licensed by Rubik to be sold by Ideal Toy Corp. in 1980 via businessman Tibor Laczi and Seven Towns founder Tom Kremer. Rubik's Cube won the 1980 German Game of the Year special award for Best Puzzle. As of January 2009, 350 million cubes had been sold worldwide, making it the world's bestselling puzzle game and bestselling toy.

![image](https://user-images.githubusercontent.com/65846052/130062337-a520132d-b01b-4328-a85b-b0d02f9085d2.png)

## Abstract
* In this project, the user is able to provide colors present in the rubik's cube as input. 
* Based on the color information(input) provided by the user, a small check is done on whether the colors provided is valid or invalid. 
* If all the colors provided by the user is valid then the steps involved to solve the rubik's cube will be displayed using which the rubik's cube can be solved accordingly to the algorithm.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# BADGES 

|Build    |Static Code Analysis |Dynamic Code Analysis|Code Quality     |Unity   |Git Inspector|
|:--------|:--------|:--------|:----------------|:--------|:-----------|
|[![C/C++ CI](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml)    |    [![cppcheck-action](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml)   |    [![Dynamic Code Check](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml)    |  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/8a6f16c953994a68a5c039fa6f2a0c17)](https://www.codacy.com/gh/GEN-AUG/SDLC_01_Falcon/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=GEN-AUG/SDLC_01_Falcon&amp;utm_campaign=Badge_Grade) |[![Unit testing](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml)|[![Contribution Check - Git Inspector](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml)|
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## How to Build

### To build and execute:
```
make all
make run
```
### To execute in dev mode:
The colors are given in a string to setRubixCubeAtOnce function
```
make dev
```

### Input format:
For normal mode input the colors as asked.

For dev mode, edit the string of setRubixCubeAtOnce function as follows:

* The axis is shown below
* Each piece is considered as a node.
* There are total of 26 nodes.
* Input starts from Front Top Left corner(0,0,0).
* Input ends at the Back Bottom Right corner(2,2,2).
* i.e (0,0,0), (0,0,1) ...  (0,2,2), (1,0,0) ...  (1,2,2), (2,0, 0)...(2,2,2)  
* For Front and Back layer nodes( i = 0 and i = 2 ), at each node enter the facing colour, then the up/bottom colour( depending on position of node ), and finally the left/right colour.
* For middle layer ( i = 1 ), enter the up/bottom colour, then the left/right colour.

![Axis](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/2_Architecture/RubixCubeAxis.png)



### Documentation

```
make doc
```


## Folder Structure
|Folder|Description|
|:-----|:----------|
|1_Requirements|Documents detailing requirements and research|
|2_Architecture|Folders regarding design details|
|3_Implementation|Complete code and documentation|
|4_TestPlanAndOutput|Documents with test plan and procedure|
|5_Report|Project Report|
|6_ImagesAndVideos|Project output and videos|

## Contributors List
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



## Learning Materials 
1. [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [Markdown Basics](https://guides.github.com/features/mastering-markdown/)
3. [Git Inspector](https://github.com/ejwa/gitinspector)
4. [Github Workflow](https://docs.github.com/en/actions)




