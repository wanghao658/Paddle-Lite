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

#ifdef FUSION_CONVADDBNRELU_OP

#include <vector>
#include "framework/ddim.h"
#include "framework/operator.h"
#include "operators/math/im2col.h"
#include "operators/math/math_function.h"
#include "operators/math/vol2col.h"
#include "operators/op_param.h"

namespace paddle_mobile {
namespace operators {

using framework::DDim;
using framework::OpKernelBase;

template <typename DeviceType, typename T>
class ConvAddBNReluKernel
    : public OpKernelBase<DeviceType, FusionConvAddBNReluParam<DeviceType>> {
 public:
  void Compute(const FusionConvAddBNReluParam<DeviceType> &param);
  bool Init(FusionConvAddBNReluParam<DeviceType> *param);
  inline int maptofactor(int i, int factor) {
    return (i + factor - 1) / factor;
  }
};

}  // namespace operators
}  // namespace paddle_mobile

#endif
