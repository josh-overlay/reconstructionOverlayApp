# Overlay AR Scanning App

This repository contains an iOS app that captures 3D scans using ARKit, manages reconstructed meshes (e.g., PLY), and stores them in the app's Documents directory. Scans can be exported or integrated with downstream processing pipelines (e.g., Jetson Nano).

## Requirements
- iOS 16+
- Xcode 15+ (or newer)
- Swift 5.9+

## Project Structure
- AppDelegate: Loads, adds, removes, and organizes scans stored under the app's Documents directory.
- Scan model: Represents a captured scan (mesh files, metadata). (See source files.)

## Build & Run
1. Open the .xcodeproj or .xcworkspace in Xcode.
2. Select a device running iOS 16+.
3. Build and run (⌘R).

## Exporting Scans
Scans are stored under `Documents/<timestamp>/` and include mesh files (e.g., `.ply`). You can add an export flow to share zipped scans via AirDrop, SFTP, or HTTP to a Jetson device.

## License
Copyright © Overlay. All rights reserved. Internal use only.
