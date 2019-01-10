//
//  AutoLayerMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/28.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef AutoLayerMacros_h
#define AutoLayerMacros_h

#pragma mark - 获取屏幕宽高
#define kStatusBarHeight    [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavBarHeight       44.0
#define kTabBarHeight       ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define kTopHeight          (kStatusBarHeight + kNavBarHeight)
#define kIOS5               (KScreenHeight>568 ?NO :YES)

#define KScreenWidth            ([[UIScreen mainScreen] bounds].size.width)
#define KScreenHeight           [[UIScreen mainScreen] bounds].size.height
#define kScreen_Bounds          [UIScreen mainScreen].bounds

#define Iphone6ScaleWidth       KScreenWidth/375.0
#define Iphone6ScaleHeight      KScreenHeight/667.0
#define kIOS7OffHeight          (kIOSVersions>=7.0 ? 64.0 : 0.0)

#define kWBCellPadding 12.0f

#pragma mark - 根据ip6的屏幕来拉伸

//当前设备宽度与iphone6宽度比例
#pragma kRatioWidth             KScreenWidth/375.0

//判断设备类型是否iPhoneX系列
#define XXTG_ISIphoneX    (KScreenWidth >= 375.f && KScreenHeight >= 812.f ? YES : NO)

//导航栏高度
#define XXTG_NavBarHeight (XXTG_ISIphoneX ? 88.f : 64.f)

//状态栏高度
#define XXTG_StatusBarHeight (XXTG_ISIphoneX ? 44.f : 20.f)
#define XXTG_StatusBarHeight_Define (XXTG_ISIphoneX ? 34.f : 20.f)

//导航栏内容高度
#define XXTG_NavBarContentHeight (XXTG_ISIphoneX ? 54.f : 44.f)

//底部tabbar高度
#define XXTG_TabBarHeight (XXTG_ISIphoneX ? 83.f : 49.f)

//底部高度，如果是iPhone X 高度为34，其他为0
#define XXTG_SafeAreaBottomHeight (XXTG_ISIphoneX ? 34.f : 0)

//标签栏高度
//#define XXTG_TabBarHeight (XXTG_ISIphoneX ? 49.f + 34.f : 49.f)
//#define XXTG_TabBarHeight (XXTG_ISIphoneX ? 50.f + 34.f : 50.f)

#endif /* AutoLayerMacros_h */
