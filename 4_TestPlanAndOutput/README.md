## Test Plan

## High Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | Type of Test |
| --- | --- | --- | --- | --- | --- |
| H_01 | Software Testing | Checks if the code is working as expected, by considering the test cases | Pass | Pass | Scenario Based |
| H_02 | System Testing | Checks if the system returns the expected output | Pass | Pass| Boundary Based  |


## Low Level Test Plan 

| Test ID | Function name | Description | Return type | Valid Input Range |	Output Range | Output for out of range/invalid inputs | Type of Test | Status (PASS/FAIL) |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| L_01 | is_i_j_k_valid | checks if the given i,j,k value is valid or not | boolean | i,j,k value between 0 and 2 | 0 and 1 | 0 | unit test | |
| L_02 | isIndexValid | checks if the given index is valid or not for a given i,j,k value| boolean | i,j,k,index value between 0 and 2 | 0 and 1| 0 | unit test | |
| L_04 | isPositionValid | checks if the given position is valid or not | boolean | position value can be FRONT, BACK, UP, DOWN, LEFT, RIGHT | 0 and 1 | 0 | unit test | |
| L_05 | getSize | returns size for given i,j,k values | int |  i,j,k value between 0 and 3 | 0 to 2 | -1 | unit test | |
| L_06 | getPosition | returns position for given i,j,k,index values | string | i,j,k,index value between 0 and 2 | FRONT, UP, LEFT, RIGHT, BACK, DOWN  | NULL | unit test | |
| L_07 | getLocation | returns location for given i,j,k values | int | i,j,k value between 0 and 2 | all possible locations of rubik's cube | NULL | unit test | |
| L_08 | get_index | returns index value for given i,j,k,position values | int | i,j,k value between 0 and 2  | 0 to 2 | -1 | unit test | |
| L_09 | isNodeValid | checks whether all the Nodes entered by the user is valid or not | boolean | N.A(colors from the user) | 0 and 1 | 0 | unit test | |
| L_10 | isRubiksCubeValid | checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit | boolean | N.A(colors from the user) | 0 and 1 | 0 | unit test | |
