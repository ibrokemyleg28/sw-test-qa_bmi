// bmi.h

#ifndef BMI_H
#define BMI_H

class bmi{
	private:
		float w;
		float h;
	public:
		bmi(float w, float h);
		float bmiCalculate() const;
		void bmiCategory() const;
};

#endif