#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <stdio.h>
#include "rubiks_cube.h"

/**
 * @brief 
 *  This algorithm is used to solve a corner piece while solving layer1
 *  and also used to solve a corner piece at the end
 */
void L(boolean direction, boolean print, int count);

/**
 * @brief 
 * This algorithm is used to solve the second layer of rubik's cube 
 */
void layer2(boolean direction, boolean print, int count);

/**
 * @brief 
 * This algorithm is used to create a plus mark at the top
 */
void twistFront(boolean direction, boolean print, int count);

/**
 * @brief 
 * This algorithm is used to solve the center pieces of the top layer
 */
void upTwist(boolean direction, boolean print, int count);

/**
 * @brief 
 * This algorithm is used to solve the corner pieces of the top layer 
 */
void corner(boolean direction, boolean print, int count);

#endif
