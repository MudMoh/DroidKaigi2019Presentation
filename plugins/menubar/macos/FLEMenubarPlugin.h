// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <AppKit/AppKit.h>

#import <FlutterEmbedderMac/FlutterEmbedderMac.h>

/**
 * A Flutter plugin to control the native menu bar.
 */
@interface FLEMenubarPlugin : NSObject <FLEPlugin>

/**
 * The menu item that Flutter-provided menus should be inserted after. If unset, Flutter-provided
 * menus will be inserted after the application menu (i.e., starting at index 1).
 */
@property(nonatomic) NSMenuItem *insertAfterMenuItem;

@end
