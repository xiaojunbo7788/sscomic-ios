//
//  WXYZ_ShareModel.h
//  WXReader
//
//  Created by Andrew on 2019/7/11.
//  Copyright © 2019 Andrew. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WXYZ_ShareModel : NSObject

@property (nonatomic, copy) NSString *link;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *imgUrl;

@end

NS_ASSUME_NONNULL_END