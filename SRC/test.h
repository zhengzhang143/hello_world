/*-----					Head files						-----*/

/*-----------------------------------------------------------*/
/*-----		type:	char or short	FUNCTYPE = 1		-----*/
/*-----		type:	char*_char*		FUNCTYPE = 2		-----*/
/*-----		type:	short*_short*	FUNCTYPE = 3		-----*/
/*-----		type:	XXXXX			FUNCTYPE = N		-----*/
/*-----------------------------------------------------------*/

/*-----			Extern Function Declaration				-----*/
#if FUNCTYPE == 1
extern char func_stub( char numb_para );
extern short func_stub_short( short numb_para );

#elif FUNCTYPE == 2
extern char* func_stub( char* numb_para );

#elif FUNCTYPE == 3
extern short* func_stub_short( short* numb_para );

#else
#endif
