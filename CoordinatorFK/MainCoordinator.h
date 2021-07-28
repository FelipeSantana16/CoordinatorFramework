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

@interface MainCoordinator : NSObject <Coordinator>

@property NSMutableArray<Coordinator> *childs;
@property UINavigationController *navigation;

-(instancetype) initWithNavigation: (UINavigationController*) navigation;

-(void) start: (Coordinatable*) startVC;
-(void) push: (UIViewController*) viewController;

@end

#endif /* MainCoordinator_h */
