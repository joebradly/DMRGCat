#include <ostream>
#include <istream>
#include "../testFiles/testU1Q.h"
#include "../testFiles/testBlockQBase.h"
#include "../testFiles/testQMat.h"
#include "../testFiles/testBlock.h"
#include "../testFiles/testQWave.h"
#include "../testFiles/testSuperBlock.h"
#include "../testFiles/exactHubbard.h"
#include "U1Q.h"
#include "Parameter.h"
#include "Block.h"


int main(){	
	//testU1Q();
	//testBlockQBase();	
	//testQMat();
	//testBlock();
	//testQWave();
	testSuperBlock();
	//exactHubbard();

#ifdef VISUAL
	system("pause");
#endif
	return 0;
}