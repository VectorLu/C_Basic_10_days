//
//  readline.h
//  inventory
//
//  Created by rooooooot on 12/28/16.
//  Copyright © 2016 VectorLu. All rights reserved.
//

#ifndef readline_h
#define readline_h

#include <stdio.h>
/**************************************************
 * read_line:
 * Skips leading white-space characters, then reads
 * the remainder of the input line and stores it in
 * str. Truncates the line if its length exceeds n.
 * Returns the number of characters stored.
 **************************************************/
int vl_read_line(char str[], int n);
#endif /* readline_h */
