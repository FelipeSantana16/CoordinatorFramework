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
