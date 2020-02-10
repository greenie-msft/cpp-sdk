// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dapr.proto

#include "dapr.pb.h"
#include "dapr.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace dapr {

static const char* Dapr_method_names[] = {
  "/dapr.Dapr/PublishEvent",
  "/dapr.Dapr/InvokeService",
  "/dapr.Dapr/InvokeBinding",
  "/dapr.Dapr/GetState",
  "/dapr.Dapr/SaveState",
  "/dapr.Dapr/DeleteState",
};

std::unique_ptr< Dapr::Stub> Dapr::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Dapr::Stub> stub(new Dapr::Stub(channel));
  return stub;
}

Dapr::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_PublishEvent_(Dapr_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InvokeService_(Dapr_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InvokeBinding_(Dapr_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetState_(Dapr_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SaveState_(Dapr_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteState_(Dapr_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Dapr::Stub::PublishEvent(::grpc::ClientContext* context, const ::dapr::PublishEventEnvelope& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PublishEvent_, context, request, response);
}

void Dapr::Stub::experimental_async::PublishEvent(::grpc::ClientContext* context, const ::dapr::PublishEventEnvelope* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PublishEvent_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::PublishEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PublishEvent_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::PublishEvent(::grpc::ClientContext* context, const ::dapr::PublishEventEnvelope* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PublishEvent_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::PublishEvent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PublishEvent_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::AsyncPublishEventRaw(::grpc::ClientContext* context, const ::dapr::PublishEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_PublishEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::PrepareAsyncPublishEventRaw(::grpc::ClientContext* context, const ::dapr::PublishEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_PublishEvent_, context, request, false);
}

::grpc::Status Dapr::Stub::InvokeService(::grpc::ClientContext* context, const ::dapr::InvokeServiceEnvelope& request, ::dapr::InvokeServiceResponseEnvelope* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_InvokeService_, context, request, response);
}

void Dapr::Stub::experimental_async::InvokeService(::grpc::ClientContext* context, const ::dapr::InvokeServiceEnvelope* request, ::dapr::InvokeServiceResponseEnvelope* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_InvokeService_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::InvokeService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dapr::InvokeServiceResponseEnvelope* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_InvokeService_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::InvokeService(::grpc::ClientContext* context, const ::dapr::InvokeServiceEnvelope* request, ::dapr::InvokeServiceResponseEnvelope* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_InvokeService_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::InvokeService(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dapr::InvokeServiceResponseEnvelope* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_InvokeService_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::dapr::InvokeServiceResponseEnvelope>* Dapr::Stub::AsyncInvokeServiceRaw(::grpc::ClientContext* context, const ::dapr::InvokeServiceEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::dapr::InvokeServiceResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_InvokeService_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::InvokeServiceResponseEnvelope>* Dapr::Stub::PrepareAsyncInvokeServiceRaw(::grpc::ClientContext* context, const ::dapr::InvokeServiceEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::dapr::InvokeServiceResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_InvokeService_, context, request, false);
}

::grpc::Status Dapr::Stub::InvokeBinding(::grpc::ClientContext* context, const ::dapr::InvokeBindingEnvelope& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_InvokeBinding_, context, request, response);
}

void Dapr::Stub::experimental_async::InvokeBinding(::grpc::ClientContext* context, const ::dapr::InvokeBindingEnvelope* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_InvokeBinding_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::InvokeBinding(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_InvokeBinding_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::InvokeBinding(::grpc::ClientContext* context, const ::dapr::InvokeBindingEnvelope* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_InvokeBinding_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::InvokeBinding(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_InvokeBinding_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::AsyncInvokeBindingRaw(::grpc::ClientContext* context, const ::dapr::InvokeBindingEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_InvokeBinding_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::PrepareAsyncInvokeBindingRaw(::grpc::ClientContext* context, const ::dapr::InvokeBindingEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_InvokeBinding_, context, request, false);
}

::grpc::Status Dapr::Stub::GetState(::grpc::ClientContext* context, const ::dapr::GetStateEnvelope& request, ::dapr::GetStateResponseEnvelope* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetState_, context, request, response);
}

void Dapr::Stub::experimental_async::GetState(::grpc::ClientContext* context, const ::dapr::GetStateEnvelope* request, ::dapr::GetStateResponseEnvelope* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::GetState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dapr::GetStateResponseEnvelope* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::GetState(::grpc::ClientContext* context, const ::dapr::GetStateEnvelope* request, ::dapr::GetStateResponseEnvelope* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetState_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::GetState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dapr::GetStateResponseEnvelope* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::dapr::GetStateResponseEnvelope>* Dapr::Stub::AsyncGetStateRaw(::grpc::ClientContext* context, const ::dapr::GetStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::dapr::GetStateResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_GetState_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::dapr::GetStateResponseEnvelope>* Dapr::Stub::PrepareAsyncGetStateRaw(::grpc::ClientContext* context, const ::dapr::GetStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::dapr::GetStateResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_GetState_, context, request, false);
}

::grpc::Status Dapr::Stub::SaveState(::grpc::ClientContext* context, const ::dapr::SaveStateEnvelope& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SaveState_, context, request, response);
}

void Dapr::Stub::experimental_async::SaveState(::grpc::ClientContext* context, const ::dapr::SaveStateEnvelope* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::SaveState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::SaveState(::grpc::ClientContext* context, const ::dapr::SaveStateEnvelope* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveState_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::SaveState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::AsyncSaveStateRaw(::grpc::ClientContext* context, const ::dapr::SaveStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SaveState_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::PrepareAsyncSaveStateRaw(::grpc::ClientContext* context, const ::dapr::SaveStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_SaveState_, context, request, false);
}

::grpc::Status Dapr::Stub::DeleteState(::grpc::ClientContext* context, const ::dapr::DeleteStateEnvelope& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteState_, context, request, response);
}

void Dapr::Stub::experimental_async::DeleteState(::grpc::ClientContext* context, const ::dapr::DeleteStateEnvelope* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::DeleteState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteState_, context, request, response, std::move(f));
}

void Dapr::Stub::experimental_async::DeleteState(::grpc::ClientContext* context, const ::dapr::DeleteStateEnvelope* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteState_, context, request, response, reactor);
}

void Dapr::Stub::experimental_async::DeleteState(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteState_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::AsyncDeleteStateRaw(::grpc::ClientContext* context, const ::dapr::DeleteStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteState_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* Dapr::Stub::PrepareAsyncDeleteStateRaw(::grpc::ClientContext* context, const ::dapr::DeleteStateEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteState_, context, request, false);
}

Dapr::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::PublishEventEnvelope, ::google::protobuf::Empty>(
          std::mem_fn(&Dapr::Service::PublishEvent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::InvokeServiceEnvelope, ::dapr::InvokeServiceResponseEnvelope>(
          std::mem_fn(&Dapr::Service::InvokeService), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::InvokeBindingEnvelope, ::google::protobuf::Empty>(
          std::mem_fn(&Dapr::Service::InvokeBinding), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::GetStateEnvelope, ::dapr::GetStateResponseEnvelope>(
          std::mem_fn(&Dapr::Service::GetState), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::SaveStateEnvelope, ::google::protobuf::Empty>(
          std::mem_fn(&Dapr::Service::SaveState), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Dapr_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Dapr::Service, ::dapr::DeleteStateEnvelope, ::google::protobuf::Empty>(
          std::mem_fn(&Dapr::Service::DeleteState), this)));
}

Dapr::Service::~Service() {
}

::grpc::Status Dapr::Service::PublishEvent(::grpc::ServerContext* context, const ::dapr::PublishEventEnvelope* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Dapr::Service::InvokeService(::grpc::ServerContext* context, const ::dapr::InvokeServiceEnvelope* request, ::dapr::InvokeServiceResponseEnvelope* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Dapr::Service::InvokeBinding(::grpc::ServerContext* context, const ::dapr::InvokeBindingEnvelope* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Dapr::Service::GetState(::grpc::ServerContext* context, const ::dapr::GetStateEnvelope* request, ::dapr::GetStateResponseEnvelope* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Dapr::Service::SaveState(::grpc::ServerContext* context, const ::dapr::SaveStateEnvelope* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Dapr::Service::DeleteState(::grpc::ServerContext* context, const ::dapr::DeleteStateEnvelope* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace dapr

