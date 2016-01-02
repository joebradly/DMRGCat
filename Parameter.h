#ifndef PARAMETER_H
#define PARAMETER_H

#include <iostream>
#include <ostream>
#include <fstream>
#include "setting.h"
//class Parameter is dependant on model studied.

namespace DMRGCat{

class Parameter{
	public:
		Parameter();
		void load(std::ifstream& loadfile);
		friend std::ostream& operator<<(std::ostream& s, const Parameter& para);
	private:

#ifdef FERMION_HUBBARD
		double T;
		double U;
		int ParticleNo;	   //Particle number of the whold system	
		int SavedD;
		int SweepNo; 		// no need to store;
#endif
		
};

	
}


#endif

