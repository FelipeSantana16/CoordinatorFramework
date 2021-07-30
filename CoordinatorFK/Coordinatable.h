//
//  Coordinatable.h
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#import <Foundation/Foundation.h>
#import "MainCoordinator.h"

NS_ASSUME_NONNULL_BEGIN


/// @brief Protocol that must be implemented by every view or controller so that it can enter the coordinator stream
@protocol Coordinatable

/// @brief Property that contains the reference to the instance of the coordinator in the specified controller
@property (nullable) MainCoordinator *mainCoordinator;

@end

NS_ASSUME_NONNULL_END
