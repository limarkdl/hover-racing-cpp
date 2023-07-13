// hover-racing-cpp.cpp: A program using the TL-Engine

/* 
	IVAN KOSTIN G...

	UCLan Cyprus student

	CO1301 - Games Concepts, 2nd year
*/


#include <TL-Engine.h>	// TL-Engine include file and namespace
using namespace tle;

void main()
{
	I3DEngine* myEngine = New3DEngine( kTLX );
	myEngine->StartWindowed();

	myEngine->AddMediaFolder( "C:\\ProgramData\\TL-Engine\\Media" );



	while (myEngine->IsRunning())
	{
		myEngine->DrawScene();


	}

	myEngine->Delete();
}
