// swift-tools-version:5.3
import PackageDescription

let package = Package (
    name: "CoordinatorFK",
    platforms: [
        .iOS(.v14) 
    ],
    products: [
        .library(
            name: "CoordinatorFK",
            targets: ["CoordinatorFK"]),
    ],
    targets: [
        .target(
            name: "CoordinatorFK",
            path: "CoordinatorFK",
            publicHeadersPath: "")
    ]
)
