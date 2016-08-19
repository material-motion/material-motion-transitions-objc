/*
 Copyright 2016-present The Material Motion Authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

import XCTest
import UIKit
import MaterialMotionTransitions

class TransitionDirectorTests: XCTestCase {

  func testInitialization() {
    let director = TransitionDirector(initialDirection: .present, from: UIViewController(), to: UIViewController())
    XCTAssertEqual(director.initialDirection, .present)
  }

  func testCallingSetUp() {
    let director = TransitionDirector(initialDirection: .present, from: UIViewController(), to: UIViewController())

    let transaction = Transaction()
    director.setUp(transaction: transaction)
  }

  func testNonZeroDurationForUIKitAnimations() {
    let director = TransitionDirector(initialDirection: .present, from: UIViewController(), to: UIViewController())

    XCTAssertGreaterThan(director.transitionDurationForUIKitAnimations(), 0 as TimeInterval)
  }
}
