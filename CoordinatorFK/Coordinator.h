//
//  Coordinator.h
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// The protocol that defines the requirements an object must have to be a coordinator
@protocol Coordinator

/// This property is responsible can add new coordinators controlling subflows of the main coordinator(they subscribe to the coordinator protocol)
@property NSMutableArray<Coordinator> *childs;

/// An attribute of type UINvaigationController that is responsible for managing the push and pop of the controller stack
@property UINavigationController *navigation;

/// Method that initializes the coordinator, receiving as a parameter a ViewController that signs the Coordinatable protocol.
/// @param startViewController The controller that starts your app's main flow
-(void) start: (UIViewController*) startViewController;

@end

NS_ASSUME_NONNULL_END
