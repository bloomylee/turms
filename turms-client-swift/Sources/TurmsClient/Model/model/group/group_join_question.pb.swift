// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/group/group_join_question.proto
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

public struct GroupJoinQuestion {
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

  public var groupID: Int64 {
    get {return _groupID ?? 0}
    set {_groupID = newValue}
  }
  /// Returns true if `groupID` has been explicitly set.
  public var hasGroupID: Bool {return self._groupID != nil}
  /// Clears the value of `groupID`. Subsequent reads from it will return its default value.
  public mutating func clearGroupID() {self._groupID = nil}

  public var question: String {
    get {return _question ?? String()}
    set {_question = newValue}
  }
  /// Returns true if `question` has been explicitly set.
  public var hasQuestion: Bool {return self._question != nil}
  /// Clears the value of `question`. Subsequent reads from it will return its default value.
  public mutating func clearQuestion() {self._question = nil}

  public var answers: [String] = []

  public var score: Int32 {
    get {return _score ?? 0}
    set {_score = newValue}
  }
  /// Returns true if `score` has been explicitly set.
  public var hasScore: Bool {return self._score != nil}
  /// Clears the value of `score`. Subsequent reads from it will return its default value.
  public mutating func clearScore() {self._score = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _id: Int64? = nil
  fileprivate var _groupID: Int64? = nil
  fileprivate var _question: String? = nil
  fileprivate var _score: Int32? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension GroupJoinQuestion: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GroupJoinQuestion"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "id"),
    2: .standard(proto: "group_id"),
    3: .same(proto: "question"),
    4: .same(proto: "answers"),
    5: .same(proto: "score"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self._id) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self._groupID) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self._question) }()
      case 4: try { try decoder.decodeRepeatedStringField(value: &self.answers) }()
      case 5: try { try decoder.decodeSingularInt32Field(value: &self._score) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if let v = self._id {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 1)
    }
    if let v = self._groupID {
      try visitor.visitSingularInt64Field(value: v, fieldNumber: 2)
    }
    if let v = self._question {
      try visitor.visitSingularStringField(value: v, fieldNumber: 3)
    }
    if !self.answers.isEmpty {
      try visitor.visitRepeatedStringField(value: self.answers, fieldNumber: 4)
    }
    if let v = self._score {
      try visitor.visitSingularInt32Field(value: v, fieldNumber: 5)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: GroupJoinQuestion, rhs: GroupJoinQuestion) -> Bool {
    if lhs._id != rhs._id {return false}
    if lhs._groupID != rhs._groupID {return false}
    if lhs._question != rhs._question {return false}
    if lhs.answers != rhs.answers {return false}
    if lhs._score != rhs._score {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
