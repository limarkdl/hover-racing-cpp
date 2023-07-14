// hover-racing-cpp.cpp: A program using the TL-Engine

/* 
	IVAN KOSTIN G...

	UCLan Cyprus student

	CO1301 - Games Concepts, 2nd year
*/


#include <TL-Engine.h>	
using namespace tle;

void main()
{
	I3DEngine* myEngine = New3DEngine( kTLX );
	myEngine->StartWindowed();

	// Importing media
	myEngine->AddMediaFolder( ".\\LICENSED_&_PROTECTED_MEDIA" );


	// NEEDS TO BE PUT INSIDE A SEPARATED MODULE !!!
	// CameraController.h
	ICamera* myCamera = myEngine->CreateCamera(kFPS);
	//

	// NEEDS TO BE PUT INSIDE A SEPARATED MODULE !!!
	// MeshManager.h
	IMesh* hover = myEngine->LoadMesh("race2.x");
	//

	// NEEDS TO BE PUT INSIDE A SEPARATED MODULE !!!
	// PlayerController.h
	IModel* player = hover->CreateModel();
	//

	while (myEngine->IsRunning())
	{
		myEngine->DrawScene();


	}

	myEngine->Delete();
}
