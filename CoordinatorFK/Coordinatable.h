//
//  Coordinatable.h
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#import <Foundation/Foundation.h>
#import "MainCoordinator.h"

NS_ASSUME_NONNULL_BEGIN

@protocol Coordinatable

@property (nullable) MainCoordinator *mainCoordinator;

@end

NS_ASSUME_NONNULL_END
