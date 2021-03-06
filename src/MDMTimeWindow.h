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

#import "MDMTransition.h"
#import "MDMTransitionWindow.h"

/** Deprecated. Use MDMTransitionDirection instead. */
typedef MDMTransitionDirection MDMTimeWindowDirection
    __deprecated_msg("Use MDMTransitionDirection instead. Deprecated in v1.1.0.");

/** Deprecated. Use MDMTransitionDirectionForward instead. */
extern const MDMTransitionDirection MDMTimeWindowDirectionForward
    __deprecated_msg("Use MDMTransitionDirectionForward instead. Deprecated in v1.1.0.");
/** Deprecated. Use MDMTransitionDirectionForward instead. */
extern const MDMTransitionDirection MDMTimeWindowDirectionBackward
    __deprecated_msg("Use MDMTransitionDirectionBackward instead. Deprecated in v1.1.0.");

/** A time window provides a normalized view of a period of time. */
NS_SWIFT_NAME(TimeWindow)
@interface MDMTimeWindow : MDMTransitionWindow

/** Initializes a newly-allocated time window with a direction and duration. */
- (nonnull instancetype)initWithInitialDirection:(MDMTransitionDirection)initialDirection
                                        duration:(NSTimeInterval)duration
    __deprecated_msg("Use MDMTransitionWindow instead.");

/** Unavailable. */
- (nonnull instancetype)init NS_UNAVAILABLE;

/** The initial direction of the time window position's movement. */
@property(nonatomic, assign, readonly) MDMTransitionDirection initialDirection
    __deprecated_msg("Use MDMTransitionWindow instead.");

/** The current direction of the time window position's movement. */
@property(nonatomic, assign) MDMTransitionDirection currentDirection
    __deprecated_msg("Use MDMTransitionWindow instead.");

/**
 The current position within the time window.

 Expressed in the range [0,1].

 - 0 refers to the back side of the time window.
 - 1 refers to the front side of the time window.

 The initial value depends on the initialDirection.
 */
@property(nonatomic, assign) CGFloat position
    __deprecated_msg("Use timeline.position instead.");

@end
