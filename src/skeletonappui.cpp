/*
* ==============================================================================
*  Name        : skeletonappui.cpp
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
#include <avkon.hrh>
#include <aknnotewrappers.h>
#include <stringloader.h>
#include <skeleton.rsg>
#include <f32file.h>
#include <s32file.h>

#include "skeleton.pan"
#include "skeletonappui.h"
#include "skeletonappview.h"
#include "skeleton.hrh"

_LIT( KHelloFileName, "Hello.txt" );

// ============================ MEMBER FUNCTIONS ===============================


// -----------------------------------------------------------------------------
// CskeletonAppUi::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CskeletonAppUi::ConstructL()
    {
    // Initialise app UI with standard value.
    BaseConstructL(CAknAppUi::EAknEnableSkin);

    // Create view object
    iAppView = CskeletonAppView::NewL( ClientRect() );

    }
// -----------------------------------------------------------------------------
// CskeletonAppUi::CskeletonAppUi()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CskeletonAppUi::CskeletonAppUi()
    {
    // No implementation required
    }

// -----------------------------------------------------------------------------
// CskeletonAppUi::~CskeletonAppUi()
// Destructor.
// -----------------------------------------------------------------------------
//
CskeletonAppUi::~CskeletonAppUi()
    {
    if ( iAppView )
        {
        delete iAppView;
        iAppView = NULL;
        }
    }

// -----------------------------------------------------------------------------
// CskeletonAppUi::HandleCommandL()
// Takes care of command handling.
// -----------------------------------------------------------------------------
//
void CskeletonAppUi::HandleCommandL( TInt aCommand )
    {
    // clear possible old user-given text
    if (iAppView->GetText().Size() > 0)
        {
        iAppView->GetText().Zero();
        iAppView->DrawNow();
        }

    switch( aCommand )
        {
        case EEikCmdExit:
        case EAknSoftkeyExit:
            Exit();
            break;

        case EskeletonAbout:
            {
            // Load a string from the resource file and display it
            HBufC* textResource = StringLoader::LoadLC(R_SKELETON_ABOUT);
            CAknInformationNote* note = new ( ELeave ) CAknInformationNote;

            // Show the information Note with
            // textResource loaded with StringLoader.
            note->ExecuteLD( *textResource );

            // Pop HBuf from CleanUpStack and Destroy it.
            CleanupStack::PopAndDestroy( textResource );
            }
            break;

        default:
            break;
        }
    }
// -----------------------------------------------------------------------------
//  Called by framework when layout is changed.
//  Passes the new client rectangle to the AppView
// -----------------------------------------------------------------------------
//
void CskeletonAppUi::HandleResourceChangeL( TInt aType )
{
    // base-class call also
    CAknAppUi::HandleResourceChangeL(aType);
    if (aType == KEikDynamicLayoutVariantSwitch)
        {
        if (iAppView)
            iAppView->SetRect( ClientRect() );
        }
}

// End of File

