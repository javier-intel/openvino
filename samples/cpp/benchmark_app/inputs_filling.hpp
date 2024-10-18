// Copyright (C) 2018-2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <openvino/openvino.hpp>
#include <string>
#include <vector>

// clang-format off
#include "infer_request_wrap.hpp"
#include "utils.hpp"
// clang-format on

std::map<std::string, ov::TensorVector> get_tensors(std::map<std::string, std::vector<std::string>> inputFiles,
                                                    std::vector<benchmark_app::InputsInfo>& app_inputs_info);

std::map<std::string, ov::TensorVector> get_tensors_static_case(const std::vector<std::string>& inputFiles,
                                                                const size_t& batchSize,
                                                                benchmark_app::InputsInfo& app_inputs_info,
                                                                size_t requestsNum);

ov::Tensor get_random_tensor(const std::pair<std::string, benchmark_app::InputInfo>& inputInfo);

void copy_tensor_data(ov::Tensor& dst, const ov::Tensor& src);
