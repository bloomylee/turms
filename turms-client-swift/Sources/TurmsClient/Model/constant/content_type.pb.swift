// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: constant/content_type.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

public enum ContentType: SwiftProtobuf.Enum {
  public typealias RawValue = Int
  case profile // = 0
  case groupProfile // = 1

  ///    STORAGE = 2;
  case attachment // = 2
  case UNRECOGNIZED(Int)

  public init() {
    self = .profile
  }

  public init?(rawValue: Int) {
    switch rawValue {
    case 0: self = .profile
    case 1: self = .groupProfile
    case 2: self = .attachment
    default: self = .UNRECOGNIZED(rawValue)
    }
  }

  public var rawValue: Int {
    switch self {
    case .profile: return 0
    case .groupProfile: return 1
    case .attachment: return 2
    case .UNRECOGNIZED(let i): return i
    }
  }

}

#if swift(>=4.2)

extension ContentType: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  public static var allCases: [ContentType] = [
    .profile,
    .groupProfile,
    .attachment,
  ]
}

#endif  // swift(>=4.2)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

extension ContentType: SwiftProtobuf._ProtoNameProviding {
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "PROFILE"),
    1: .same(proto: "GROUP_PROFILE"),
    2: .same(proto: "ATTACHMENT"),
  ]
}
