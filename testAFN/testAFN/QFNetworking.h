//
//  QFNetworking.h
//  LoveCar
//
//  Created by apple on 16/4/12.
//  Copyright © 2016年 aichezhonghua. All rights reserved.
//

#import "AFNetworking.h"
#import <Foundation/Foundation.h>

/*

 买家版接口250测试环境为
 http://192.168.1.250:8080/api
 如
 http://192.168.1.250:8080/api/start/checkUpdate

 @android-李杰 @iOS-覃奋 @iOS-黄家仟

 */

//#define mainURL @"http://192.168.1.250:4000/mockjsdata/6"
//#define mainURL @"http://192.168.1.250:8080/api"
#define mainURL @"http://192.168.1.250:8080"
//#define mainURL @"http://me4auh.natappfree.cc/elmsc2/api/"

@interface QFNetworking : NSObject

+ (instancetype)sharedInstance;

- (void)POST:(NSString *)URLString
  parameters:(id)parameters
    progress:(void (^)(NSProgress *progress))progress
     success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
     failure:(void (^)(NSURLSessionDataTask *task, NSError *error, NSString *errorMsg))failure;
- (void)GET:(NSString *)URLString
 parameters:(id)parameters
   progress:(void (^)(NSProgress *progress))progress
    success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
    failure:(void (^)(NSURLSessionDataTask *task, NSError *error, NSString *errorMsg))failure;
- (void)POST:(NSString *)URLString
  parameters:(id)parameters
      images:(NSMutableArray *)images
    formData:(void (^)(id<AFMultipartFormData> formData))block
    progress:(void (^)(NSProgress *progress))progress
     success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
     failure:(void (^)(NSURLSessionDataTask *task, NSError *error, NSString *errorMsg))failure;
@end
