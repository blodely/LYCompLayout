//
//  LYLayoutConf.h
//  LYCOMPLAYOUT
//
//  CREATED BY BLODELY ON 2017-02-16.
//  COPYRIGHT (C) 2017 BLODELY. ALL RIGHTS RESERVED.
//

#import <UIKit/UIKit.h>
#import <LYCompLayout/LYLayoutModel.h>
#import <LYCompLayout/LYLayoutItem.h>

@interface LYLayoutConf : LYLayoutModel

/**
 An unit length in vertical
 */
@property (nonatomic, assign) CGFloat unitVertical;

/**
 An unit length in horizontal
 */
@property (nonatomic, assign) CGFloat unitHorizontal;

@end
