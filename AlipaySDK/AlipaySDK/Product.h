//
//  Product.h
//  YHAllPowerfulTemplate
//
//  Created by 王英辉 on 16/1/12.
//  Copyright © 2016年 book. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject{
@private
float     _price;
NSString *_subject;
NSString *_body;
NSString *_orderId;
}
/**
 *  金额
 */
@property (nonatomic, assign) float price;
/**
 *  商品标题
 */
@property (nonatomic, copy) NSString *subject;
/**
 *  商品描述
 */
@property (nonatomic, copy) NSString *body;
/**
 *  订单ID（由商家自行制定）
 */
@property (nonatomic, copy) NSString *orderId;

@end
