//
//  WXYZ_ComicMenuView.h
//  WXReader
//
//  Created by Andrew on 2019/6/4.
//  Copyright © 2019 Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WXYZ_ComicMenuView : UIView

@property (nonatomic, strong) WXYZ_ProductionModel *productionModel;

@property (nonatomic, strong) WXYZ_ProductionChapterModel *comicChapterModel;

@property (nonatomic, assign) BOOL isShowing;

interface_singleton

- (void)autoShowOrHiddenMenuView;

- (void)showMenuView;

- (void)hiddenMenuView;

- (void)startLoadingData;

- (void)stopLoadingData;

@end

NS_ASSUME_NONNULL_END