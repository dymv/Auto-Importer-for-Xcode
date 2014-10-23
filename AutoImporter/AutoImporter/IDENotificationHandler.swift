//
//  SampleSwift.swift
//  AutoImporter
//
//  Created by Luis Floreani on 10/23/14.
//  Copyright (c) 2014 luisfloreani.com. All rights reserved.
//

import Foundation

private let _sharedInstance = IDENotificationHandler()

@objc class IDENotificationHandler : NSObject {
    class var sharedInstance: IDENotificationHandler {
        return _sharedInstance
    }
    
    override init() {
        println("IDENotificationHandler from Swift")
        
        var handler = LAFIDENotificationHandler.sharedHandler()
    }
}