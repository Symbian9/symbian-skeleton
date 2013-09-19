/*
* ==============================================================================
*  Name        : skeletonappview.cpp
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
#include <coemain.h>
#include <aknutils.h>
#include "skeletonappview.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CskeletonAppView::NewL()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CskeletonAppView* CskeletonAppView::NewL( const TRect& aRect )
    {
    CskeletonAppView* self = CskeletonAppView::NewLC( aRect );
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CskeletonAppView::NewLC()
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CskeletonAppView* CskeletonAppView::NewLC( const TRect& aRect )
    {
    CskeletonAppView* self = new ( ELeave ) CskeletonAppView;
    CleanupStack::PushL( self );
    self->ConstructL( aRect );
    return self;
    }

// -----------------------------------------------------------------------------
// CskeletonAppView::ConstructL()
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CskeletonAppView::ConstructL( const TRect& aRect )
    {
    // Create a window for this application view
    CreateWindowL();

    // set the font
    iFont = AknLayoutUtils::FontFromId(EAknLogicalFontPrimaryFont);

    iText.Zero();

    // Set the windows size
    SetRect( aRect );

    // Activate the window, which makes it ready to be drawn
    ActivateL();
    }

// -----------------------------------------------------------------------------
// CskeletonAppView::CskeletonAppView()
// C++ default constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CskeletonAppView::CskeletonAppView()
    {
    // No implementation required
    }


// -----------------------------------------------------------------------------
// CskeletonAppView::~CskeletonAppView()
// Destructor.
// -----------------------------------------------------------------------------
//
CskeletonAppView::~CskeletonAppView()
    {
    // No implementation required
    }


// -----------------------------------------------------------------------------
// CskeletonAppView::Draw()
// Draws the display.
// -----------------------------------------------------------------------------
//
void CskeletonAppView::Draw( const TRect& /*aRect*/ ) const
    {
    // note that the whole screen is drawn everytime, so aRect-parameter
    // is ignored

    // Get the standard graphics context
    CWindowGc& gc = SystemGc();
    gc.SetPenStyle( CGraphicsContext::ENullPen );
    gc.SetBrushColor( KRgbWhite);
    gc.SetBrushStyle( CGraphicsContext::ESolidBrush );

    // Gets the control's extent
    TRect rect( Rect());

    // draw also text, if user has given it via dialog
    if (iText.Length() > 0)
        {
        gc.UseFont(iFont);
        gc.DrawText(iText, rect, Rect().Height()/3, CGraphicsContext::ECenter );
        gc.DiscardFont();
        }
    else
        {
        gc.Clear( rect );
        }
    }

// -----------------------------------------------------------------------------
// CskeletonAppView::SizeChanged()
// Called by framework when the view size is changed.
// -----------------------------------------------------------------------------
//
void CskeletonAppView::SizeChanged()
    {
    }

// -----------------------------------------------------------------------------
// CskeletonAppView::GetText()
// Called by AppUi to either set the text (via dialog) or zero the contents.
// -----------------------------------------------------------------------------
//
TDes & CskeletonAppView::GetText()
    {
    return iText;
    }

// End of File

