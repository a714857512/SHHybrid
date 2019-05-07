//
//  MHTBManager.h
//  MengHangTest
//
//  Created by Miles on 2018/8/21.
//  Copyright © 2018年 Immortal International Holdings. All rights reserved.
//
#import <Foundation/Foundation.h>

#import <AlibcTradeSDK/AlibcTradeSDK.h>
#import <AlibabaAuthSDK/albbsdk.h>

@interface MHTBManager : NSObject

+(MHTBManager *)shareManager;

/**
  打开手淘购物车

 @param backUrl 设置的手淘backScheme
 */
-(void)openTaobaoCartsWithBackUrl:(NSString*)backUrl;


/**
 打开page，可以实现淘宝账号免登以及电商交易支付流程

 @param goodsUrl 商品短链地址
 @param backUrl 设置的手淘backScheme
 @param onSuccess 成功回调交易流程中成功回调
 @param onFailure 失败回调
 */
-(void )openTargetAppWithGoodsUrl:(NSString *)goodsUrl backUrl:(NSString*)backUrl tradeProcessSuccessCallback:(nullable void (^)(AlibcTradeResult *__nullable result))onSuccess tradeProcessFailedCallback:(nullable void (^)(NSError *__nullable error))onFailure;

@end
