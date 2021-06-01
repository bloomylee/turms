// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/file/image_file.proto
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

public struct ImageFile {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var description_p: ImageFile.Description {
    get {return _description_p ?? ImageFile.Description()}
    set {_description_p = newValue}
  }
  /// Returns true if `description_p` has been explicitly set.
  public var hasDescription_p: Bool {return self._description_p != nil}
  /// Clears the value of `description_p`. Subsequent reads from it will return its default value.
  public mutating func clearDescription_p() {self._description_p = nil}

  public var data: Data {
    get {return _data ?? Data()}
    set {_data = newValue}
  }
  /// Returns true if `data` has been explicitly set.
  public var hasData: Bool {return self._data != nil}
  /// Clears the value of `data`. Subsequent reads from it will return its default value.
  public mutating func clearData() {self._data = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public struct Description {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var url: String = String()

    public var original: Bool {
      get {return _original ?? false}
      set {_original = newValue}
    }
    /// Returns true if `original` has been explicitly set.
    public var hasOriginal: Bool {return self._original != nil}
    /// Clears the value of `original`. Subsequent reads from it will return its default value.
    public mutating func clearOriginal() {self._original = nil}

    public var imageSize: Int32 {
      get {return _imageSize ?? 0}
      set {_imageSize = newValue}
    }
    /// Returns true if `imageSize` has been explicitly set.
    public var hasImageSize: Bool {return self._imageSize != nil}
    /// Clears the value of `imageSize`. Subsequent reads from it will return its default value.
    public mutating func clearImageSize() {self._imageSize = nil}

    public var fileSize: Int32 {
      get {return _fileSize ?? 0}
      set {_fileSize = newValue}
    }
    /// Returns true if `fileSize` has been explicitly set.
    public var hasFileSize: Bool {return self._fileSize != nil}
    /// Clears the value of `fileSize`. Subsequent reads from it will return its default value.
    public mutating func clearFileSize() {self._fileSize = nil}

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _original: Bool? = nil
    fileprivate var _imageSize: Int32? = nil
    fileprivate var _fileSize: Int32? = nil
  }

  public init() {}

  fileprivate var _description_p: ImageFile.Description? = nil
  fileprivate var _data: Data? = nil
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "im.turms.proto"

extension ImageFile: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".ImageFile"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "description"),
    2: .same(proto: "data"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._description_p) }()
      case 2: try { try decoder.decodeSingularBytesField(value: &self._data) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if let v = self._description_p {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    }
    if let v = self._data {
      try visitor.visitSingularBytesField(value: v, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: ImageFile, rhs: ImageFile) -> Bool {
    if lhs._description_p != rhs._description_p {return false}
    if lhs._data != rhs._data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension ImageFile.Description: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = ImageFile.protoMessageName + ".Description"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "url"),
    2: .same(proto: "original"),
    3: .standard(proto: "image_size"),
    4: .standard(proto: "file_size"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.url) }()
      case 2: try { try decoder.decodeSingularBoolField(value: &self._original) }()
      case 3: try { try decoder.decodeSingularInt32Field(value: &self._imageSize) }()
      case 4: try { try decoder.decodeSingularInt32Field(value: &self._fileSize) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.url.isEmpty {
      try visitor.visitSingularStringField(value: self.url, fieldNumber: 1)
    }
    if let v = self._original {
      try visitor.visitSingularBoolField(value: v, fieldNumber: 2)
    }
    if let v = self._imageSize {
      try visitor.visitSingularInt32Field(value: v, fieldNumber: 3)
    }
    if let v = self._fileSize {
      try visitor.visitSingularInt32Field(value: v, fieldNumber: 4)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: ImageFile.Description, rhs: ImageFile.Description) -> Bool {
    if lhs.url != rhs.url {return false}
    if lhs._original != rhs._original {return false}
    if lhs._imageSize != rhs._imageSize {return false}
    if lhs._fileSize != rhs._fileSize {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
