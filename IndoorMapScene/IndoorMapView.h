//
//  IndoorMapView.h
//  IndoorMapScene
//
//  Created by apple on 13-10-29.
//  Copyright (c) 2013年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IndoorMapView : UIScrollView<UIScrollViewDelegate>
{
    NSMutableArray *data;
    UIImage *pathImg;
}

@property (nonatomic, strong) UIImageView *mapView;
@property (nonatomic, strong) UIImageView *tagImageView;
@property (nonatomic, strong) UIImageView *pathImageView;

@end
