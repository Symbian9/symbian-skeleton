/*
* ==============================================================================
*  Name        : skeletondocument.h
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

#ifndef __SKELETONDOCUMENT_H__
#define __SKELETONDOCUMENT_H__

// INCLUDES
#include <akndoc.h>

// FORWARD DECLARATIONS
class CskeletonAppUi;
class CEikApplication;


// CLASS DECLARATION

/**
* CskeletonDocument application class.
* An instance of class CskeletonDocument is the Document part of the
* AVKON application framework for the skeleton example application.
*/
class CskeletonDocument : public CAknDocument
    {
    public: // Constructors and destructor

        /**
        * NewL.
        * Two-phased constructor.
        * Construct a CskeletonDocument for the AVKON application aApp
        * using two phase construction, and return a pointer
        * to the created object.
        * @param aApp Application creating this document.
        * @return A pointer to the created instance of CskeletonDocument.
        */
        static CskeletonDocument* NewL( CEikApplication& aApp );

        /**
        * NewLC.
        * Two-phased constructor.
        * Construct a CskeletonDocument for the AVKON application aApp
        * using two phase construction, and return a pointer
        * to the created object.
        * @param aApp Application creating this document.
        * @return A pointer to the created instance of CskeletonDocument.
        */
        static CskeletonDocument* NewLC( CEikApplication& aApp );

        /**
        * ~CskeletonDocument
        * Virtual Destructor.
        */
        virtual ~CskeletonDocument();

    public: // Functions from base classes

        /**
        * CreateAppUiL
        * From CEikDocument, CreateAppUiL.
        * Create a CskeletonAppUi object and return a pointer to it.
        * The object returned is owned by the Uikon framework.
        * @return Pointer to created instance of AppUi.
        */
        CEikAppUi* CreateAppUiL();

    private: // Constructors

        /**
        * ConstructL
        * 2nd phase constructor.
        */
        void ConstructL();

        /**
        * CskeletonDocument.
        * C++ default constructor.
        * @param aApp Application creating this document.
        */
        CskeletonDocument( CEikApplication& aApp );

    };

#endif // __SKELETONDOCUMENT_H__

// End of File

