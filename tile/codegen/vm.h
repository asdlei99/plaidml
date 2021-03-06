// Copyright 2018, Intel Corporation

#pragma once

#include <map>
#include <string>
#include <vector>

#include "tile/stripe/stripe.h"

namespace vertexai {
namespace tile {
namespace codegen {

using Buffer = std::vector<float>;

void ExecuteProgram(const stripe::Block& program, std::map<std::string, Buffer>* buffers);

}  // namespace codegen
}  // namespace tile
}  // namespace vertexai
