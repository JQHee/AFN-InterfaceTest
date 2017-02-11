//
//  ViewController.m
//  testAFN
//
//  Created by MAC on 2017/2/8.
//  Copyright © 2017年 MAC. All rights reserved.
//

#import "ViewController.h"
#import "QFNetworking.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    dict[@"phone"] = @18775134221;
    dict[@"type"] = @2;
    dict[@"isTest"] = @true;
    
    [[QFNetworking sharedInstance] POST:@"/client/seller/user/get-phonecode.do" parameters:dict progress:^(NSProgress *progress) {
        
    } success:^(NSURLSessionDataTask *task, id responseObject) {
        NSLog(@"成功 %@", responseObject);
        
    } failure:^(NSURLSessionDataTask *task, NSError *error, NSString *errorMsg) {
        NSLog(@"- %@", error);
    }];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
