//
//  YBLStoreDetailUIService.h
//  YBL365
//
//  Created by 陶 on 2016/12/23.
//  Copyright © 2016年 乔同新. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^cellSelectBlock)(NSIndexPath * indexPath);

@interface YBLStoreDetailUIService : NSObject<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, copy) cellSelectBlock cellSelectBlock;

@end
