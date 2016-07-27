#include "CompIntCalc.h"
#include <cmath>

CompIntCalc::CompIntCalc(double rate)
:m_rate(rate)
{

}

CompIntCalc::~CompIntCalc(){}

CompIntCalc::CompIntCalc(const CompIntCalc &v)
:m_rate(v.m_rate)
{

}

CompIntCalc &CompIntCalc::operator=(const CompIntCalc &v)
{
	if(this!= &v){
		this->m_rate=v.m_rate;
	}
	return *this;
}


double CompIntCalc::multiplePeriods(double value, int numPeriods){

	double result=value*pow(1+m_rate,numPeriods);

	return result;
}

double CompIntCalc::continuousCompounding(double value, int numPeriods){

	double result = value*exp(m_rate*numPeriods);
	return result;
}