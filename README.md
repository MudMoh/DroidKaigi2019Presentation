# DroidKaigi 2019 - Animations in Flutter presentation

![Animations in Flutter](https://github.com/salihgueler/DroidKaigi2019Presentation/blob/master/presentation.gif)

I created this desktop application to be able to show how Flutter Desktop applications are working. It is directly embedded inside the Flutter Desktop project. You may find the detailed information in the following official documentation from Flutter Team.

This presentation covers core animation concepts from Flutter and how to create them. 

If something is not clear or if you do not understand something please create an issue or send me a DM over [Twitter](https://twitter.com/salihgueler)

## Important notes to share before the official documentation

- Main project is the [droidkaigi](https://github.com/salihgueler/DroidKaigi2019Presentation/tree/master/example/lib/droidkaigi) folder in the example project's lib folder.  
- For running on macos, simply run the xcode project in the example project and run it from there. 
- You may attach the attacher with `$ flutter attach --device-id=flutter-tester --debug-port=<port-number>` command over terminal

# Desktop Embedding for Flutter

The purpose of this project is to support building
applications that use [Flutter](https://github.com/flutter/flutter)
on Windows, macOS, and Linux.

It consists of libraries that implement [Flutter's embedding
API](https://github.com/flutter/flutter/wiki/Custom-Flutter-Engine-Embedders),
handling drawing and mouse/keyboard input, as well as
optional plugins to access other native platform functionality.

## How to Use This Code

_If you have an existing Flutter app and just want to get it running, see
the [quick start](Quick-Start.md) page before continuing._

### Setting Up

The tooling and build infrastructure for this project requires that you have
a Flutter tree in the same parent directory as the clone of this project:

```
<parent dir>
  ├─ flutter (from https://github.com/flutter/flutter)
  └─ flutter-desktop-embedding (from https://github.com/google/flutter-desktop-embedding)
```

Alternately, you can place a `.flutter_location_config` file in the directory
containing flutter-desktop-embedding, containing a path to the Flutter tree to
use, if you prefer not to have the Flutter tree next to
flutter-desktop-embedding.

### Repository Structure

The `library` directory contains the core embedding library code. See the
[README](library/README.md) there for information on building and using it.

The `example` directory contains an example application built using the library
for each platform. If you just want to see something running, or want to see
an example of how to use the library, start there.

In addition, there is:
* `plugins`: Plugins which provide access to additional platform functionality.
  These follow a similar structure to [Flutter
  plugins](https://flutter.io/developing-packages/). See the
  [README](plugins/README.md) for details.
* `third_party`: Dependencies used by this repository, beyond Flutter itself.
* `tools`: Tools used in the development process. Currently these are used
  by the build systems, but in the future developer utilities providing
  some functionality similar to the `flutter` tool may be added.

## Flutter Application

### Requirements

Since desktop is not a supported platform for Flutter, be sure to read the
[Flutter application requirements document](Flutter-Requirements.md) for
important information about how to set up your Flutter application for use
with this library.

### Debugging

Debugging of the Flutter side of a desktop application is possible, but requires
[a modified workflow](Debugging.md).

To debug the Flutter engine, you can [use a local engine build](LocalEngine.md).

## Feedback and Discussion

For bug reports and specific feature requests, you can file GitHub issues. For
general discussion and questions there's a [project mailing
list](https://groups.google.com/forum/#!forum/flutter-desktop-embedding-dev).

When submitting issues related to build errors or other bugs, please make sure
to include the git hash of the Flutter checkout you are using. This will help
speed up the debugging process.

## Caveats

* This is not an officially supported Google product.
* This is an exploratory effort, and is not part of the Flutter project. See the
  [Flutter FAQ](https://flutter.io/faq/#can-i-use-flutter-to-build-desktop-apps)
  for Flutter's official stance on desktop development.
* Many features that would be useful for desktop development do not exist yet.
  Check the `plugins` directory for support for native features beyond drawing
  and event processing. If the feature you need isn't there, file a feature
  request, or [write a plugin](plugins/README.md#writing-your-own-plugins)!
* The Linux and Windows implementations currently use GLFW. This is not going
  to be the final implementation for either platform.
