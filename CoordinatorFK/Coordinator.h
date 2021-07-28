//
//  Coordinator.h
//  EmbedCoordinator
//
//  Created by Felipe Santana on 27/07/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol Coordinator

@property NSMutableArray<Coordinator> *childs;

@property UINavigationController *navigation;

-(void) start: (UIViewController*) startViewController;

@end

NS_ASSUME_NONNULL_END
