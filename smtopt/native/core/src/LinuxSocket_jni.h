/*******************************************************************************
 * Copyright (c) 2015 Low Latency Trading Limited  :  Author Richard Rose
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at	http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing,  software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and limitations under the License.
 *******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_rr_core_socket_LinuxSocketImpl */

#ifndef _Included_com_rr_core_socket_LinuxSocketImpl
#define _Included_com_rr_core_socket_LinuxSocketImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef com_rr_core_socket_LinuxSocketImpl_EOF
#define com_rr_core_socket_LinuxSocketImpl_EOF -1L
#undef com_rr_core_socket_LinuxSocketImpl_UNAVAILABLE
#define com_rr_core_socket_LinuxSocketImpl_UNAVAILABLE -2L
#undef com_rr_core_socket_LinuxSocketImpl_INTERRUPTED
#define com_rr_core_socket_LinuxSocketImpl_INTERRUPTED -3L
#undef com_rr_core_socket_LinuxSocketImpl_UNSUPPORTED
#define com_rr_core_socket_LinuxSocketImpl_UNSUPPORTED -4L
#undef com_rr_core_socket_LinuxSocketImpl_THROWN
#define com_rr_core_socket_LinuxSocketImpl_THROWN -5L
#undef com_rr_core_socket_LinuxSocketImpl_UNSUPPORTED_CASE
#define com_rr_core_socket_LinuxSocketImpl_UNSUPPORTED_CASE -6L
/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_init
  (JNIEnv *, jclass);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    socket
 * Signature: (ZZ)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_socket
  (JNIEnv *, jclass, jboolean, jboolean);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    connect
 * Signature: (ILjava/net/InetAddress;II)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_connect
  (JNIEnv *, jclass, jint, jobject, jint, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    checkConnect
 * Signature: (IZZ)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_checkConnect
  (JNIEnv *, jclass, jint, jboolean, jboolean);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    configureBlocking
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_configureBlocking
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    getFlags
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_getFlags
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    bind
 * Signature: (ILjava/net/InetAddress;I)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_bind
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    listen
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_listen
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    mcastIP4_server_makeSockAddrIn
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_rr_core_socket_LinuxSocketImpl_mcastIP4_1server_1makeSockAddrIn
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    mcastIP4_server_setSendMulticastLocalIF
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_mcastIP4_1server_1setSendMulticastLocalIF
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    mcastIP4_server_sendTo
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_mcastIP4_1server_1sendTo
  (JNIEnv *, jclass, jint, jlong, jint, jlong);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    mcastIP4_client_bindAnyIF_IP4
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_mcastIP4_1client_1bindAnyIF_1IP4
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    mcastIP4_client_join
 * Signature: (ILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_mcastIP4_1client_1join
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    accept
 * Signature: (I[Ljava/net/InetSocketAddress;)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_accept
  (JNIEnv *, jclass, jint, jobjectArray);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    join
 * Signature: (ILjava/net/InetAddress;Ljava/net/NetworkInterface;)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_join
  (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    leave
 * Signature: (ILjava/net/InetAddress;Ljava/net/NetworkInterface;)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_leave
  (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    read
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_read
  (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    receiveIgnoreSrc
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_receiveIgnoreSrc
  (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    write
 * Signature: (IJI)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_write
  (JNIEnv *, jclass, jint, jlong, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    onloadWrite
 * Signature: (IJIZ)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_onloadWrite
  (JNIEnv *, jclass, jint, jlong, jint, jboolean);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    getIntOption
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_rr_core_socket_LinuxSocketImpl_getIntOption
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_rr_core_socket_LinuxSocketImpl
 * Method:    setIntOption
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_rr_core_socket_LinuxSocketImpl_setIntOption
  (JNIEnv *, jclass, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
