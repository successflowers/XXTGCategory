
//
//  URLMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/26.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef URLMacros_h
#define URLMacros_h

#pragma mark ------- Secret -------
#define APP_Version @"ios_6_1_5"
#define APP_ID @"ios_test_id"
#define APP_Auth_Session @"9bcc4fcc292343407024008f03889947"
#define APP_Bi_Session_Id @"B5A28B8C-5D2A-4392-8288-462C5D2A43A14744181631768655760"
#define APP_Channel_Code @""
#define APP_Device_Token @""

#define App_Dvc_Id @"B5A28B8C-5D2A-4392-8288-462C5D2A43A1"
#define APP_Ios_Idfa @"D027F887-0570-4EF7-8FC4-22207E6A1907"
#define APP_Ios_Mac @"02%3A00%3A00%3A00%3A00%3A00"
#define APP_Ios_Openudid @"2adc797a0439d4984a20ffff5defa4d0e670c4e2"
#define APP_Ios_Uuid @"19BB2773-DE1F-445E-A777-A6980F259D0C"
#define APP_No_encrypt @"0"
#define APP_Params @""
#define APP_Regid @""
#define APP_TimeStamp @"1524644798"
#define APP_Session @"19BB2773-DE1F-445E-A777-A6980F259D0C"
#define APP_Sign @"9cbaf58a29b2aad1870cc6e2211e84ee"

//请求中加密使用的字段
#define XXTG_Boss_Request_Secret    @"65298da12c499300"

#pragma mark ------- Server --------

#if DEBUG
//测试环境相关
//https://dev.ourdaidai.com/
//#define URL_Server  @"https://dev.ourdaidai.com" //测试服务器地址

#define URL_Server  @"https://dev.ourdaidai.com/CI/ST12.php/" //测试服务器地址
#define URL_Client_Server  @"https://devapi.ourxiuxiu.com/api/" //测试用户端服务器地址
#define URL_HTML_Server    @"https://dev.ourdaidai.com/"  //测试html请求域名
#else
//正式环境相关
#define URL_Server  @"https://www.ourdaidai.com/CI/ST12.php/" //服务器地址
#define URL_Client_Server  @"https://www.ourdaidai.com/v/api/" //正式用户端服务器地址
#define URL_HTML_Server    @"https://www.ourdaidai.com/"  //测试html请求域名
#endif




#pragma mark ------- Home ----------
#define URL_Home_Nav @"/CI/index.php/home/nav"
#define URL_Home_HomePage @"/CI/index.php/home/homepage"
#define URL_Home_Store @"/CI/index.php/Store/money"
#define URL_Home_IsBusiness @"/CI/index.php/Store/business"

//Ambitus
#pragma mark ------- City ----------
#define URL_City_List @"/CI/index.php/location/address"
#define URL_Perimeter_List @"/CI/index.php/location/perimeter"
#define URL_Search_List @"/CI/index.php/location/search"
#define URL_LocationHome_List @"/CI/index.php/location/locationhome"

#define URL_LocationList_Change @"/CI/index.php/location/rbac"
#define URL_LocationList_Check @"/CI/index.php/location/sel"


#pragma mark ------- Cash ------------
#define URL_Cash_GetCashList @"StoreInfo/GetCashList" //提现记录



#pragma mark ------- Reward ---------
#define URL_Reward_GetCash @"StoreInfo/GetCash" //奖励列表
#define URL_Reward_Rule @"StoreInfo/returnCashSteps" //奖励规则



#pragma mark ------- Cart ----------
#define URL_Cart_List @"/CI/index.php/order/cart"
#define URL_Cart_OkBtn @"/CI/index.php/Order/orderStatus"
#define URL_Cart_SectionList @"/CI/index.php/order/orderLog"
#define URL_Cart_TakeSelf @"/CI/index.php/order/orderType"
#define URL_Cart_ReFund @"/CI/index.php/order/orderRefund" //退单
#define URL_Cart_CancelOrder @"/CI/index.php/order/updOrder" //取消订单


#pragma mark ------- Merchants ----------
#define URL_Merchants_GoodsCategory @"/CI/index.php/Store/Navigation"
#define URL_Merchants_StoreCategory @"/CI/index.php/Store/storeCategory"
#define URL_Merchants_Update @"/CI/index.php/Store/setStoreGoods"
#define URL_Merchants_GoodsDelete @"/CI/index.php/Store/storeGoodsDel"
#define URL_Merchants_GoodsModify @"/CI/index.php/Store/updStoreGoods"

#define URL_Merchants_UploadImage @"https://www.ourdaidai.com/web/index.php?c=utility&a=file&do=upload&upload_type=image&global=&dest_dir=&uniacid=-1&quality=0&group_id=-1"



#pragma mark ------- EditMerchantsInformation ----------
#define URL_EidtMerchants_Sort @"/CI/index.php/AddShop/sort"  //营业品类
#define URL_EidtMerchants_UploadImage @"/CI/index.php/AddShop/upload" //上传营业照片
#define URL_EidtMerchants_UpdateShopImformation @"/CI/index.php/AddShop/addShop" //更新店铺信息


#pragma mark ------- Mine ----------
#define URL_Mine_IphoneVerificationCode @"StoreMy/proving"
#define URL_Mine_BindingCard @"StoreMy/setCard" //绑定用户提现账户
#define URL_Mine_SwitchShop @"StoreMy/switchStore" //切换店铺
#define URL_Mine_QrCode @"QrCode/code" //用户微信二维码
#define URL_Mine_ReviceReward  @"StoreMy/reward" //用户领取j奖励金
#define URL_Mine_ChagePercentage @"StoreInfo/Set" //修改百分比


//MARK: - HtML加载地址
//我的模块webview加载的地址
#define URL_HTML_HomeWebViewURL  @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=shop&op=index&do=mobile&m=we7_wmall"
//id=1140
#define URL_HTML_ShopWebViewURL @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=order&op=takeout&ta=detail&do=mobile&m=we7_wmall"
//注册页面加载的url地址
#define URL_HTML_RegisterWebViewURL @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=auth&op=register&do=mobile&m=we7_wmall"
//商户退款给用户，点击查看详情的url
#define URL_HTML_UserAccountDetailURL   @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=finance&op=current&do=mobile&m=we7_wmall"
//我的页面加载切换店铺相关url
#define URL_HTML_MineWebViewURL       @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=more&op=index&do=mobile&m=we7_wmall"



#endif /* URLMacros_h */
