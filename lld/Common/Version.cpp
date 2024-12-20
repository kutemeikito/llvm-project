//===- lib/Common/Version.cpp - LLD Version Number ---------------*- C++-=====//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file defines several version-related utility functions for LLD.
//
//===----------------------------------------------------------------------===//

#include "lld/Common/Version.h"
#include "VCSVersion.inc"
#include "llvm/Support/VCSRevision.h"

// Returns a version string, e.g.:
// LLD 14.0.0 (https://github.com/llvm/llvm-project.git
// 2d9759c7902c5cbc9a7e3ab623321d5578d51687)
std::string lld::getLLDVersion() {
return "LLD " LLD_VERSION_STRING;
}
