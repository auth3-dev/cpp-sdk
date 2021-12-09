cc_library(
    name = "admin",
    srcs = [
        "admin.grpc.pb.cc",
        "admin.grpc.pb.h",
        "admin.pb.cc",
        "admin_mock.grpc.pb.h",
    ],
    hdrs = [
        "admin.pb.h",
    ],
    visibility = [
        "//visibility:public",
    ],
    deps = [
        "@com_github_grpc_grpc//:grpc++",
        "@com_google_protobuf//:protobuf",
    ],
)
