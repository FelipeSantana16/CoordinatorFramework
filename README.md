# CoordinatorFramework

The Coordinator is a design pattern responsible for managing the app navigation.
Obs.: The Coordinator Framework just work with View Code.

## Coordinator Pattern

Using the coordinator pattern allow us to remove the responsability of navigation from our view controllers. Coordinator pattern have two main protocols: Coordinator and Coordinatable.

#### Coordinator Protocol

The Coordinator Protocol will be sign by our Coordinators. This protocol have two properties and one function. The properties are an array of Coordinators called childCoordinators and a navigation controller called navigation. The function is called start and have a void return.

#### Coordinatable Protocol

The Coordinatable Protocol will be sign by all our view controllers. This protocol only states that our subscribers will have a coordinator.

#### Events

The coordinators must also have functions to handle the events that call another view controllers. This funcions will tell you what parameters are needed for the view controller to start.


## Using CoordinatorFramework

First you need to import the framework in your project using the following link:

`.package(url: "https://github.com/FelipeSantana16/CoordinatorFramework.git", from: "1.0.2")`

or 

Inside your project follow the steps:

1. File -> Swift Packages -> Add Package
2. Paste https://github.com/FelipeSantana16/CoordinatorFramework
3. Then just click next -> next...


#### How to use:

1. Set Scene Delegate

In Coordinator framework we already have a MainCoordinator. We need to start it in the Scene Delegate.
To do it so, you will need to import CoordinatorFK.

`import Coordinator FK`

Then, you create a var of type MainCoordinator after the window var:

`var mainCoordinator: MainCoordinator?`

Finaly, in the SceneDelegate, you set the navigation and start the mainCoordinator:

```     
guard let windowScene = (scene as? UIWindowScene) else { return }
        
// Start the mainCoordinator with a navigation
let navigation = UINavigationController()
mainCoordinator = MainCoordinator(navigation: navigation)
mainCoordinator?.start(ViewController())
        
// Set the navigation as root view controller
window = UIWindow(frame: UIScreen.main.bounds)
window?.windowScene = windowScene
window?.rootViewController = navigation
window?.makeKeyAndVisible()
```

Example:
![Set Delegate Example](https://user-images.githubusercontent.com/39348130/127339734-21fa9928-78df-4769-9751-77ed8c1a59fb.png)

3. Set Coordinatable View Controllers

All View Controllers managed by the mainCoordinator must to conform with Coordinatable protocol.

To do it, you just need to conform to the protocol and add a coordinator in the View Controller:

First remember to import the framework:

`import CoordinatorFK`

```
class ViewController: UIViewController, Coordinatable {
  var mainCoordinator: MainCoordinator?
}

```

Example:
![Conform to Coordinatable Protocol](https://user-images.githubusercontent.com/39348130/127339738-e50811a5-bae9-4e6f-a7a6-335681ec384a.png)

5. Add Events

This is the core of the Pattern. It will tell the Coordinator what parameters are needed to call each view controller.

You will need to create an extension for MainCoordinator class and put the events (functions that call a view controller) there.

To get a better organization, we recomend you to create a new file and create the extension there.

After create the new empty file, do the following:

```
import CoordinatorFK

extension MainCoordinator {

  // ... functions to call a view controller
  
  func callA() {
  
  let viewController = ViewControllerA()
  viewController.mainCoordinator = self
  push(viewController)
  
  }

}

```

Obs.: Remember that your view controller must to conform with Coordinatable pattern!

Example:
![Adding events](https://user-images.githubusercontent.com/39348130/127339730-c9f5c114-2e2c-4dc9-a98c-46f33f6d3252.png)

7. How to call a View Controller

Inside your view controller, when you want to go to another view controller, you will use the mainCoordinator. Your view controller doesn't know that another view controller exists. It just informs you that an event has occurred (that's why the functions to call other view controllers are called events), passes the necessary data, and the mainCoordinator decides who will call.

So, if you are in a view controller and want to be to a view controller A, you will do the following inside your view controlelr:

`self.mainCoordinator.callA()`

## Project Example:
If you have any problem or just want some reference, download the example here: https://github.com/FelipeSantana16/CoordinatorFKExample.
