/*
* ==============================================================================
*  Name        : skeletonappview.h
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

#ifndef __SKELETONAPPVIEW_H__
#define __SKELETONAPPVIEW_H__

// INCLUDES
#include <coecntrl.h>

// CLASS DECLARATION
class CskeletonAppView : public CCoeControl
    {
    public: // New methods

        /**
        * NewL.
        * Two-phased constructor.
        * Create a CskeletonAppView object, which will draw itself to aRect.
        * @param aRect The rectangle this view will be drawn to.
        * @return a pointer to the created instance of CskeletonAppView.
        */
        static CskeletonAppView* NewL( const TRect& aRect );

        /**
        * NewLC.
        * Two-phased constructor.
        * Create a CskeletonAppView object, which will draw itself
        * to aRect.
        * @param aRect Rectangle this view will be drawn to.
        * @return A pointer to the created instance of CskeletonAppView.
        */
        static CskeletonAppView* NewLC( const TRect& aRect );

        /**
        * ~CskeletonAppView
        * Virtual Destructor.
        */
        virtual ~CskeletonAppView();

       /**
        * GetText
        * @return modifiable reference to the descriptor, which stores
        *   user-given text
        */
        TDes& GetText();

    public:  // Functions from base classes

        /**
        * From CCoeControl, Draw
        * Draw this CskeletonAppView to the screen.
        * If the user has given a text, it is also printed to the center of
        * the screen.
        * @param aRect the rectangle of this view that needs updating
        */
        void Draw( const TRect& aRect ) const;

        /**
        * From CoeControl, SizeChanged.
        * Called by framework when the view size is changed.
        */
        virtual void SizeChanged();

    private: // Constructors

        /**
        * ConstructL
        * 2nd phase constructor.
        * Perform the second phase construction of a
        * CskeletonAppView object.
        * @param aRect The rectangle this view will be drawn to.
        */
        void ConstructL(const TRect& aRect);

        /**
        * CskeletonAppView.
        * C++ default constructor.
        */
        CskeletonAppView();

    private:

       /**
        * font used, when printing user-given text to the screen
        */
        const CFont* iFont;

       /**
        * descriptor storing the user-given text
        */
        TBuf<24> iText;
    };

#endif // __SKELETONAPPVIEW_H__

// End of File

