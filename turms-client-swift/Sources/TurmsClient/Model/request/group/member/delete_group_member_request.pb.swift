// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/group/member/delete_group_member_request.proto
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

public struct DeleteGroupMemberRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var groupID: Int64 = 0

  public var memberID: Int64 = 0

  public var successorID: Int64 {
    get {return _successorID ?? 0}
    set {_successorID = newValue}
  }
  /// Returns true if `successorID` has been explicitly set.
  public var hasSuccessorID: Bool {return self._successorID != nil}
  /// Clears the value of `successorID`. Subsequent reads from it will return its default value.
  public mutating func clearSuccessorID() {self._successorID = nil}

  public var quitAfterTransfer: Bool {
    get {return _quitAfterTransfer ?? false}
    set {_quitAfterTransfer = newValue}
  }
  /// Returns true if `quitAfterTransfer` has been explicitly set.
  public var hasQuitAfterTransfer: Bool {return self._quitAfterTransfer != nil}
  /// Clears the value of `quitAfterTransfer`. Subsequent reads from it will return its default value.
  public mutating func clearQuitAfterTransfer() {self._quitAfterTransfer = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _successorID: Int64? = nil
  fileprivate var _quitAfterTransfer: Bool? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension DeleteGroupMemberRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeleteGroupMemberRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "group_id"),
    2: .standard(proto: "member_id"),
    3: .standard(proto: "successor_id"),
    4: .standard(proto: "quit_after_transfer"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self.groupID) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self.memberID) }()
      case 3: try { try decoder.decodeSingularInt64Field(value: &self._successorID) }()
      case 4: try { try decoder.decodeSingularBoolField(value: &self._quitAfterTransfer) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.groupID != 0 {
      try visitor.visitSingularInt64Field(value: self.groupID, fieldNumber: 1)
    }
    if self.memberID != 0 {
      try visitor.visitSingularInt64Field(value: self.memberID, fieldNumber: 2)
    }
    if let v = self._successorID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 3)
    }
    if let v = self._quitAfterTransfer {
      try visitor.visitSingularBoolField(value: v, fieldNumber: 4)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: DeleteGroupMemberRequest, rhs: DeleteGroupMemberRequest) -> Bool {
    if lhs.groupID != rhs.groupID {return false}
    if lhs.memberID != rhs.memberID {return false}
    if lhs._successorID != rhs._successorID {return false}
    if lhs._quitAfterTransfer != rhs._quitAfterTransfer {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
