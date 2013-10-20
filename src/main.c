/**
 * ateball: the command-line Magic Eight (8) Ball!
 * 
 * Copyright (C) 2013 Evan Bezeredi; bezeredi dot dev at gmail dot com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answers.h"


/**
 * Program entrance point.
 **/
int main(int argc, char *argv[]){
	int type;
	char *ans;

	/* Determine the type of answer to give */
	srand(rand());
	type = rand();

	/* Using that type, get an appropriate answer */
	ans = answer(type);

	/* Print the answer */
	puts(ans);

	exit(EXIT_SUCCESS);
}

