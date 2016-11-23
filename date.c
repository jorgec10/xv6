#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[]){
	struct rtcdate r;

	if (date(&r)){
		printf(2, "date failed\n");
		exit();
	}

	//Imprimir Fecha
	if (r.second < 10)
		printf(1, "Date: %d/%d/%d\nTime: %d:%d:0%d\n",
			r.day, r.month, r.year, r.hour, r.minute, r.second);
	else
		printf(1, "Date: %d/%d/%d\nTime: %d:%d:%d\n",
			r.day, r.month, r.year, r.hour, r.minute, r.second);
	

	exit();
}