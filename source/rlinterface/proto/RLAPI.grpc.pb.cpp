// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: RLAPI.proto

#include "RLAPI.pb.h"
#include "RLAPI.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* RLAPI_method_names[] = {
  "/RLAPI/Step",
  "/RLAPI/Reset",
  "/RLAPI/GetTemplates",
};

std::unique_ptr< RLAPI::Stub> RLAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RLAPI::Stub> stub(new RLAPI::Stub(channel));
  return stub;
}

RLAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Step_(RLAPI_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reset_(RLAPI_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTemplates_(RLAPI_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RLAPI::Stub::Step(::grpc::ClientContext* context, const ::Actions& request, ::Observation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Step_, context, request, response);
}

void RLAPI::Stub::experimental_async::Step(::grpc::ClientContext* context, const ::Actions* request, ::Observation* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Step_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::Step(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Observation* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Step_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::Step(::grpc::ClientContext* context, const ::Actions* request, ::Observation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Step_, context, request, response, reactor);
}

void RLAPI::Stub::experimental_async::Step(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Observation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Step_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Observation>* RLAPI::Stub::AsyncStepRaw(::grpc::ClientContext* context, const ::Actions& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Observation>::Create(channel_.get(), cq, rpcmethod_Step_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Observation>* RLAPI::Stub::PrepareAsyncStepRaw(::grpc::ClientContext* context, const ::Actions& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Observation>::Create(channel_.get(), cq, rpcmethod_Step_, context, request, false);
}

::grpc::Status RLAPI::Stub::Reset(::grpc::ClientContext* context, const ::ResetRequest& request, ::Observation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Reset_, context, request, response);
}

void RLAPI::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::ResetRequest* request, ::Observation* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Observation* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::ResetRequest* request, ::Observation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, reactor);
}

void RLAPI::Stub::experimental_async::Reset(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Observation* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Reset_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Observation>* RLAPI::Stub::AsyncResetRaw(::grpc::ClientContext* context, const ::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Observation>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Observation>* RLAPI::Stub::PrepareAsyncResetRaw(::grpc::ClientContext* context, const ::ResetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Observation>::Create(channel_.get(), cq, rpcmethod_Reset_, context, request, false);
}

::grpc::Status RLAPI::Stub::GetTemplates(::grpc::ClientContext* context, const ::GetTemplateRequest& request, ::Templates* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetTemplates_, context, request, response);
}

void RLAPI::Stub::experimental_async::GetTemplates(::grpc::ClientContext* context, const ::GetTemplateRequest* request, ::Templates* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTemplates_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::GetTemplates(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Templates* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTemplates_, context, request, response, std::move(f));
}

void RLAPI::Stub::experimental_async::GetTemplates(::grpc::ClientContext* context, const ::GetTemplateRequest* request, ::Templates* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTemplates_, context, request, response, reactor);
}

void RLAPI::Stub::experimental_async::GetTemplates(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Templates* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetTemplates_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Templates>* RLAPI::Stub::AsyncGetTemplatesRaw(::grpc::ClientContext* context, const ::GetTemplateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Templates>::Create(channel_.get(), cq, rpcmethod_GetTemplates_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::Templates>* RLAPI::Stub::PrepareAsyncGetTemplatesRaw(::grpc::ClientContext* context, const ::GetTemplateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::Templates>::Create(channel_.get(), cq, rpcmethod_GetTemplates_, context, request, false);
}

RLAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RLAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RLAPI::Service, ::Actions, ::Observation>(
          std::mem_fn(&RLAPI::Service::Step), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RLAPI_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RLAPI::Service, ::ResetRequest, ::Observation>(
          std::mem_fn(&RLAPI::Service::Reset), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RLAPI_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RLAPI::Service, ::GetTemplateRequest, ::Templates>(
          std::mem_fn(&RLAPI::Service::GetTemplates), this)));
}

RLAPI::Service::~Service() {
}

::grpc::Status RLAPI::Service::Step(::grpc::ServerContext* context, const ::Actions* request, ::Observation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RLAPI::Service::Reset(::grpc::ServerContext* context, const ::ResetRequest* request, ::Observation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RLAPI::Service::GetTemplates(::grpc::ServerContext* context, const ::GetTemplateRequest* request, ::Templates* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


