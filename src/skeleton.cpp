/*
* ==============================================================================
*  Name        : skeleton.cpp
*  Part of     : skeleton
*  Language		 : English
*  Description : Template application for PSymbianSoft
*  Version     : 1.00
*
*  Copyright (c) 2009 PSymbianSoft
*  This material, including documentation and any related
*  computer programs, is protected by copyright controlled by
*  PSymbianSoft
* ==============================================================================
*/

// INCLUDE FILES
#include <eikstart.h>
#include "skeletonapplication.h"

/**
 * factory function to create the Hello World Basic application class
 */
LOCAL_C CApaApplication* NewApplication()
	{
	return new CskeletonApplication;
	}

/**
 * A normal Symbian OS executable provides an E32Main() function which is
 * called by the operating system to start the program.
 */
GLDEF_C TInt E32Main()
	{
	return EikStart::RunApplication( NewApplication );
	}

