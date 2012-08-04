/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _EXT4_H
#define _EXT4_H

#include <unistd.h>

class Ext4 {
public:
    static int isExt4(const char *fsPath);
    static int check(const char *fsPath);
    static int doMount(const char *fsPath, char *mountPoint, bool ro, bool remount,
        bool executable);
    static int doFuse(char *src, const char *dst);
    static int format(const char *fsPath);
};

#endif
