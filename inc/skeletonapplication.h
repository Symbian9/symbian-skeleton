/*
* ==============================================================================
*  Name        : skeletonapplication.h
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

#ifndef __SKELETONAPPLICATION_H__
#define __SKELETONAPPLICATION_H__

// INCLUDES
#include <aknapp.h>

// CLASS DECLARATION
class CskeletonApplication : public CAknApplication
    {
    public: // Functions from base classes

        /**
        * From CApaApplication, AppDllUid.
        * @return Application's UID (KUidskeletonApp).
        */
        TUid AppDllUid() const;

    protected: // Functions from base classes

        /**
        * From CApaApplication, CreateDocumentL.
        * Creates CskeletonDocument document object. The returned
        * pointer in not owned by the CskeletonApplication object.
        * @return A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
    };

#endif // __SKELETONAPPLICATION_H__

// End of File

