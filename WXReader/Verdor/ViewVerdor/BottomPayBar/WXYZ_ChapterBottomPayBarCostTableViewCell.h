//
//  WXYZ_ChapterBottomPayBarCostTableViewCell.h
//  WXReader
//
//  Created by Andrew on 2020/7/27.
//  Copyright © 2020 Andrew. All rights reserved.
//

#import "WXYZ_BasicTableViewCell.h"
#import "WXYZ_ChapterPayBarModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WXYZ_ChapterBottomPayBarCostTableViewCell : WXYZ_BasicTableViewCell

@property (nonatomic, copy) void (^buyChapterClickBlock)(BOOL needRecharge);

@property (nonatomic, strong) WXYZ_ChapterPayBarInfoModel *base_info;

@property (nonatomic, strong) WXYZ_ChapterPayBarOptionModel *buyOptionModel;

@end

NS_ASSUME_NONNULL_END