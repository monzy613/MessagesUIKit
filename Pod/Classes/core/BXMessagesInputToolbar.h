//
//  BXMessagesInputToolbar.h
//  Baixing
//
//  Created by hyice on 15/3/17.
//  Copyright (c) 2015年 baixing. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BXMessagesInputToolbarItem <NSObject>

@property (assign, nonatomic) BOOL flexibleHeight;

@property (assign, nonatomic) BOOL flexibleWidth;


@optional

@property (assign, nonatomic) CGFloat height;

@property (assign, nonatomic) CGFloat width;

@end

@interface BXMessagesInputToolbar : UIView

- (void)addToolbarItem:(UIView<BXMessagesInputToolbarItem> *)item;

- (void)replaceToolbarItem:(UIView<BXMessagesInputToolbarItem> *)oldItem
                   withItem:(UIView<BXMessagesInputToolbarItem> *)newItem;

- (void)insertToolbarItem:(UIView<BXMessagesInputToolbarItem> *)item 
                    index:(NSInteger)index;

- (void)removeToolbarItem:(UIView<BXMessagesInputToolbarItem> *)item;

- (void)removeToolbarItemAtIndex:(NSInteger)index;

@end
