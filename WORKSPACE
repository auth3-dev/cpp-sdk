workspace(name = "com_github_auth3_dev_cpp_sdk")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-3.12.3",
    urls = [
        "https://github.com/protocolbuffers/protobuf/archive/v3.12.3.tar.gz",
    ],
)

http_archive(
    name = "com_github_grpc_grpc",
    strip_prefix = "grpc-1.40.0",
    urls = [
        "https://github.com/grpc/grpc/archive/v1.40.0.tar.gz",
    ],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
