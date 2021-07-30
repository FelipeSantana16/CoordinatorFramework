//
//  MainCoordinator.h
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#ifndef MainCoordinator_h
#define MainCoordinator_h
#import "Coordinator.h"
#import <UIKit/UIKit.h>

@class Coordinatable;

/// Coordinator class that is responsible for the main stream and for containing children that contain their appropriate subflows
@interface MainCoordinator : NSObject <Coordinator>

/// Attribute containing sub coordinator that implement the coordinator protocol
@property NSMutableArray<Coordinator> *childs;

/// Instance of type UINavigationController that is responsible for navigation
@property UINavigationController *navigation;

/// Initiator that must receive a UINavigationController to control the flow
/// @param navigation Instance of type UINAvigationController
-(instancetype) initWithNavigation: (UINavigationController*) navigation;

/// Method that initializes the first Controller, View or any class that implements the cordinatable protocol, as the first visual instance to be presented to the user in the flow
/// @param startVC A ViewController that implements Cordinatable
-(void) start: (Coordinatable*) startVC;

/// Method that calls the proxima controller in the stack stream
/// @param viewController The viewController to be displayed
-(void) push: (UIViewController*) viewController;

@end

#endif /* MainCoordinator_h */
