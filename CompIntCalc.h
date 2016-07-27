class CompIntCalc{

	public:
		CompIntCalc(double rate);
		CompIntCalc(const CompIntCalc &v);
		CompIntCalc &operator =(const CompIntCalc &v);
		~CompIntCalc();


		double multiplePeriods(double value, int numPeriods);
		double continuousCompounding(double value, int numPeriods);

	private:
		double m_rate;


};