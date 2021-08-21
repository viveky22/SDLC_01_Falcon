/**
 * @file rubiks_cube.h
 * 
 * @author Vinay B C (vinayvasista6@gmail.com)
 * 
 * @brief 
 * 1) Responsible for the creation of rubik's cube by taking user input.
 * 2) Checking if the input provided by the user is valid or not.
 * 3) Also performs all the operations that a rubik's cube can do like,
 *    (a) horizontal
 *    (b) vertical
 *    (c) rotational
 *
 * @date 2021-08-21
 * 
 */
#ifndef RUBIKS_CUBE_H
#define RUBIKS_CUBE_H

#include <stdio.h>
#include <stdlib.h>

#define DIMENSION 3
#define FRONT "FRONT"
#define MIDDLE "MIDDLE"
#define BACK "BACK"
#define UP "UP"
#define DOWN "DOWN"
#define RIGHT "RIGHT"
#define LEFT "LEFT"

#define ROTATE "ROTATE"
#define VERTICAL "VERTICAL"
#define HORIZONTAL "HORIZONTAL"

/**
 * @brief 
 * to use boolean values(i.e false=0, true=1 as compiler automatically sets it).
 */
typedef enum{
false,
true
}boolean;

/**
 * @brief 
 * 1)Node represents the smallest unit in the rubik's cube which might have 
 *   3 colors or 2 colors or 1 color or none.
 * 2)size field gives how many colors can the Node hold.
 * 3)color array has 3 char*s (literally char pointers) which holds the colors
 *   for the given Node.
 * 4)position array has 3 char*s (literally char pointers) which holds the
 *   positions(ex:UP,LEFT) for the given Node.
 */
typedef struct{
int size;
char *(color[3]);
}Node;


/**
 * @brief 
 * piece variable holds all the 27 Nodes in the form of 3-D array.
 */
Node piece[DIMENSION][DIMENSION][DIMENSION];

/**
 * @brief 
 * checks if the values i,j,k provided are valid or not
 * @param i 
 * @param j 
 * @param k 
 * @return boolean 
 */
boolean is_i_j_k_valid(int i, int j, int k);

/**
 * @brief 
 * checks if the index is valid for given i,j,k value
 * @param i 
 * @param j 
 * @param k 
 * @param index 
 * @return boolean 
 */
boolean isIndexValid(int i, int j, int k, int index);

/**
 * @brief 
 * checks is the position given is valid or not
 * @param position 
 * @return boolean 
 */
boolean isPositionValid(char* position);

/**
 * @brief 
 * returns the no of colors available in a given Node
 */
int getSize(int i, int j, int k);

/**
 * @brief 
 * returns the position for a given index of a given Node
 */
char* getPosition(int i, int j, int k, int index);

/**
 * @brief
 *   returns a String(char *) that specifies the location of Node i,j,k
 *   in 3-D array
 */
char* getLocation(int i, int j, int k);

/**
 * @brief
 * returns the color at a particular index(0 or 1 or 2) in a given Node
 */
char* getColor(int i, int j, int k, int index);

/**
 * @brief Get the index object
 * returns index for a given position
 */
int get_index(int i, int j, int k, char* position);

/**
 * @brief
 * returns the color at a particular position(ex: RIGHT,UP etc.) in a given Node
 */
char* getColorAt(int i, int j, int k, char* position);

/**
 * @brief 
 * returns the color at the center of the front layer 
 */
char* getFrontMidColor();

/**
 * @brief 
 * returns the color at the center of the back layer 
 */
char* getBackMidColor();

/**
 * @brief 
 * returns the color at the center of the upper layer 
 */
char* getUpMidColor();

/**
 * @brief 
 * returns the color at the center of the bottom layer 
 */
char* getDownMidColor();

/**
 * @brief 
 * returns the color at the center of the left layer 
 */
char* getLeftMidColor();

/**
 * @brief 
 * returns the color at the center of the right layer 
 */
char* getRightMidColor();

/**
 * @brief 
 * returns the front color for a given Node 
 */
char* getFrontColor(int i, int j, int k);

/**
 * @brief 
 * returns the back color for a given Node
 */
char* getBackColor(int i, int j, int k);

/**
 * @brief 
 * returns the color at the top for a given Node
 */
char* getUpColor(int i, int j, int k);

/**
 * @brief 
 * returns the color at the bottom for a given Node
 */
char* getDownColor(int i, int j, int k);

/**
 * @brief 
 * returns the left color for a given Node
 */
char* getLeftColor(int i, int j, int k);
