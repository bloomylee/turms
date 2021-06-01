// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/group/group_invitations_with_version.proto
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

public struct GroupInvitationsWithVersion {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var groupInvitations: [GroupInvitation] = []

  public var lastUpdatedDate: Int64 {
    get {return _lastUpdatedDate ?? 0}
    set {_lastUpdatedDate = newValue}
  }
  /// Returns true if `lastUpdatedDate` has been explicitly set.
  public var hasLastUpdatedDate: Bool {return self._lastUpdatedDate != nil}
  /// Clears the value of `lastUpdatedDate`. Subsequent reads from it will return its default value.
  public mutating func clearLastUpdatedDate() {self._lastUpdatedDate = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _lastUpdatedDate: Int64? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension GroupInvitationsWithVersion: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GroupInvitationsWithVersion"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "group_invitations"),
    2: .standard(proto: "last_updated_date"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeRepeatedMessageField(value: &self.groupInvitations) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self._lastUpdatedDate) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.groupInvitations.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.groupInvitations, fieldNumber: 1)
    }
    if let v = self._lastUpdatedDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: GroupInvitationsWithVersion, rhs: GroupInvitationsWithVersion) -> Bool {
    if lhs.groupInvitations != rhs.groupInvitations {return false}
    if lhs._lastUpdatedDate != rhs._lastUpdatedDate {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
