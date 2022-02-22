// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "KmmProtocolModule",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "KmmProtocolModule",
            targets: ["KmmProtocolModule"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "KmmProtocolModule",
            path: "./KmmProtocolModule.xcframework"
        ),
    ]
)
