/*
* ==============================================================================
*  Name        : skeleton.pan
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


#ifndef __SKELETON_PAN__
#define __SKELETON_PAN__

/** skeleton application panic codes */
enum TskeletonPanics
    {
    EskeletonUi = 1
    // add further panics here
    };

inline void Panic(TskeletonPanics aReason)
    {
    _LIT(applicationName,"skeleton");
    User::Panic(applicationName, aReason);
    }

#endif // __SKELETON_PAN__
