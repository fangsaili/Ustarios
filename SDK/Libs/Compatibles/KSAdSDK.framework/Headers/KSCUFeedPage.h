//
//  KSCUFeedPage.h
//  KSAdSDK
//
//  Created by jie cai on 2020/9/2.
//

#import <Foundation/Foundation.h>
#import "KSCUContentStateDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface KSCUFeedPage : NSObject

/*
   属性配置,需要在获取 feedViewController前设置
 */
///跳转是否隐藏 TarBar,默认为 YES
@property(nonatomic, assign) BOOL hidesBottomBarWhenPushed;
///  视频状态代理
@property (nonatomic, weak) id<KSCUVideoStateDelegate> videoStateDelegate;
///  页面状态代理
@property (nonatomic, weak) id<KSCUContentStateDelegate> stateDelegate;

@property (nonatomic, readonly) UIViewController *feedViewController;

- (instancetype)initWithPosId:(NSString *)posId NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;


@end

NS_ASSUME_NONNULL_END
