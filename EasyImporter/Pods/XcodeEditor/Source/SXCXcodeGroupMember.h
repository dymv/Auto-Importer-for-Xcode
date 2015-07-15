////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2012 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#import "SXCXcodeMemberType.h"

@protocol SXCXcodeGroupMember <NSObject>

- (NSString*)key;

- (NSString*)displayName;

- (NSString*)pathRelativeToProjectRoot;

/**
* Group members can either be other groups (PBXGroup) or source files (PBXFileReference).
*/
- (SXCXcodeMemberType)groupMemberType;

@end
