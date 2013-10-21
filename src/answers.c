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
#include "answers.h"


const int NUM_TYPES = 3;
const int NUM_YES = 10;
const int NUM_NO = 5;
const int NUM_ASK_AGAIN_LATER = 5;


/**
 * Returns an answer from one of the categories of available questions.
 *
 * @param seed - a number that will be used as a seed from which to grab a
 * 	random number from.
 * @return a pointer to a string literal, which is an answer from any of the
 * 	available categories.
 **/
char* answer(void){
	switch(rand() % NUM_TYPES){
		case 0:
			return yes();
		case 1:
			return no();
		case 2:
			return ask_again_later();
		default:
			return "Woops... No category. Sorry.";
	}
}


/**
 * Return an answer that falls under the "yes" category.
 *
 * @param seed - a number that will be used as a seed from which to grab a
 * 	random number from.
 * @return a pointer to a string literal, which is an answer from the "yes"
 * 	category.
 **/
char* yes(void){
	switch(rand() % NUM_YES){
		case 0:
			return "It is certain";
		case 1:
			return "It is decidedly so";
		case 2:
			return "Without a doubt";
		case 3:
			return "Yes definitely";
		case 4:
			return "You may rely on it";
		case 5:
			return "As I see it yes";
		case 6:
			return "Most likely";
		case 7:
			return "Outlook good";
		case 8:
			return "Yes";
		case 9:
			return "Signs point to yes";
		default:
			return "Woops... No positive answer. Sorry.";
	}
}


/**
 * Return an answer that falls under the "no" category.
 *
 * @param seed - a number that will be used as a seed from which to grab a
 * 	random number from.
 * @return a pointer to a string literal, which is an answer from the "no"
 * 	category.
 **/
char* no(void){
	switch(rand() % NUM_NO){
		case 0:
			return "Don't count on it";
		case 1:
			return "My reply is no";
		case 2:
			return "My sources say no";
		case 3:
			return "Outlook not so good";
		case 4:
			return "Very doubtful";
		default:
			return "Woops... No negative answer. Sorry.";
	}
}


/**
 * Return an answer that falls under the "ask again later" category.
 *
 * @param seed - a number that will be used as a seed from which to grab a
 * 	random number from.
 * @return a pointer to a string literal, which is an answer from the "ask
 * 	again later" category.
 **/
char* ask_again_later(void){
	switch(rand() % NUM_ASK_AGAIN_LATER){
		case 0:
			return "Reply hazy try again";
		case 1:
			return "Ask again later";
		case 2:
			return "Better not tell you now";
		case 3:
			return "Cannot predict now";
		case 4:
			return "Concentrate and ask again";
		default:
			return "Woops... No ask again later answer. Sorry.";
	}
}

