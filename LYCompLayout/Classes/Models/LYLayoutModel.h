//
//  LYLayoutModel.h
//  LYCOMPLAYOUT
//
//  CREATED BY BLODELY ON 2017-02-15.
//  COPYRIGHT (C) 2017 BLODELY. ALL RIGHTS RESERVED.
//

#import <Foundation/Foundation.h>

@interface LYLayoutModel : NSObject

/**
 UID, Not null
 */
@property (nonatomic, strong) NSString *UID;

/**
 Persist Object
 */
- (void)persist;

/**
 Export configuration as 'plist' format.
 */
- (void)exportToPlist;

/**
 Import configuration data from 'plist' file at specific filepath

 @param filepath plist file path
 */
- (void)readPlistAtFilepath:(NSString *)filepath;

/**
 Export configuration as 'XML' format.
 */
- (void)exportToXML;

/**
 Import configuration data from 'XML' file at specific filepath

 @param filepath XML file path
 */
- (void)readXMLAtFilepath:(NSString *)filepath;

@end
