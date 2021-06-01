// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/user/user_friend_request.proto
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

public struct UserFriendRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var id: Int64 {
    get {return _id ?? 0}
    set {_id = newValue}
  }
  /// Returns true if `id` has been explicitly set.
  public var hasID: Bool {return self._id != nil}
  /// Clears the value of `id`. Subsequent reads from it will return its default value.
  public mutating func clearID() {self._id = nil}

  public var creationDate: Int64 {
    get {return _creationDate ?? 0}
    set {_creationDate = newValue}
  }
  /// Returns true if `creationDate` has been explicitly set.
  public var hasCreationDate: Bool {return self._creationDate != nil}
  /// Clears the value of `creationDate`. Subsequent reads from it will return its default value.
  public mutating func clearCreationDate() {self._creationDate = nil}

  public var content: String {
    get {return _content ?? String()}
    set {_content = newValue}
  }
  /// Returns true if `content` has been explicitly set.
  public var hasContent: Bool {return self._content != nil}
  /// Clears the value of `content`. Subsequent reads from it will return its default value.
  public mutating func clearContent() {self._content = nil}

  public var requestStatus: RequestStatus {
    get {return _requestStatus ?? .pending}
    set {_requestStatus = newValue}
  }
  /// Returns true if `requestStatus` has been explicitly set.
  public var hasRequestStatus: Bool {return self._requestStatus != nil}
  /// Clears the value of `requestStatus`. Subsequent reads from it will return its default value.
  public mutating func clearRequestStatus() {self._requestStatus = nil}

  public var reason: String {
    get {return _reason ?? String()}
    set {_reason = newValue}
  }
  /// Returns true if `reason` has been explicitly set.
  public var hasReason: Bool {return self._reason != nil}
  /// Clears the value of `reason`. Subsequent reads from it will return its default value.
  public mutating func clearReason() {self._reason = nil}

  public var expirationDate: Int64 {
    get {return _expirationDate ?? 0}
    set {_expirationDate = newValue}
  }
  /// Returns true if `expirationDate` has been explicitly set.
  public var hasExpirationDate: Bool {return self._expirationDate != nil}
  /// Clears the value of `expirationDate`. Subsequent reads from it will return its default value.
  public mutating func clearExpirationDate() {self._expirationDate = nil}

  public var requesterID: Int64 {
    get {return _requesterID ?? 0}
    set {_requesterID = newValue}
  }
  /// Returns true if `requesterID` has been explicitly set.
  public var hasRequesterID: Bool {return self._requesterID != nil}
  /// Clears the value of `requesterID`. Subsequent reads from it will return its default value.
  public mutating func clearRequesterID() {self._requesterID = nil}

  public var recipientID: Int64 {
    get {return _recipientID ?? 0}
    set {_recipientID = newValue}
  }
  /// Returns true if `recipientID` has been explicitly set.
  public var hasRecipientID: Bool {return self._recipientID != nil}
  /// Clears the value of `recipientID`. Subsequent reads from it will return its default value.
  public mutating func clearRecipientID() {self._recipientID = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _id: Int64? = nil
  fileprivate var _creationDate: Int64? = nil
  fileprivate var _content: String? = nil
  fileprivate var _requestStatus: RequestStatus? = nil
  fileprivate var _reason: String? = nil
  fileprivate var _expirationDate: Int64? = nil
  fileprivate var _requesterID: Int64? = nil
  fileprivate var _recipientID: Int64? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension UserFriendRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".UserFriendRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "id"),
    2: .standard(proto: "creation_date"),
    3: .same(proto: "content"),
    4: .standard(proto: "request_status"),
    5: .same(proto: "reason"),
    6: .standard(proto: "expiration_date"),
    7: .standard(proto: "requester_id"),
    8: .standard(proto: "recipient_id"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self._id) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self._creationDate) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self._content) }()
      case 4: try { try decoder.decodeSingularEnumField(value: &self._requestStatus) }()
      case 5: try { try decoder.decodeSingularStringField(value: &self._reason) }()
      case 6: try { try decoder.decodeSingularInt64Field(value: &self._expirationDate) }()
      case 7: try { try decoder.decodeSingularInt64Field(value: &self._requesterID) }()
      case 8: try { try decoder.decodeSingularInt64Field(value: &self._recipientID) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if let v = self._id {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
    }
    if let v = self._creationDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 2)
    }
    if let v = self._content {
      try visitor.visitSingularStringField(value: v, fieldNumber: 3)
    }
    if let v = self._requestStatus {
      try visitor.visitSingularEnumField(value: v, fieldNumber: 4)
    }
    if let v = self._reason {
      try visitor.visitSingularStringField(value: v, fieldNumber: 5)
    }
    if let v = self._expirationDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 6)
    }
    if let v = self._requesterID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 7)
    }
    if let v = self._recipientID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 8)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: UserFriendRequest, rhs: UserFriendRequest) -> Bool {
    if lhs._id != rhs._id {return false}
    if lhs._creationDate != rhs._creationDate {return false}
    if lhs._content != rhs._content {return false}
    if lhs._requestStatus != rhs._requestStatus {return false}
    if lhs._reason != rhs._reason {return false}
    if lhs._expirationDate != rhs._expirationDate {return false}
    if lhs._requesterID != rhs._requesterID {return false}
    if lhs._recipientID != rhs._recipientID {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
