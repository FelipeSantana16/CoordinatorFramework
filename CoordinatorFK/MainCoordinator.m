//
//  MainCoordinator.m
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#import <Foundation/Foundation.h>
#import "MainCoordinator.h"
#import "Coordinatable.h"

@implementation MainCoordinator


/// @Brief This is the init from coordinator
/// @param navigation This param get a UINavigationController
- (instancetype) initWithNavigation:(UINavigationController *)navigation {
    self = [super init];
    if (self) {
        self.navigation = navigation;
    }
    return self;
}

- (void) push:(UIViewController *)viewController {
    [self.navigation pushViewController:viewController animated:true];
}

- (void)start:(nonnull id<Coordinatable>)startViewController {
    startViewController.mainCoordinator = self;
    [self push : (UIViewController*) startViewController];
}

@end
