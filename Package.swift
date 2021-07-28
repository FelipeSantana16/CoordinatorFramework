// swift-tools-version:5.3
import PackageDescription

let package = Package (
    name: "CoordinatorFramework",
    platforms: [
        .iOS(.v14) 
    ],
    products: [
        .library(
            name: "CoordinatorFramework",
            targets: ["CoordinatorFramework"]),
    ],
    targets: [
        .target(
            name: "CoordinatorFramework",
            path: "CoordinatorFramework",
            publicHeadersPath: "")
    ]
)
