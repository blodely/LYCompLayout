//
//  LYLayoutItem.h
//  LYCOMPLAYOUT
//
//  CREATED BY BLODELY ON 2017-02-17.
//  COPYRIGHT (C) 2017 BLODELY. ALL RIGHTS RESERVED.
//

#import <LYCompLayout/LYCompLayout.h>

@interface LYLayoutItem : LYLayoutModel

/**
 Priority in horizontal
 */
@property (nonatomic, assign) NSUInteger priorityHorizontal;

/**
 Priority in vertical
 */
@property (nonatomic, assign) NSUInteger priorityVertical;

/**
 Units in horizontal
 */
@property (nonatomic, assign) NSInteger unitHorizontal;

/**
 Units in vertical
 */
@property (nonatomic, assign) NSInteger unitVertical;

/**
 Item's width
 
 for now, width is read only
 */
@property (nonatomic, assign, readonly) CGFloat width;

/**
 Item's height
 
 for now, height is read only
 */
@property (nonatomic, assign, readonly) CGFloat height;

/**
 Convert self to NSDictionary data for plist persistence

 @return dictionary value
 */
- (NSDictionary *)toDictionary;

@end
