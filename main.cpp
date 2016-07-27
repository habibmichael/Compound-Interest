#include "CompIntCalc.h"
#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[]){

	if(argc!=4){
		std::cout<<"usage: progName <rate> <present value> <#ofperiods>"<<std::endl;
		return 1;

	}

	double rate = atof(argv[1]);
	double value = atof(argv[2]);
	int numPeriods=atoi(argv[3]);

	CompIntCalc compoundCalc(rate);

	double res= compoundCalc.multiplePeriods(value,numPeriods);
	double contRes= compoundCalc.continuousCompounding(value,numPeriods);

	std::cout << " future value for multiple period compounding is " << res << std::endl;
	std::cout << " future value for continuous compounding is " << contRes << std::endl;

	return 0;


}