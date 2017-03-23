/*-----					Head files						-----*/

/*-----------------------------------------------------------*/
/*-----		type:	char or short	FUNCTYPE = 1		-----*/
/*-----		type:	char*_char*		FUNCTYPE = 2		-----*/
/*-----		type:	short*_short*	FUNCTYPE = 3		-----*/
/*-----		type:	XXXXX			FUNCTYPE = N		-----*/
/*-----------------------------------------------------------*/

#define FUNCTYPE 0

#include "test.h"
/*-----			Extern Function Declaration				-----*/

/*-----				Function Declaration				-----*/
short myFunctionA( short para );
void myFunctionB( char* string );
void last_word( int index, char* string_end, char* words_end );

/*-----					Dtatic Variable					-----*/
static short number;
static short data[10];
static short* num_data;
static char letter;
static char words[10] = "test";
static char* str_data;

/*-----						Function					-----*/
short myFunctionA( short para )
{
	short result = 0;
	short myShort = para+1;
	
	data[0] = myShort;
	result = data[1];
	
#if FUNCTYPE == 1
	letter = func_stub( words[2] );
	data[1] = func_stub_short( *num_data );
	
#elif FUNCTYPE == 2
	str_data = func_stub( &myShort );
	if( myShort == 1 )
	{
		result = 0;
	}else
	{
		result = 1;
	}

#elif FUNCTYPE == 3
	data[3] = *func_stub_short( &myShort );
	if( myShort == 1 )
	{
		result = 0;
	}else
	{
		result = 1;
	}
	
#else
#endif

	return result;
}

void myFunctionB( char* string )
{
	int i;
	
	words[0] = *string;
	
	string++;
	
	for( i = 1 ; (i < 9 && *string !='\0') ;i++ )
	{
		words[i] = *string;
		string++;
	}
	
	last_word( i, string, &words[i] );
	
}

void last_word( int index, char* string_end, char* words_end )
{
/**/  words[0] = *string_end;
}


