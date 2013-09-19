/*
* ==============================================================================
*  Name        : skeletonapplication.cpp
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
#include "skeletondocument.h"
#include "skeletonapplication.h"

// ============================ MEMBER FUNCTIONS ===============================

// UID for the application;
// this should correspond to the uid defined in the mmp file
const TUid KUidskeletonApp = { 0xA000017F };

// -----------------------------------------------------------------------------
// CskeletonApplication::CreateDocumentL()
// Creates CApaDocument object
// -----------------------------------------------------------------------------
//
CApaDocument* CskeletonApplication::CreateDocumentL()
    {
    // Create an skeleton document, and return a pointer to it
    return (static_cast<CApaDocument*> ( CskeletonDocument::NewL( *this ) ) );
    }

// -----------------------------------------------------------------------------
// CskeletonApplication::AppDllUid()
// Returns application UID
// -----------------------------------------------------------------------------
//
TUid CskeletonApplication::AppDllUid() const
    {
    // Return the UID for the skeleton application
    return KUidskeletonApp;
    }

// End of File

