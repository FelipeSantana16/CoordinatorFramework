# CoordinatorFramework

The Coordinator is a design pattern responsible for managing the app navigation.

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

#### How to use:

1. Set App Delegate
2. Set Coordinatable View Controllers
3. Add Events
4. How to call a View Controller
