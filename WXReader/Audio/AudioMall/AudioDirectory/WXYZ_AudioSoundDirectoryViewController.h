//
//  WXYZ_AudioSoundDirectoryViewController.h
//  WXReader
//
//  Created by Andrew on 2020/3/12.
//  Copyright © 2020 Andrew. All rights reserved.
//


NS_ASSUME_NONNULL_BEGIN

@interface WXYZ_AudioSoundDirectoryViewController : WXYZ_BasicViewController

@property (nonatomic, assign) NSInteger audio_id;

@property (nonatomic, assign) BOOL canScroll;

@property (nonatomic, strong) WXYZ_ProductionModel *directoryModel;

@end

NS_ASSUME_NONNULL_END