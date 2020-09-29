// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/mission/remote_service.proto

#include "bosdyn/api/mission/remote_service.pb.h"
#include "bosdyn/api/mission/remote_service.grpc.pb.h"

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
namespace mission {

static const char* RemoteMissionService_method_names[] = {
  "/bosdyn.api.mission.RemoteMissionService/EstablishSession",
  "/bosdyn.api.mission.RemoteMissionService/Tick",
  "/bosdyn.api.mission.RemoteMissionService/Stop",
  "/bosdyn.api.mission.RemoteMissionService/TeardownSession",
};

std::unique_ptr< RemoteMissionService::Stub> RemoteMissionService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RemoteMissionService::Stub> stub(new RemoteMissionService::Stub(channel));
  return stub;
}

RemoteMissionService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_EstablishSession_(RemoteMissionService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Tick_(RemoteMissionService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Stop_(RemoteMissionService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TeardownSession_(RemoteMissionService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RemoteMissionService::Stub::EstablishSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::EstablishSessionRequest& request, ::bosdyn::api::mission::EstablishSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_EstablishSession_, context, request, response);
}

void RemoteMissionService::Stub::experimental_async::EstablishSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::EstablishSessionRequest* request, ::bosdyn::api::mission::EstablishSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EstablishSession_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::EstablishSession(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::EstablishSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_EstablishSession_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::EstablishSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::EstablishSessionRequest* request, ::bosdyn::api::mission::EstablishSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EstablishSession_, context, request, response, reactor);
}

void RemoteMissionService::Stub::experimental_async::EstablishSession(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::EstablishSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_EstablishSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::EstablishSessionResponse>* RemoteMissionService::Stub::AsyncEstablishSessionRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::EstablishSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::EstablishSessionResponse>::Create(channel_.get(), cq, rpcmethod_EstablishSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::EstablishSessionResponse>* RemoteMissionService::Stub::PrepareAsyncEstablishSessionRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::EstablishSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::EstablishSessionResponse>::Create(channel_.get(), cq, rpcmethod_EstablishSession_, context, request, false);
}

::grpc::Status RemoteMissionService::Stub::Tick(::grpc::ClientContext* context, const ::bosdyn::api::mission::TickRequest& request, ::bosdyn::api::mission::TickResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Tick_, context, request, response);
}

void RemoteMissionService::Stub::experimental_async::Tick(::grpc::ClientContext* context, const ::bosdyn::api::mission::TickRequest* request, ::bosdyn::api::mission::TickResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Tick_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::Tick(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::TickResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Tick_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::Tick(::grpc::ClientContext* context, const ::bosdyn::api::mission::TickRequest* request, ::bosdyn::api::mission::TickResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Tick_, context, request, response, reactor);
}

void RemoteMissionService::Stub::experimental_async::Tick(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::TickResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Tick_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::TickResponse>* RemoteMissionService::Stub::AsyncTickRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::TickRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::TickResponse>::Create(channel_.get(), cq, rpcmethod_Tick_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::TickResponse>* RemoteMissionService::Stub::PrepareAsyncTickRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::TickRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::TickResponse>::Create(channel_.get(), cq, rpcmethod_Tick_, context, request, false);
}

::grpc::Status RemoteMissionService::Stub::Stop(::grpc::ClientContext* context, const ::bosdyn::api::mission::StopRequest& request, ::bosdyn::api::mission::StopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Stop_, context, request, response);
}

void RemoteMissionService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::bosdyn::api::mission::StopRequest* request, ::bosdyn::api::mission::StopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::StopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::bosdyn::api::mission::StopRequest* request, ::bosdyn::api::mission::StopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, reactor);
}

void RemoteMissionService::Stub::experimental_async::Stop(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::StopResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::StopResponse>* RemoteMissionService::Stub::AsyncStopRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::StopResponse>::Create(channel_.get(), cq, rpcmethod_Stop_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::StopResponse>* RemoteMissionService::Stub::PrepareAsyncStopRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::StopResponse>::Create(channel_.get(), cq, rpcmethod_Stop_, context, request, false);
}

::grpc::Status RemoteMissionService::Stub::TeardownSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::TeardownSessionRequest& request, ::bosdyn::api::mission::TeardownSessionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_TeardownSession_, context, request, response);
}

void RemoteMissionService::Stub::experimental_async::TeardownSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::TeardownSessionRequest* request, ::bosdyn::api::mission::TeardownSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TeardownSession_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::TeardownSession(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::TeardownSessionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TeardownSession_, context, request, response, std::move(f));
}

void RemoteMissionService::Stub::experimental_async::TeardownSession(::grpc::ClientContext* context, const ::bosdyn::api::mission::TeardownSessionRequest* request, ::bosdyn::api::mission::TeardownSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TeardownSession_, context, request, response, reactor);
}

void RemoteMissionService::Stub::experimental_async::TeardownSession(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::mission::TeardownSessionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TeardownSession_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::TeardownSessionResponse>* RemoteMissionService::Stub::AsyncTeardownSessionRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::TeardownSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::TeardownSessionResponse>::Create(channel_.get(), cq, rpcmethod_TeardownSession_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::mission::TeardownSessionResponse>* RemoteMissionService::Stub::PrepareAsyncTeardownSessionRaw(::grpc::ClientContext* context, const ::bosdyn::api::mission::TeardownSessionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::mission::TeardownSessionResponse>::Create(channel_.get(), cq, rpcmethod_TeardownSession_, context, request, false);
}

RemoteMissionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteMissionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RemoteMissionService::Service, ::bosdyn::api::mission::EstablishSessionRequest, ::bosdyn::api::mission::EstablishSessionResponse>(
          [](RemoteMissionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::mission::EstablishSessionRequest* req,
             ::bosdyn::api::mission::EstablishSessionResponse* resp) {
               return service->EstablishSession(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteMissionService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RemoteMissionService::Service, ::bosdyn::api::mission::TickRequest, ::bosdyn::api::mission::TickResponse>(
          [](RemoteMissionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::mission::TickRequest* req,
             ::bosdyn::api::mission::TickResponse* resp) {
               return service->Tick(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteMissionService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RemoteMissionService::Service, ::bosdyn::api::mission::StopRequest, ::bosdyn::api::mission::StopResponse>(
          [](RemoteMissionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::mission::StopRequest* req,
             ::bosdyn::api::mission::StopResponse* resp) {
               return service->Stop(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RemoteMissionService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RemoteMissionService::Service, ::bosdyn::api::mission::TeardownSessionRequest, ::bosdyn::api::mission::TeardownSessionResponse>(
          [](RemoteMissionService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::mission::TeardownSessionRequest* req,
             ::bosdyn::api::mission::TeardownSessionResponse* resp) {
               return service->TeardownSession(ctx, req, resp);
             }, this)));
}

RemoteMissionService::Service::~Service() {
}

::grpc::Status RemoteMissionService::Service::EstablishSession(::grpc::ServerContext* context, const ::bosdyn::api::mission::EstablishSessionRequest* request, ::bosdyn::api::mission::EstablishSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RemoteMissionService::Service::Tick(::grpc::ServerContext* context, const ::bosdyn::api::mission::TickRequest* request, ::bosdyn::api::mission::TickResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RemoteMissionService::Service::Stop(::grpc::ServerContext* context, const ::bosdyn::api::mission::StopRequest* request, ::bosdyn::api::mission::StopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RemoteMissionService::Service::TeardownSession(::grpc::ServerContext* context, const ::bosdyn::api::mission::TeardownSessionRequest* request, ::bosdyn::api::mission::TeardownSessionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace bosdyn
}  // namespace api
}  // namespace mission

