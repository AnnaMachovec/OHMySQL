//  Created by Oleg on 2015.
//  Copyright (c) 2015 Oleg Hnidets. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SQLQueryString)

+ (nonnull NSString *)selectFirstStringFor:(nonnull NSString *)tableName condition:(nullable NSString *)condition orderBy:(nonnull NSArray *)columnsNames ascending:(BOOL)isAscending;
+ (nonnull NSString *)selectAllStringFor:(nonnull NSString *)tableName condition:(nullable NSString *)condition;
+ (nonnull NSString *)selectAllStringFor:(nonnull NSString *)tableName condition:(nullable NSString *)condition orderBy:(nonnull NSArray *)columnsNames ascending:(BOOL)isAscending;
+ (nonnull NSString *)updateStringFor:(nonnull NSString *)tableName set:(nonnull NSDictionary *)set condition:(nullable NSString *)condition;
+ (nonnull NSString *)deleteFrom:(nonnull NSString *)tableName condition:(nullable NSString *)condition;
+ (nonnull NSString *)insertIntoFor:(nonnull NSString *)tableName set:(nonnull NSDictionary *)set;

@end
