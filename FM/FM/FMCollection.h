//
//  FMCollection.h
//  FM
//
//  Created by  mac on 9/27/13.
//  Copyright (c) 2013 Duke CS. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FMCollection : UICollectionViewController

@property (strong, nonatomic) NSArray *nameArray;

@property (strong, nonatomic) NSArray *dataArray;

@property NSInteger numItems;

@property (strong, nonatomic) NSArray *transArray;

@end