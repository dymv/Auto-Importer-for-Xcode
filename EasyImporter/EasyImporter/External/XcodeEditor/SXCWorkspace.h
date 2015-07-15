//
//  XCWorkspace.h
//  xcode-editor
//
//  Created by Marko Hlebar on 06/05/2014.
//  Copyright (c) 2014 EXPANZ. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const SXCWorkspaceProjectWorkspaceFile;

@interface SXCWorkspace : NSObject
/**
 *  Contains an array of XCProject instances
 */
@property (nonatomic, strong, readonly) NSArray *projects;

/**
 *  Workspace file path
 */
@property (nonatomic, copy, readonly) NSString *filePath;

/**
 *  Instantiates an XCWorkspace with a filePath
 *
 *  @param filePath a filePath
 *
 *  @return a XCWorkspace instance
 */
+ (instancetype)workspaceWithFilePath:(NSString*)filePath;

@end
