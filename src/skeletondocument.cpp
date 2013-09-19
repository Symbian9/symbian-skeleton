/*
* ==============================================================================
*  Name        : skeletondocument.cpp
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
#include "skeletonappui.h"
#include "skeletondocument.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CskeletonDocument::NewL()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CskeletonDocument* CskeletonDocument::NewL( CEikApplication&
                                                          aApp )
    {
    CskeletonDocument* self = NewLC( aApp );
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CskeletonDocument::NewLC()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CskeletonDocument* CskeletonDocument::NewLC( CEikApplication&
                                                           aApp )
    {
    CskeletonDocument* self =
        new ( ELeave ) CskeletonDocument( aApp );

    CleanupStack::PushL( self );
    self->ConstructL();
    return self;
    }

// -----------------------------------------------------------------------------
// CskeletonDocument::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CskeletonDocument::ConstructL()
    {
    // No implementation required
    }

// -----------------------------------------------------------------------------
// CskeletonDocument::CskeletonDocument()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CskeletonDocument::CskeletonDocument( CEikApplication& aApp )
    : CAknDocument( aApp )
    {
    // No implementation required
    }

// ---------------------------------------------------------------------------
// CskeletonDocument::~CskeletonDocument()
// Destructor.
// ---------------------------------------------------------------------------
//
CskeletonDocument::~CskeletonDocument()
    {
    // No implementation required
    }

// ---------------------------------------------------------------------------
// CskeletonDocument::CreateAppUiL()
// Constructs CreateAppUi.
// ---------------------------------------------------------------------------
//
CEikAppUi* CskeletonDocument::CreateAppUiL()
    {
    // Create the application user interface, and return a pointer to it;
    // the framework takes ownership of this object
    return ( static_cast <CEikAppUi*> ( new ( ELeave )
                                        CskeletonAppUi ) );
    }

// End of File

