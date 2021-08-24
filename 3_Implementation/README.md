# Implementation

## Folder Structure
Folder        | Description
--------------| ----------------------------------------------
`inc`         |  header files
`src`         | Source code files for solving rubik's cube
`test`        | All source code and data for testing purposes
`unity`       | Files for unit testing

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

### Test

```
make test
```

### Coverage

```
make coverage
```

### Dynamic analysis

```
make dynamic
```

### Static analysis

```
make static
```

### Uninstall
```
make clean
```