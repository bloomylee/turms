// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/user/user_relationship.proto
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

public struct UserRelationship {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var ownerID: Int64 {
    get {return _ownerID ?? 0}
    set {_ownerID = newValue}
  }
  /// Returns true if `ownerID` has been explicitly set.
  public var hasOwnerID: Bool {return self._ownerID != nil}
  /// Clears the value of `ownerID`. Subsequent reads from it will return its default value.
  public mutating func clearOwnerID() {self._ownerID = nil}

  public var relatedUserID: Int64 {
    get {return _relatedUserID ?? 0}
    set {_relatedUserID = newValue}
  }
  /// Returns true if `relatedUserID` has been explicitly set.
  public var hasRelatedUserID: Bool {return self._relatedUserID != nil}
  /// Clears the value of `relatedUserID`. Subsequent reads from it will return its default value.
  public mutating func clearRelatedUserID() {self._relatedUserID = nil}

  public var blockDate: Int64 {
    get {return _blockDate ?? 0}
    set {_blockDate = newValue}
  }
  /// Returns true if `blockDate` has been explicitly set.
  public var hasBlockDate: Bool {return self._blockDate != nil}
  /// Clears the value of `blockDate`. Subsequent reads from it will return its default value.
  public mutating func clearBlockDate() {self._blockDate = nil}

  public var groupIndex: Int64 {
    get {return _groupIndex ?? 0}
    set {_groupIndex = newValue}
  }
  /// Returns true if `groupIndex` has been explicitly set.
  public var hasGroupIndex: Bool {return self._groupIndex != nil}
  /// Clears the value of `groupIndex`. Subsequent reads from it will return its default value.
  public mutating func clearGroupIndex() {self._groupIndex = nil}

  public var establishmentDate: Int64 {
    get {return _establishmentDate ?? 0}
    set {_establishmentDate = newValue}
  }
  /// Returns true if `establishmentDate` has been explicitly set.
  public var hasEstablishmentDate: Bool {return self._establishmentDate != nil}
  /// Clears the value of `establishmentDate`. Subsequent reads from it will return its default value.
  public mutating func clearEstablishmentDate() {self._establishmentDate = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _ownerID: Int64? = nil
  fileprivate var _relatedUserID: Int64? = nil
  fileprivate var _blockDate: Int64? = nil
  fileprivate var _groupIndex: Int64? = nil
  fileprivate var _establishmentDate: Int64? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension UserRelationship: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".UserRelationship"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "owner_id"),
    2: .standard(proto: "related_user_id"),
    3: .standard(proto: "block_date"),
    4: .standard(proto: "group_index"),
    5: .standard(proto: "establishment_date"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self._ownerID) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self._relatedUserID) }()
      case 3: try { try decoder.decodeSingularInt64Field(value: &self._blockDate) }()
      case 4: try { try decoder.decodeSingularInt64Field(value: &self._groupIndex) }()
      case 5: try { try decoder.decodeSingularInt64Field(value: &self._establishmentDate) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if let v = self._ownerID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
    }
    if let v = self._relatedUserID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 2)
    }
    if let v = self._blockDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 3)
    }
    if let v = self._groupIndex {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 4)
    }
    if let v = self._establishmentDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: UserRelationship, rhs: UserRelationship) -> Bool {
    if lhs._ownerID != rhs._ownerID {return false}
    if lhs._relatedUserID != rhs._relatedUserID {return false}
    if lhs._blockDate != rhs._blockDate {return false}
    if lhs._groupIndex != rhs._groupIndex {return false}
    if lhs._establishmentDate != rhs._establishmentDate {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
