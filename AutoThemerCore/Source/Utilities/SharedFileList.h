//
//  SharedFileList.h
//  NoiseBuddy
//
//  Created by Chaitanya Pawar on 13/11/19.
//  Copyright © 2019 Chaitanya Pawar. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SharedFileList : NSObject

+ (instancetype)sessionLoginItems;

@property (nonatomic, readonly) NSSet<NSURL *> *items;

@property (nonatomic, copy, nullable) void(^changeHandler)(SharedFileList *);

- (BOOL)containsItem:(NSURL *)url;
- (void)addItem:(NSURL *)url;
- (void)removeItem:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END
