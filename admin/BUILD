cc_library(
    name = "admin",
    srcs = [
        "admin.grpc.pb.cc",
        "admin.pb.cc",
        "admin_mock.grpc.pb.h",
        "admin.grpc.pb.h",
    ],
    hdrs = [
        "admin.pb.h",
    ],
    deps = [
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_protobuf//:protobuf",
    ],
    visibility = [
        "//visibility:public",
    ],
)