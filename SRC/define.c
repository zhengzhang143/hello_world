//#define STM_TIM 5
#define STM_TIM (*((short*)0x0022FECE))
short globalshort1 = 10;
short function_test(){
	short rtn = 0;
	globalshort1 = 5;
	short* plocalshort1 = &globalshort1;
	rtn = STM_TIM;
	return rtn;
}
