
//
//  CommonMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/26.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef CommonMacros_h
#define CommonMacros_h

#pragma mark ------- 微信/QQ登陆注册ID ----------
//新版本 休休商业版 对应的 id和secret
#define WXApi_ID  @"wx7c11b083c7c0d016"
#define WXApi_Secret @"7a1678f14e1d8e770c4ccb72f7f3c776"

//旧版本 休休有钱 对应的id和secret
//#define WXApi_ID  @"wxf184832284668a05"
//#define WXApi_Secret @"c66d35ff38e4c19b9c5b546f8bc35e84"

#define WXApi_BaseUrl @"https:api.weixin.qq.com/sns"

#define WXApi_Key_AccessToken @"access_token"
#define WXApi_Key_OpenId @"openid"
#define WXApi_Key_RefreshToken @"refresh_token"


#define QQ_ID @"1106924847"
#define QQ_Secret @"D6WFjVwvcI8nFEgF"


#pragma mark ------- JMessage  ----------

#define JMessage_Appkey @"f4bb353825d2be3954a8ba00"          //用户端appkey
#define JMessage_Appkey_boss @"7dae58f4752ad64224a49f5b"     //商户端极光appkey
#define JMessage_Channel @"App Store"


//MARK   ------ 用户信息字段 ------

//新版本使用手机号登陆的 用户信息字段
#define kIsLoginUserDefaultKey      @"xxtg_boss_isLogin_new_1.2.0"
#define kUserPhone                  @"xxtg_boss_userPhone"      //手机号
#define kUserSid                    @"xxtg_boss_userSid"        //sid
#define kUserSidPhone               @"xxtg_boss_userSidPhone"   //sid对应管理员电话
#define kUserNickName               @"xxtg_boss_userNickName"   //昵称
#define kUserCookie                 @"xxtg_boss_userCookie"     //webView的cookie
#define kUserAvatar                 @"xxtg_boss_userAvatar"     //头像地址
#define kUserId                     @"xxtg_boss_userId"         //用户id
#define kUserCurrentSid             @"xxtg_boss_userCurrentSid" //当前sid，我的模块可以切换店铺
#define kUserCurrentSidMobile       @"xxtg_boss_userCurrentSidMobile"    //当前sid对应的管理员电话，用于切换店铺时切换电话
#define kUserCurrentSidTelephone        @"xxtg_boss_userCurrentSidTelephone"    //当前sid对应的商户经理电话，用于切换店铺时切换商户经理电话
#define kUserShopName               @"xxtg_boss_userShopName"   //店铺名字数组
#define kUserCurrentShopName        @"xxtg_boss_userCurrentShopName" //当前所在店铺的名称
#define kUserSidTelephone           @"xxtg_boss_userSidTelephone"   //商户经理电话数组


#define kLocationTitleKey           @"xxtgLocationTitle"             //当前定位存储的key
#define kLocationDetailAddressKey   @"xxtgLocationDetailAddress"    //当前定位存储的key
#define kLocationLongitudeKey       @"xxtgLocationLongitude"             //当前定位存储的key
#define kLocationLatitudeKey        @"xxtgLocationLatitude"             //当前定位存储的key

#define kHomeIsNeedNoticeAlertFlagKey   @"xxtgHomeIsNeedNoticeAlertFlagKey" //首页是否需要弹框标记版本值的key
#define kUserOpenId                 @"xxtgBossUserOpenId"
#define kUserAccessToken            @"xxtgBossUserAccessToken"
#define kUserOpenKey                @"xxtgBossOpenKey"  //根据店铺sid设置加密机制生成的key

//老版本

#define kUserName                   @"xxtgUserName"             //用户名
#define kUserHeadImgUrl             @"xxtgUserHeadImgUrl"       //用户头像地址
#define kUserGender                 @"xxtgUserGender"           //用户性别

//MARK: - key
#define kWebViewCookieKey           @"0122_we7_wmall_manager_session_2" //webView中cookie的key
#define kWebViewCookieSidKey        @"0122___mg_sid"         //webview中的cookie中sid key

#pragma mark ------- 讯飞 -------------
#define XUNFEI_APPID           @"5b5539c2"      //讯飞appID

//通知名
#define kLoginSuccessNotification   @"xxtgLoginSuccessNotification"     //登陆成功通知
#define kLogoutSuccessNotification  @"xxtgLogoutSuccessNotification"    //退出登录通知
#define kDBMigrateFinishNotification @"DBMigrateFinishNotification"     //极光IM相关通知
#define kLoginFailNotification      @"xxtgLoginFailNotification"    //授权登录失败的通知
#define kChangeBadgeNumberNotification  @"xxtgChangeBadgeNumberNotification"  //修改聊天未读消息通知
#define kReceivePushInfoNotification    @"xxtgReceivePushInfoNotification"  //收到推送的通知
#define kChangeSidSuccessNotification   @"xxtgChangeSidSuccessNotification" //改变店铺后 修改sid通知
#define kapplicationDidBecomeActiveNotification   @"xxtgApplicationDidBecomeActiveNotification" //应用进入前台通知
#define kBackFromCollectMoneyNotification   @"xxtgBackFromCollectMoneyNotification" //收款成功点击查看账户，发送通知
#define kShowOrderRedPointNotification  @"xxtgShowOrderRedPointNotification"  //展示订单未读红点
#define kHideOrderRedPointNotification  @"xxtgHideOrderRedPointNotification"  //隐藏订单未读红点
#define kUserTokenOutTimeNotification   @"xxtgBossUserTokenOutTimeNotification" //token已过期/失效

//邀请入驻模块-HTML调用app方法 通知名
#define kJSUseAppMethod_Share   @"xxtgBossJSUseAppMethodShare"

//MARK: --- 其他 ---
#define kXXTGServiceMobie   @"0710-3780521"         //客服电话
#define kImageViewPlaceHolderName   @"login_icon"             //图片占位图名称

#define kUserSystemVolume  @"kUserSystemVolume" //系统音量

#endif /* CommonMacros_h */
