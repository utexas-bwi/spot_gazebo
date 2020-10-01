// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/payload_service.proto
// Original file comments:
// Copyright (c) 2020 Boston Dynamics, Inc.  All rights reserved.
//
// Downloading, reproducing, distributing or otherwise using the SDK Software
// is subject to the terms and conditions of the Boston Dynamics Software
// Development Kit License (20191101-BDSDK-SL).
//
#ifndef GRPC_bosdyn_2fapi_2fpayload_5fservice_2eproto__INCLUDED
#define GRPC_bosdyn_2fapi_2fpayload_5fservice_2eproto__INCLUDED

#include "bosdyn/api/payload_service.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace bosdyn {
namespace api {

// This service provides a way to query for the currently-registered payloads.
class PayloadService final {
 public:
  static constexpr char const* service_full_name() {
    return "bosdyn.api.PayloadService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // List all payloads the robot knows about.
    virtual ::grpc::Status ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::bosdyn::api::ListPayloadsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>> AsyncListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>>(AsyncListPayloadsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>> PrepareAsyncListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>>(PrepareAsyncListPayloadsRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // List all payloads the robot knows about.
      virtual void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>* AsyncListPayloadsRaw(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::ListPayloadsResponse>* PrepareAsyncListPayloadsRaw(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::bosdyn::api::ListPayloadsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>> AsyncListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>>(AsyncListPayloadsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>> PrepareAsyncListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>>(PrepareAsyncListPayloadsRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, std::function<void(::grpc::Status)>) override;
      void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ListPayloads(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ListPayloads(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::ListPayloadsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>* AsyncListPayloadsRaw(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::ListPayloadsResponse>* PrepareAsyncListPayloadsRaw(::grpc::ClientContext* context, const ::bosdyn::api::ListPayloadsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ListPayloads_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // List all payloads the robot knows about.
    virtual ::grpc::Status ListPayloads(::grpc::ServerContext* context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListPayloads() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListPayloads(::grpc::ServerContext* context, ::bosdyn::api::ListPayloadsRequest* request, ::grpc::ServerAsyncResponseWriter< ::bosdyn::api::ListPayloadsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ListPayloads<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_ListPayloads() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::ListPayloadsRequest, ::bosdyn::api::ListPayloadsResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::bosdyn::api::ListPayloadsRequest* request, ::bosdyn::api::ListPayloadsResponse* response) { return this->ListPayloads(context, request, response); }));}
    void SetMessageAllocatorFor_ListPayloads(
        ::grpc::experimental::MessageAllocator< ::bosdyn::api::ListPayloadsRequest, ::bosdyn::api::ListPayloadsResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::ListPayloadsRequest, ::bosdyn::api::ListPayloadsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ListPayloads(
      ::grpc::CallbackServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ListPayloads(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_ListPayloads<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_ListPayloads<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListPayloads() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListPayloads() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListPayloads(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_ListPayloads() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListPayloads(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ListPayloads(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ListPayloads(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListPayloads : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListPayloads() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::bosdyn::api::ListPayloadsRequest, ::bosdyn::api::ListPayloadsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::bosdyn::api::ListPayloadsRequest, ::bosdyn::api::ListPayloadsResponse>* streamer) {
                       return this->StreamedListPayloads(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListPayloads() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListPayloads(::grpc::ServerContext* /*context*/, const ::bosdyn::api::ListPayloadsRequest* /*request*/, ::bosdyn::api::ListPayloadsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListPayloads(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::bosdyn::api::ListPayloadsRequest,::bosdyn::api::ListPayloadsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ListPayloads<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ListPayloads<Service > StreamedService;
};

}  // namespace api
}  // namespace bosdyn


#endif  // GRPC_bosdyn_2fapi_2fpayload_5fservice_2eproto__INCLUDED