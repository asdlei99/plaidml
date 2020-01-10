// Copyright 2019, Intel Corporation

#pragma once

#include <string>

#include "mlir/IR/Dialect.h"

namespace pmlc {
namespace dialect {
namespace xsmm {

class Dialect : public mlir::Dialect {
 public:
  explicit Dialect(mlir::MLIRContext* ctx);

  static llvm::StringRef getDialectNamespace() { return "xsmm"; }
  static std::string getCanonicalOpName(llvm::StringRef name);

  mlir::Type parseType(mlir::DialectAsmParser& parser) const override;
  void printType(mlir::Type type, mlir::DialectAsmPrinter& printer) const override;

  mlir::Operation* materializeConstant(  //
      mlir::OpBuilder& builder,          //
      mlir::Attribute value,             //
      mlir::Type type,                   //
      mlir::Location loc) override;
};

}  // namespace xsmm
}  // namespace dialect
}  // namespace pmlc