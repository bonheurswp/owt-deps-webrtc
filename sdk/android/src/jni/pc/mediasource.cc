/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "api/mediastreaminterface.h"
#include "sdk/android/generated_peerconnection_jni/jni/MediaSource_jni.h"
#include "sdk/android/src/jni/jni_helpers.h"

namespace webrtc {
namespace jni {

JNI_FUNCTION_DECLARATION(jobject,
                         MediaSource_getNativeState,
                         JNIEnv* jni,
                         jclass,
                         jlong j_p) {
  return Java_State_fromNativeIndex(
      jni, reinterpret_cast<MediaSourceInterface*>(j_p)->state());
}

}  // namespace jni
}  // namespace webrtc