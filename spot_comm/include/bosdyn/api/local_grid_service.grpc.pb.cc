// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/local_grid_service.proto

#include "bosdyn/api/local_grid_service.pb.h"
#include "bosdyn/api/local_grid_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace bosdyn {
namespace api {

static const char* LocalGridService_method_names[] = {
  "/bosdyn.api.LocalGridService/GetLocalGridTypes",
  "/bosdyn.api.LocalGridService/GetLocalGrids",
};

std::unique_ptr< LocalGridService::Stub> LocalGridService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LocalGridService::Stub> stub(new LocalGridService::Stub(channel));
  return stub;
}

LocalGridService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetLocalGridTypes_(LocalGridService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetLocalGrids_(LocalGridService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LocalGridService::Stub::GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::bosdyn::api::GetLocalGridTypesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetLocalGridTypes_, context, request, response);
}

void LocalGridService::Stub::experimental_async::GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLocalGridTypes_, context, request, response, std::move(f));
}

void LocalGridService::Stub::experimental_async::GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLocalGridTypes_, context, request, response, std::move(f));
}

void LocalGridService::Stub::experimental_async::GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLocalGridTypes_, context, request, response, reactor);
}

void LocalGridService::Stub::experimental_async::GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLocalGridTypes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>* LocalGridService::Stub::AsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::GetLocalGridTypesResponse>::Create(channel_.get(), cq, rpcmethod_GetLocalGridTypes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>* LocalGridService::Stub::PrepareAsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::GetLocalGridTypesResponse>::Create(channel_.get(), cq, rpcmethod_GetLocalGridTypes_, context, request, false);
}

::grpc::Status LocalGridService::Stub::GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::bosdyn::api::GetLocalGridsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetLocalGrids_, context, request, response);
}

void LocalGridService::Stub::experimental_async::GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLocalGrids_, context, request, response, std::move(f));
}

void LocalGridService::Stub::experimental_async::GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetLocalGrids_, context, request, response, std::move(f));
}

void LocalGridService::Stub::experimental_async::GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLocalGrids_, context, request, response, reactor);
}

void LocalGridService::Stub::experimental_async::GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetLocalGrids_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>* LocalGridService::Stub::AsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::GetLocalGridsResponse>::Create(channel_.get(), cq, rpcmethod_GetLocalGrids_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>* LocalGridService::Stub::PrepareAsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::GetLocalGridsResponse>::Create(channel_.get(), cq, rpcmethod_GetLocalGrids_, context, request, false);
}

LocalGridService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LocalGridService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LocalGridService::Service, ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>(
          [](LocalGridService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::GetLocalGridTypesRequest* req,
             ::bosdyn::api::GetLocalGridTypesResponse* resp) {
               return service->GetLocalGridTypes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LocalGridService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LocalGridService::Service, ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>(
          [](LocalGridService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::GetLocalGridsRequest* req,
             ::bosdyn::api::GetLocalGridsResponse* resp) {
               return service->GetLocalGrids(ctx, req, resp);
             }, this)));
}

LocalGridService::Service::~Service() {
}

::grpc::Status LocalGridService::Service::GetLocalGridTypes(::grpc::ServerContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status LocalGridService::Service::GetLocalGrids(::grpc::ServerContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace bosdyn
}  // namespace api

