// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/user/user_info.proto
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

public struct UserInfo {
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

  public var name: String {
    get {return _name ?? String()}
    set {_name = newValue}
  }
  /// Returns true if `name` has been explicitly set.
  public var hasName: Bool {return self._name != nil}
  /// Clears the value of `name`. Subsequent reads from it will return its default value.
  public mutating func clearName() {self._name = nil}

  public var intro: String {
    get {return _intro ?? String()}
    set {_intro = newValue}
  }
  /// Returns true if `intro` has been explicitly set.
  public var hasIntro: Bool {return self._intro != nil}
  /// Clears the value of `intro`. Subsequent reads from it will return its default value.
  public mutating func clearIntro() {self._intro = nil}

  public var registrationDate: Int64 {
    get {return _registrationDate ?? 0}
    set {_registrationDate = newValue}
  }
  /// Returns true if `registrationDate` has been explicitly set.
  public var hasRegistrationDate: Bool {return self._registrationDate != nil}
  /// Clears the value of `registrationDate`. Subsequent reads from it will return its default value.
  public mutating func clearRegistrationDate() {self._registrationDate = nil}

  public var active: Bool {
    get {return _active ?? false}
    set {_active = newValue}
  }
  /// Returns true if `active` has been explicitly set.
  public var hasActive: Bool {return self._active != nil}
  /// Clears the value of `active`. Subsequent reads from it will return its default value.
  public mutating func clearActive() {self._active = nil}

  public var profileAccessStrategy: ProfileAccessStrategy {
    get {return _profileAccessStrategy ?? .all}
    set {_profileAccessStrategy = newValue}
  }
  /// Returns true if `profileAccessStrategy` has been explicitly set.
  public var hasProfileAccessStrategy: Bool {return self._profileAccessStrategy != nil}
  /// Clears the value of `profileAccessStrategy`. Subsequent reads from it will return its default value.
  public mutating func clearProfileAccessStrategy() {self._profileAccessStrategy = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _id: Int64? = nil
  fileprivate var _name: String? = nil
  fileprivate var _intro: String? = nil
  fileprivate var _registrationDate: Int64? = nil
  fileprivate var _active: Bool? = nil
  fileprivate var _profileAccessStrategy: ProfileAccessStrategy? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension UserInfo: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".UserInfo"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "id"),
    2: .same(proto: "name"),
    3: .same(proto: "intro"),
    4: .standard(proto: "registration_date"),
    5: .same(proto: "active"),
    6: .standard(proto: "profile_access_strategy"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self._id) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self._name) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self._intro) }()
      case 4: try { try decoder.decodeSingularInt64Field(value: &self._registrationDate) }()
      case 5: try { try decoder.decodeSingularBoolField(value: &self._active) }()
      case 6: try { try decoder.decodeSingularEnumField(value: &self._profileAccessStrategy) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if let v = self._id {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
    }
    if let v = self._name {
      try visitor.visitSingularStringField(value: v, fieldNumber: 2)
    }
    if let v = self._intro {
      try visitor.visitSingularStringField(value: v, fieldNumber: 3)
    }
    if let v = self._registrationDate {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 4)
    }
    if let v = self._active {
      try visitor.visitSingularBoolField(value: v, fieldNumber: 5)
    }
    if let v = self._profileAccessStrategy {
      try visitor.visitSingularEnumField(value: v, fieldNumber: 6)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: UserInfo, rhs: UserInfo) -> Bool {
    if lhs._id != rhs._id {return false}
    if lhs._name != rhs._name {return false}
    if lhs._intro != rhs._intro {return false}
    if lhs._registrationDate != rhs._registrationDate {return false}
    if lhs._active != rhs._active {return false}
    if lhs._profileAccessStrategy != rhs._profileAccessStrategy {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
