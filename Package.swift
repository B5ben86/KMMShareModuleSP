// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "kmmprotocolmodule",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "kmmprotocolmodule",
            targets: ["kmmprotocolmodule"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kmmprotocolmodule",
            path: "./kmmprotocolmodule.xcframework"
        ),
    ]
)
