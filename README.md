# Auth3 C++ SDK

The official [Auth3](https://auth3.dev/?utm_source=github&utm_medium=sdk&utm_campaign=csharp) c++ SDK library.

## API Documentation

Check-out the API documentation at [https://docs.auth3.dev/apis/identity-platform/administrative](https://docs.auth3.dev/apis/identity-platform/administrative?utm_source=github&utm_medium=sdk&utm_campaign=csharp) for further help.

## Install

You can run `make system-check` to ensure your system is capable of building the artifact, then include the admin
folder within your project and reference them from within your `makefile`/`cmakelist.txt` or any other build system
you use. Alternatively you can build a library and just link it.

### Bazel

#### Build the library
Bazel has built-in support and it's officially supported by Auth3. 

To generate the SDKs just get this repository in a local folder, then run (assumes [bazel](https://bazel.build) to be pre-installed):

```bash
bazel build //:admin
```

This will build a library, for your to pick. and then link with your binary.

#### Embed as a library
Alternatively, if your project already uses Bazel, you can link it as a library and automatically compile it all together. To do so, in your `WORKSPACE`:

```python
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_auth3_dev_cpp_sdk",
    urls = [
        "https://github.com/auth3-dev/cpp-sdk/archive/YOUR_COMMIT_SHA.tar.gz",
    ],
    strip_prefix = "cpp-sdk-YOUR_COMMIT_SHA",
)
```

Then in your BUILD files, you can reference it as:

```python
cc_binary(
  name = "mybin",
  srcs = [
    # ...
  ],
  deps = [
    # this example includes the administrative SDK only
    "@com_github_auth3_dev_cpp_sdk//admin:admin",
  ]
)
```

**Required:** Make sure to also install `grpc` dependencies within your WORKSPACE, read [here](https://github.com/grpc/grpc/tree/master/src/cpp) for detailed instructions.

### Make

#### Dependencies

You'll need the following libraries (which are not shipped within the SDK):

* [protobuf v3.12.3](https://github.com/protocolbuffers/protobuf/) (with c++ compiler)
* [grpc](https://github.com/grpc/grpc/)

Then, once everything is configured you can build with:

```bash
make # or make a specific target like "admin_sdk" with `make admin_sdk`
```

#### Check system dependencies

Run the following to check your system is properly configured, which comes as task of the provided Makefile:

    make system-check

This will output the system readiness to compile with make.

## Additional help

You can find further help, examples, tools and suggestions [here](https://grpc.io/docs/languages/cpp). For a deeper understanding of networking, naming conventions and error handling refer to [this document](https://developers.google.com/protocol-buffers/docs/cpptutorial).

## Change Language

Not your target language? Check out our official SDKs for: 

  * [go](https://github.com/auth3-dev/go-sdk)
  * [cpp](https://github.com/auth3-dev/cpp-sdk)
  * [java](https://github.com/auth3-dev/java-sdk)
  * [nodejs](https://github.com/auth3-dev/nodejs-sdk)
  * [dart](https://github.com/auth3-dev/dart-sdk)
  * [python](https://github.com/auth3-dev/python-sdk)
  * [php](https://github.com/auth3-dev/php-sdk)
  * [ruby](https://github.com/auth3-dev/ruby-sdk)
  * [rust](https://github.com/auth3-dev/rust-sdk)
  * [scala](https://github.com/auth3-dev/scala-sdk)
  * [swift](https://github.com/auth3-dev/swift-sdk)
  * [c#](https://github.com/auth3-dev/csharp-sdk)

## Contributing

At this time we don't accept external contributions, but we're open for feedbacks and requests. We're always looking for contributions on our security, refer to [our dedicated page](https://auth3.dev/bounty-program?utm_source=github&utm_medium=sdk&utm_campaign=csharp) for more.

## Support

Customers of the Auth3 Identity Platform can access support through the official channels available on [our website](https://auth3.dev/?utm_source=github&utm_medium=sdk&utm_campaign=csharp). We won't be able to accomodate Customer requests through the bug tracker for security reasons. 

## License

Read the [LICENSE](https://github.com/auth3-dev/cpp-sdk/blob/main/LICENSE).