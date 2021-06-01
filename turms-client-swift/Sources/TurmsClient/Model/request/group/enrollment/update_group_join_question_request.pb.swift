// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/group/enrollment/update_group_join_question_request.proto
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

public struct UpdateGroupJoinQuestionRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var questionID: Int64 = 0

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

  fileprivate var _question: String? = nil
  fileprivate var _score: Int32? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension UpdateGroupJoinQuestionRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".UpdateGroupJoinQuestionRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "question_id"),
    2: .same(proto: "question"),
    3: .same(proto: "answers"),
    4: .same(proto: "score"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularInt64Field(value: &self.questionID) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self._question) }()
      case 3: try { try decoder.decodeRepeatedStringField(value: &self.answers) }()
      case 4: try { try decoder.decodeSingularInt32Field(value: &self._score) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.questionID != 0 {
      try visitor.visitSingularInt64Field(value: self.questionID, fieldNumber: 1)
    }
    if let v = self._question {
      try visitor.visitSingularStringField(value: v, fieldNumber: 2)
    }
    if !self.answers.isEmpty {
      try visitor.visitRepeatedStringField(value: self.answers, fieldNumber: 3)
    }
    if let v = self._score {
      try visitor.visitSingularInt32Field(value: v, fieldNumber: 4)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: UpdateGroupJoinQuestionRequest, rhs: UpdateGroupJoinQuestionRequest) -> Bool {
    if lhs.questionID != rhs.questionID {return false}
    if lhs._question != rhs._question {return false}
    if lhs.answers != rhs.answers {return false}
    if lhs._score != rhs._score {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
