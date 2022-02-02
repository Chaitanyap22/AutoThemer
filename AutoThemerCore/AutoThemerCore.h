//
//  AutoThemerCore.h
//  AutoThemerCore
//
//  Created by Guilherme Rambo on 23/02/21.
//

#import <Foundation/Foundation.h>

//! Project version number for AutoThemerCore.
FOUNDATION_EXPORT double AutoThemerCoreVersionNumber;

//! Project version string for AutoThemerCore.
FOUNDATION_EXPORT const unsigned char AutoThemerCoreVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AutoThemerCore/PublicHeader.h>

extern int SLSGetAppearanceThemeLegacy(void);
extern void SLSSetAppearanceThemeLegacy(int);

#define kAutoThemerCoreSubsystemName "com.chaitanyap.AutoThemerCore"

#import <AutoThemerCore/DMBAmbientLightSensor.h>
#import <AutoThemerCore/SharedFileList.h>
