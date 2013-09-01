//
//  GBAController.h
//  GBA4iOS
//
//  Created by Yvette Testut on 8/31/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GBAControllerRect)
{
    GBAControllerRectDPad,
    GBAControllerRectA,
    GBAControllerRectB,
    GBAControllerRectAB,
    GBAControllerRectL,
    GBAControllerRectR,
    GBAControllerRectStart,
    GBAControllerRectSelect,
    GBAControllerRectMenu,
    GBAControllerRectScreen
};

typedef NS_ENUM(NSInteger, GBAControllerOrientation)
{
    GBAControllerOrientationPortrait,
    GBAControllerOrientationLandscape
};

typedef NS_ENUM(NSInteger, GBAControllerButton)
{
    GBAControllerButtonUp          =  33,
    GBAControllerButtonDown        =  39,
    GBAControllerButtonLeft        =  35,
    GBAControllerButtonRight       =  37,
    GBAControllerButtonA           =  8,
    GBAControllerButtonB           =  9,
    GBAControllerButtonL           =  10,
    GBAControllerButtonR           =  11,
    GBAControllerButtonStart       =  1,
    GBAControllerButtonSelect      =  0,
    GBAControllerButtonMenu        =  50,
};

@interface GBAController : NSObject

@property (readonly, copy, nonatomic) NSString *filepath;

+ (GBAController *)controllerWithContentsOfFile:(NSString *)filepath;

- (UIImage *)imageForOrientation:(GBAControllerOrientation)orientation;
- (CGRect)rectForButtonRect:(GBAControllerRect)button orientation:(GBAControllerOrientation)orientation;
- (NSDictionary *)dictionaryForOrientation:(GBAControllerOrientation)orientation;
- (NSString *)keyForButtonRect:(GBAControllerRect)button;

@end
