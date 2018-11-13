/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */
#pragma once
<<<<<<< HEAD
#include "fpga/V2/api.h"
=======

#include "fpga/V2/fpga_common.h"
>>>>>>> upstream/develop

namespace paddle_mobile {
namespace fpga {

int PerformBypass(const struct BypassArgs& args);
int ComputeBasicConv(const struct ConvArgs& args);
int ComputeFpgaPool(const struct PoolingArgs& args);
int ComputeFpgaEWAdd(const struct EWAddArgs& args);

int ComputeFpgaConv(const struct SplitConvArgs& args);
int ComputeFPGAConcat(const struct ConcatArgs& args);

}  // namespace fpga
}  // namespace paddle_mobile
