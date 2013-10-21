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
#ifndef ANSWERS_H
#define ANSWERS_H

const int NUM_TYPES;
const int NUM_YES;
const int NUM_NO;
const int NUM_ASK_AGAIN_LATER;

/* Types of possible questions */
enum type_e{
	YES = 0,
	NO = 1,
	ASK_AGAIN_LATER = 2
};


/* Prototypes */
extern char* answer(void);
extern char* yes(void);
extern char* no(void);
extern char* ask_again_later(void);



#endif /* ANSWERS_H */

