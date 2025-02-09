// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: model/storage/storage_resource_info.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { Value } from "../common/value";

export const protobufPackage = "im.turms.proto";

export interface StorageResourceInfo {
  idNum?: string | undefined;
  idStr?: string | undefined;
  name?: string | undefined;
  mediaType?: string | undefined;
  uploaderId: string;
  creationDate: string;
  customAttributes: Value[];
}

function createBaseStorageResourceInfo(): StorageResourceInfo {
  return {
    idNum: undefined,
    idStr: undefined,
    name: undefined,
    mediaType: undefined,
    uploaderId: "0",
    creationDate: "0",
    customAttributes: [],
  };
}

export const StorageResourceInfo: MessageFns<StorageResourceInfo> = {
  encode(message: StorageResourceInfo, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.idNum !== undefined) {
      writer.uint32(8).int64(message.idNum);
    }
    if (message.idStr !== undefined) {
      writer.uint32(18).string(message.idStr);
    }
    if (message.name !== undefined) {
      writer.uint32(26).string(message.name);
    }
    if (message.mediaType !== undefined) {
      writer.uint32(34).string(message.mediaType);
    }
    if (message.uploaderId !== "0") {
      writer.uint32(40).int64(message.uploaderId);
    }
    if (message.creationDate !== "0") {
      writer.uint32(48).int64(message.creationDate);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).join();
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): StorageResourceInfo {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseStorageResourceInfo();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 8) {
            break;
          }

          message.idNum = reader.int64().toString();
          continue;
        }
        case 2: {
          if (tag !== 18) {
            break;
          }

          message.idStr = reader.string();
          continue;
        }
        case 3: {
          if (tag !== 26) {
            break;
          }

          message.name = reader.string();
          continue;
        }
        case 4: {
          if (tag !== 34) {
            break;
          }

          message.mediaType = reader.string();
          continue;
        }
        case 5: {
          if (tag !== 40) {
            break;
          }

          message.uploaderId = reader.int64().toString();
          continue;
        }
        case 6: {
          if (tag !== 48) {
            break;
          }

          message.creationDate = reader.int64().toString();
          continue;
        }
        case 15: {
          if (tag !== 122) {
            break;
          }

          message.customAttributes.push(Value.decode(reader, reader.uint32()));
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },
};

export interface MessageFns<T> {
  encode(message: T, writer?: BinaryWriter): BinaryWriter;
  decode(input: BinaryReader | Uint8Array, length?: number): T;
}
