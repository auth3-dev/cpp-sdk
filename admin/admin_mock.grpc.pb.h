// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: admin.proto

#include "admin.pb.h"
#include "admin.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/sync_stream.h>
#include <gmock/gmock.h>
namespace depot {
namespace devtools {
namespace auth {
namespace v0 {
namespace identity {
namespace admin {

class MockAdminStub : public Admin::StubInterface {
 public:
  MOCK_METHOD3(CreateIdentity, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdentityRequest& request, ::depot::devtools::auth::v0::identity::admin::CreateIdentityResponse* response));
  MOCK_METHOD3(AsyncCreateIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdentity, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdentityResponse* response));
  MOCK_METHOD3(AsyncGetIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdentityByIdentifier, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierResponse* response));
  MOCK_METHOD3(AsyncGetIdentityByIdentifierRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdentityByIdentifierRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityByIdentifierRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdentitiesByAttribute, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeResponse* response));
  MOCK_METHOD3(AsyncGetIdentitiesByAttributeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdentitiesByAttributeRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesByAttributeRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdentities, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdentitiesResponse* response));
  MOCK_METHOD3(AsyncGetIdentitiesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentitiesResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdentitiesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentitiesResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentitiesRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateIdentity, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdentityRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateIdentityResponse* response));
  MOCK_METHOD3(AsyncUpdateIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(DeleteIdentity, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdentityRequest& request, ::depot::devtools::auth::v0::identity::admin::DeleteIdentityResponse* response));
  MOCK_METHOD3(AsyncDeleteIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncDeleteIdentityRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteIdentityResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdentityRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetAddresses, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressesRequest& request, ::depot::devtools::auth::v0::identity::admin::GetAddressesResponse* response));
  MOCK_METHOD3(AsyncGetAddressesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetAddressesResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressesRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetAddressesRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetAddressesResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressesRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetAddress, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressRequest& request, ::depot::devtools::auth::v0::identity::admin::GetAddressResponse* response));
  MOCK_METHOD3(AsyncGetAddressRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetAddressResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetAddressRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetAddressResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetAddressRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateAddress, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateAddressRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateAddressResponse* response));
  MOCK_METHOD3(AsyncUpdateAddressRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateAddressResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateAddressRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateAddressRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateAddressResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateAddressRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetTraits, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetTraitsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetTraitsResponse* response));
  MOCK_METHOD3(AsyncGetTraitsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetTraitsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetTraitsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetTraitsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetTraitsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetTraitsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateTraits, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateTraitsRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateTraitsResponse* response));
  MOCK_METHOD3(AsyncUpdateTraitsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateTraitsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateTraitsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateTraitsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateTraitsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateTraitsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetCredentials, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetCredentialsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetCredentialsResponse* response));
  MOCK_METHOD3(AsyncGetCredentialsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetCredentialsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetCredentialsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetCredentialsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetCredentialsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetCredentialsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateCredential, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateCredentialRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateCredentialResponse* response));
  MOCK_METHOD3(AsyncUpdateCredentialRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateCredentialResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateCredentialRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateCredentialRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateCredentialResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateCredentialRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdentityLoginAttempts, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsResponse* response));
  MOCK_METHOD3(AsyncGetIdentityLoginAttemptsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdentityLoginAttemptsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdentityLoginAttemptsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(CreateConnection, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateConnectionRequest& request, ::depot::devtools::auth::v0::identity::admin::CreateConnectionResponse* response));
  MOCK_METHOD3(AsyncCreateConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetConnections, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetConnectionsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetConnectionsResponse* response));
  MOCK_METHOD3(AsyncGetConnectionsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetConnectionsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetConnectionsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetConnectionsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetConnectionsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetConnectionsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateConnection, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateConnectionRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateConnectionResponse* response));
  MOCK_METHOD3(AsyncUpdateConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(DeleteConnection, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteConnectionRequest& request, ::depot::devtools::auth::v0::identity::admin::DeleteConnectionResponse* response));
  MOCK_METHOD3(AsyncDeleteConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncDeleteConnectionRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteConnectionResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteConnectionRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(CreateIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaResponse* response));
  MOCK_METHOD3(AsyncCreateIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdSchemas, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemasRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdSchemasResponse* response));
  MOCK_METHOD3(AsyncGetIdSchemasRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdSchemasResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemasRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdSchemasRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdSchemasResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemasRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::GetIdSchemaResponse* response));
  MOCK_METHOD3(AsyncGetIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetDefaultIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaResponse* response));
  MOCK_METHOD3(AsyncGetDefaultIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetDefaultIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetDefaultIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaResponse* response));
  MOCK_METHOD3(AsyncUpdateIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(MarkDefaultIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaResponse* response));
  MOCK_METHOD3(AsyncMarkDefaultIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncMarkDefaultIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::MarkDefaultIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(DeleteIdSchema, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaRequest& request, ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaResponse* response));
  MOCK_METHOD3(AsyncDeleteIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncDeleteIdSchemaRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteIdSchemaRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(CreateOAuth2Client, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientRequest& request, ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientResponse* response));
  MOCK_METHOD3(AsyncCreateOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCreateOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::CreateOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetOAuth2Clients, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsResponse* response));
  MOCK_METHOD3(AsyncGetOAuth2ClientsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetOAuth2ClientsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetOAuth2ClientsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateOAuth2Client, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientResponse* response));
  MOCK_METHOD3(AsyncUpdateOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(DeleteOAuth2Client, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientRequest& request, ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientResponse* response));
  MOCK_METHOD3(AsyncDeleteOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncDeleteOAuth2ClientRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::DeleteOAuth2ClientRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetEmailsSetup, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupRequest& request, ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupResponse* response));
  MOCK_METHOD3(AsyncGetEmailsSetupRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetEmailsSetupRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetEmailsSetupRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(UpdateEmailsSetup, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupRequest& request, ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupResponse* response));
  MOCK_METHOD3(AsyncUpdateEmailsSetupRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncUpdateEmailsSetupRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::UpdateEmailsSetupRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(GetUserBaseStatistics, ::grpc::Status(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsRequest& request, ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsResponse* response));
  MOCK_METHOD3(AsyncGetUserBaseStatisticsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncGetUserBaseStatisticsRaw, ::grpc::ClientAsyncResponseReaderInterface< ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsResponse>*(::grpc::ClientContext* context, const ::depot::devtools::auth::v0::identity::admin::GetUserBaseStatisticsRequest& request, ::grpc::CompletionQueue* cq));
};

} // namespace depot
} // namespace devtools
} // namespace auth
} // namespace v0
} // namespace identity
} // namespace admin

