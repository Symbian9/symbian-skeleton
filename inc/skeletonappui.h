/*
* ==============================================================================
*  Name        : skeletonappui.h
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


#ifndef __SKELETONAPPUI_H__
#define __SKELETONAPPUI_H__

// INCLUDES
#include <aknappui.h>

// FORWARD DECLARATIONS
class CskeletonAppView;

// CLASS DECLARATION
/**
* CskeletonAppUi application UI class.
* Interacts with the user through the UI and request message processing
* from the handler class
*/
class CskeletonAppUi : public CAknAppUi
    {
    public: // Constructors and destructor

        /**
        * ConstructL.
        * 2nd phase constructor.
        */
        void ConstructL();

        /**
        * CskeletonAppUi.
        * C++ default constructor. This needs to be public due to
        * the way the framework constructs the AppUi
        */
        CskeletonAppUi();

        /**
        * ~CskeletonAppUi.
        * Virtual Destructor.
        */
        virtual ~CskeletonAppUi();

    private:  // Functions from base classes

        /**
        * From CEikAppUi, HandleCommandL.
        * Takes care of command handling.
        * @param aCommand Command to be handled.
        */
        void HandleCommandL( TInt aCommand );

        /**
        * HandleResourceChangeL()
        * Called by framework when layout is changed.
        * @param aType the type of resources that have changed
        */
        void HandleResourceChangeL( TInt aType );

    private: // Data

        /**
        * The application view
        * Owned by CskeletonAppUi
        */
        CskeletonAppView* iAppView;

    };

#endif // __SKELETONAPPUI_H__

// End of File

