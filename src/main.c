/**
 * ateball: the command-line Magic Eight (8) Ball!
 * 
 * Copyright (C) 2013 Evan Bezeredi <bezeredi.dev@gmail.com>
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
#include <unistd.h>
#include "answers.h"


/* Local Functions */
static void parse_opts(int argc, char *argv[]);
static void help(void);

/* Local Variables */
static int ext = 0;

/**
 * Program entrance point.
 **/
int main(int argc, char *argv[]){
	int seed;

	if(argc != 1) parse_opts(argc, argv);

	/* Generate a pseudo-random seed */
	seed = 0x7FFFFFFF;	/* Largest 31-bit prime */
	srand(time(NULL) + (((int) &(seed) & seed) ^ seed));

	/* Get that answer and print it to the screen */
	puts(answer());

	exit(EXIT_SUCCESS);
}


/**
 * Parse the command-line options to the program.
 *
 * @param argc - the count of arguments to the program.
 * @param argv - the option vector to the program.
 **/
static void parse_opts(int argc, char *argv[]){
	int opt;

	while((opt = getopt(argc, argv, "he")) != -1){
		switch(opt){
			case 'h':				/* Help */
				help();
				exit(EXIT_SUCCESS);
			case 'e':				/* Extended Answers Enabled */
				ext = 1;
				break;
			default:					/* Invalid Option */
				fprintf(stderr, "%s: invalid option: %d. Exit.\n", argv[0], opt);
				exit(EXIT_FAILURE);
		}
	}

	return;
}


/**
 * Print the help information of the program.
 **/
static void help(void){
	printf(
			"NAME\n"
			"    ateball - The Command-line Magic 8 Ball!\n\n"
			"USAGE\n"
			"    ateball [-h | -e]\n\n"
			"OPTIONS\n"
			"    -h   Display this help information.\n"
			"    -e   Enable extended answers.\n\n"
	);
	
	return;
}

