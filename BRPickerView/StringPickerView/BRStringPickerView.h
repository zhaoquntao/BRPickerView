//
//  BRStringPickerView.h
//  BRPickerViewDemo
//
//  Created by 任波 on 2017/8/11.
//  Copyright © 2017年 renb. All rights reserved.
//

#import "BaseView.h"

typedef void(^BRStringResultBlock)(id selectValue);

@interface BRStringPickerView : BaseView

/**
 *  创建数组数据源PickerView
 *
 *  @param title            标题
 *  @param dataSource       数组数据源
 *  @param defaultSelValue  默认选中的行(单列传字符串，多列传一维数组)
 *  @param isAutoSelect     是否自动选择，即选择完(滚动完)执行结果回调，传选择的结果值
 *  @param resultBlock      选择后的回调
 *
 */
+ (void)showStringPickerWithTitle:(NSString *)title
                       dataSource:(NSArray *)dataSource
                  defaultSelValue:(id)defaultSelValue
                     isAutoSelect:(BOOL)isAutoSelect
                      resultBlock:(BRStringResultBlock)resultBlock;

/**
 *  创建数组数据源PickerView
 *
 *  @param title            标题
 *  @param plistName        plist文件名
 *  @param defaultSelValue  默认选中的行(单列传字符串，多列传一维数组)
 *  @param isAutoSelect     是否自动选择，即选择完(滚动完)执行结果回调，传选择的结果值
 *  @param resultBlock      选择后的回调
 *
 */
+ (void)showStringPickerWithTitle:(NSString *)title
                        plistName:(NSString *)plistName
                  defaultSelValue:(id)defaultSelValue
                     isAutoSelect:(BOOL)isAutoSelect
                      resultBlock:(BRStringResultBlock)resultBlock;

@end
