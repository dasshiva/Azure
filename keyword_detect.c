#include "common.h"

int keyword_type(const char *line){
	char start='<',end='>';
	char *keywords[]={"start","end","START_FUNC_DEF","END_FUNC_DEF","write","RET_INT"};
	if (line[0]==start && getindex(line,end)!=-1){
	char *keyword;
	keyword=getsubstring(line,start,end);
	int counter=0;
	while(counter<=5){
		if(cmp(keyword,keywords[counter])==EQUAL) break;
		counter++;
	}
	switch(counter){
		case 0:return START;
		case 1:return END;
		case 2:return START_FUNC_DEF;
		case 3:return END_FUNC_DEF;
		case 4:return PRINT_FUNC;
		case 5:return DEFINE_FUNC_INT;
	}
	return UNKNOWN_KEYWORD;
	}
	else if(line[0]!=start)	return NOT_KEYWORD;
	else return ILLEGAL_KEYWORD;
}
