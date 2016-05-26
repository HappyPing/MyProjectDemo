//
//  JPTopic.h
//  健平不得姐
//
//  Created by ios app on 16/5/19.
//  Copyright © 2016年 cb2015. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h> //Foundation没有CGFloat，使用UIKit，UIKit包括了Foundation

@interface JPTopic : NSObject

//服务器返回的属性
@property(nonatomic,copy)NSString *name;//名称
@property(nonatomic,copy)NSString *profile_image;//头像URL
@property(nonatomic,copy)NSString *create_time;//创建时间
@property(nonatomic,copy)NSString *text;//段子内容
@property(nonatomic,assign)NSInteger ding;//顶的数量
@property(nonatomic,assign)NSInteger cai;//踩的数量
@property(nonatomic,assign)NSInteger repost;//转发的数量
@property(nonatomic,assign)NSInteger comment;//评论的数量
@property(nonatomic,assign,getter=isSina_v)BOOL sina_v;//是否为新浪加V用户
@property(nonatomic,assign)CGFloat pictureWidth;//图片宽度 ---> width
@property(nonatomic,assign)CGFloat pictureHeight;//图片高度 ---> height
@property(nonatomic,copy)NSString *small_image;//小图片URL ---> image0
@property(nonatomic,copy)NSString *big_image;//大图片URL ---> image1
@property(nonatomic,copy)NSString *mid_image;//中图片URL ---> image2
@property(nonatomic,assign)JPTopicType type;//帖子类型

//自定义额外的辅助属性
@property(nonatomic,assign,readonly)CGFloat cellHeight;//对应的cell的高度
@property(nonatomic,assign,readonly)CGRect pictureFrame;//图片控件的frame
@property(nonatomic,assign,getter=isBigPicture)BOOL bigPicture;//是否为大图
@property(nonatomic,assign)CGFloat pictureProgress;//图片的下载进度值
@end
